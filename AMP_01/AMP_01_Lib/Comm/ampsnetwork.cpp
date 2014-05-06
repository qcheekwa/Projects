#include "ampsnetwork.h"
#include <iostream>

quint64 AMPSNetwork::s_objectCounter=1;

AMPSNetwork::AMPSNetwork(QObject *parent) :
    QObject(parent)
{
    m_AMPSWebServicesPath = "http://localhost";
    m_webService = API_authenticateUser;
    m_timeOut = 10;
    m_firstTimeOpenFile=true;
    init();
}

AMPSNetwork::AMPSNetwork( AMPSNetwork::WebServices type, QString path,int timeOut)
{
    m_AMPSWebServicesPath = path;
    m_webService = type;
    m_timeOut = timeOut;
    m_downloadedFile = NULL;
    m_reply = NULL;
    init();
}


AMPSNetwork::~AMPSNetwork()
{
    std::cout << "removed reply : " << m_objectIndex << std::endl;

//    m_networkManager->deleteLater();
    if(m_timer!=NULL) m_timer->deleteLater();
    if(m_downloadedFile!=NULL) m_downloadedFile->deleteLater();
//    m_reply->deleteLater();
}


void AMPSNetwork::init()
{
    m_networkManager = new QNetworkAccessManager(this);
    m_timer = new QTimer;
    m_reply = NULL;

    m_objectIndex = s_objectCounter++;


    m_replyPackage.requestID=m_objectIndex;
    m_replyPackage.errorFlags=0;

    std::cout << "created reply : " << m_objectIndex << std::endl;

}

quint64 AMPSNetwork::getObjectID()
{
    return m_objectIndex;
}

//// Post HTTP Request to CAMPS.
void AMPSNetwork::postRequest(QUrlQuery &params, const QByteArray* uploadFile)
{

    if(m_webService == API_downloadAsset)
    {
        QString requestUrl = m_AMPSWebServicesPath + "downloadAsset";


        QNetworkRequest request(QUrl(requestUrl.toLatin1().data()));

        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

        //get the filename in the local folder. We do not need to send it, but need to create an empty file first
        QString filename = params.queryItemValue("filename");
        QString folderDest = params.queryItemValue("folderDest");
        params.removeQueryItem("filename");
        params.removeQueryItem("folderDest");

        qint64 downloadSize = (params.queryItemValue("downloadSize")).toLongLong();
        params.removeQueryItem("downloadSize");

        quint64 startPos = (params.queryItemValue("startPos")).toULongLong();
        quint64 endPos = (params.queryItemValue("endPos")).toULongLong();
        params.removeQueryItem("startPos");
        params.removeQueryItem("endPos");
        QByteArray dataRange;
        QString strData("bytes=" + QString::number(startPos) + "-" + QString::number(endPos));
        dataRange = strData.toLatin1();
        request.setRawHeader("Range: ", dataRange);

        QString whichChunk = params.queryItemValue("chunk");
        params.removeQueryItem("chunk");

        if(m_downloadedFile!= NULL) delete m_downloadedFile;
        m_downloadedFile = new QFile(folderDest + "/" + filename + ".part" + whichChunk);

        //open the file
        //will do error checking here. For now assume we always successfully open
        m_downloadedFile->open(QIODevice::WriteOnly);
        std::cout << "filename in local : " << m_downloadedFile->fileName().toStdString() << std::endl;
        QByteArray data;
        data.append(params.toString());

        //  data.remove(0,1);
        std::cout << "sent request #" << m_objectIndex << "  :" << request.url().toString().toStdString() << "\\" << data.constData() << std::endl;
        std::cout << "sent request #" << m_objectIndex << " chunk: " <<whichChunk.toStdString() << " range : " << strData.toStdString() << std::endl;

        m_reply = m_networkManager->post(request, data);
        m_reply->setReadBufferSize(downloadSize);
//        m_timer->start(m_timeOut * 1000);
        connect(m_reply, SIGNAL(readyRead()), this, SLOT(downloadReadyRead()));
//      connect(m_timer, SIGNAL(timeout()), this, SLOT(requestTimeout()));
        connect(m_reply, SIGNAL(finished()), this, SLOT(downloadFinished()));
        connect(m_reply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(networkError()));
        connect(m_reply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(downloadProgress(qint64,qint64)));


    }
    else
    {
        QString requestUrl;

        switch (m_webService)
        {
            case API_authenticateUser:
                requestUrl = m_AMPSWebServicesPath + "Authenticate";
                break;
            case API_logout:
                requestUrl = m_AMPSWebServicesPath + "logout";
                break;
            case API_getProjectInfo:
                requestUrl = m_AMPSWebServicesPath + "getProjectInfo";
                break;
            case API_getRootFolderID:
                requestUrl = m_AMPSWebServicesPath + "getRootFolder";
                break;
            case API_getOneLevelChild:
                requestUrl = m_AMPSWebServicesPath + "getOneLevelChild";
                 break;
            case API_getAssetInfoOfAFolder:
                requestUrl = m_AMPSWebServicesPath + "getAsset";
                 break;

            case API_uploadChunk:
                requestUrl = m_AMPSWebServicesPath + "uploadChunk";
                break;
            case API_finalizeChunks:
                requestUrl = m_AMPSWebServicesPath + "finalizeV2";
                 break;
            case API_createRevision:
                requestUrl = m_AMPSWebServicesPath + "createRevision";
                 break;
            case API_getRevision :
                requestUrl = m_AMPSWebServicesPath + "getRevision";
                 break;
            case API_createProjectFolder :
                requestUrl = m_AMPSWebServicesPath + "createProjectFolder";
                 break;
            default:
                break;
        }

        QNetworkRequest request(QUrl(requestUrl.toLatin1().data()));
        if(uploadFile==NULL)
        {
            //that means, we only send simple POST requests to server
            request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
//            if(m_webService==API_getAssetInfoOfAFolder) params.addQueryItem("select","[latest_revnum]");
//            if(m_webService==API_getRevision) params.addQueryItem("select","[latest_revnum]");

            QByteArray data;
            data.append(params.toString());
        //  data.remove(0,1);
            std::cout << "sent request #" << m_objectIndex << "  :" << request.url().toString().toStdString() << "\\" << data.constData() << std::endl;

            m_reply = m_networkManager->post(request, data);



        }
        else
        {
            qsrand(QTime::currentTime().msec());
            QString randomString;
            const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
            for(int i=0; i<10; i++)
                randomString += charset[qrand()%62];
            //we upload file here
            QList<QPair<QString, QString> >  allQueries = params.queryItems(QUrl::FullyDecoded);

            QByteArray boundaryRegular((QString("--")+randomString).toUtf8());
            QByteArray boundary("\r\n--"+boundaryRegular+"\r\n");
            QByteArray boundaryLast("\r\n--"+boundaryRegular+"--\r\n");
            request.setRawHeader("Content-Type", QByteArray("multipart/form-data; boundary=").append(boundaryRegular));

            //start inserting the parameters
            QByteArray mimedata1("--"+boundaryRegular+"\r\n");
            for(QList<QPair<QString, QString>>::iterator p = allQueries.begin(); p!=allQueries.end(); ++p)
            {
                if(p->first != "chunkSize")
                {
                    mimedata1.append("Content-Disposition: form-data; name=\"");
                    mimedata1.append(p->first);
                    mimedata1.append("\"\r\n\r\n");
                    mimedata1.append(p->second);
                    mimedata1.append(boundary);
                }
            }
            quint64 chunkSize=0;
            chunkSize = params.queryItemValue("resumableChunkSize").toULongLong();

            //insert the binary file
            mimedata1.append("Content-Disposition: form-data; name=\"file\"; filename=\"blob\"\r\n");
            mimedata1.append("Content-Type: application/octet-stream\r\n\r\n");
//            std::cout << QString(mimedata1).toStdString() << std::endl;

            mimedata1.append(*uploadFile, chunkSize);
            mimedata1.append(boundaryLast);


            m_reply = m_networkManager->post(request, mimedata1);
        }

        //	Set time out
        m_timer->start(m_timeOut * 1000);
        connect(m_timer, SIGNAL(timeout()), this, SLOT(requestTimeout()));

        //	Receive the reply to check whether it has occured an error.
        connect(m_reply, SIGNAL(finished()), this, SLOT(networkReply()));
        connect(m_reply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(networkError()));
        connect(m_reply, SIGNAL(uploadProgress(qint64,qint64)), this, SLOT(uploadProgress(qint64,qint64)));
    }

}

void AMPSNetwork::networkError()
{
    //	Stop the time out for the current request
    if(m_timer->isActive())
        m_timer->stop();

    disconnect(m_timer, SIGNAL(timeout()), this, SLOT(requestTimeout()));
    disconnect(m_reply, SIGNAL(finished()), this, SLOT(networkReply()));
    disconnect(m_reply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(networkError()));

    std::cout << "NETWORK ERROR at REQUEST #" << m_objectIndex << std::endl;
    m_replyPackage.errorFlags |= AMPSNetwork::AMPS_ERROR_NETWORK;
    m_replyPackage.networkErrorString=m_reply->errorString();
    emit finished(m_replyPackage);

    if(m_webService == API_downloadAsset)
    {

        disconnect(m_reply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(downloadProgress(qint64,qint64)));

        if(m_downloadedFile!=NULL)
        {
            m_downloadedFile->flush();
            m_downloadedFile->close();
        }
    }
    else if(m_webService==API_uploadChunk)
        disconnect(m_reply, SIGNAL(uploadProgress(qint64,qint64)), this, SLOT(uploadProgress(qint64,qint64)));

    m_networkManager->deleteLater();
    m_reply->deleteLater();
//    n_errorMessages.append(n_reply->errorString());
//    ui->teTemp->append(n_errorMessages);

//    delete m_reply;

}

void AMPSNetwork::networkReply()
{
    //	Stop the time out for the current request
    if(m_timer->isActive())
        m_timer->stop();

    disconnect(m_timer, SIGNAL(timeout()), this, SLOT(requestTimeout()));
    disconnect(m_reply, SIGNAL(finished()), this, SLOT(networkReply()));
    disconnect(m_reply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(networkError()));


    if(m_webService==API_uploadChunk)
        connect(m_reply, SIGNAL(uploadProgress(qint64,qint64)), this, SLOT(uploadProgress(qint64,qint64)));


    QString resultRaw = m_reply->read(m_reply->bytesAvailable());
    //replace the int values to string because qjsonvalue is unable to convert to int !
    QVector<QString> toSearch;
    //hardcode here the list of AMPS JSON results that are in int
    toSearch.push_back(",\"file_size\":");

    for(QVector<QString>::Iterator p=toSearch.begin();p!=toSearch.end();++p)
    {
        int startPos=0;
        int resultPos=0;
        while(resultPos>-1)
        {
            resultPos = resultRaw.indexOf(*p, startPos);
            if(resultPos>-1)
            {
                if(resultRaw.at(resultPos + p->length())=="\"") {}
                else
                {
                    int endPos = resultRaw.indexOf(",", resultPos+1);
                    resultRaw.insert(resultPos + p->length(), "\"");
                    resultRaw.insert(endPos+1, "\"");
                }

            }
            startPos = resultPos+1;

        }
    }
//    QString result;

//    std::cout << "Raw Result : " << resultRaw.toStdString() << std::endl;

//   network error : will output to log file
//    std::cout << "Error :" << n_errorMessages.toStdString() << std::endl;
    QJsonParseError parseError;

    QByteArray JsonByte = resultRaw.toUtf8();
    QJsonDocument parseDocument = QJsonDocument::fromJson(JsonByte, &parseError);
    if(parseError.error!=QJsonParseError::NoError)
    {
        m_replyPackage.errorFlags |= AMPSNetwork::AMPS_ERROR_JSON;
        m_replyPackage.jsonErrorString=parseError.errorString();
    }
    m_replyPackage.requestResult= parseDocument.array();

    std::cout << "received data #" << m_objectIndex << ": " << resultRaw.toStdString() << std::endl;

    emit finished(m_replyPackage);

    m_networkManager->deleteLater();
    m_reply->deleteLater();

//    delete m_reply;
}

void AMPSNetwork::requestTimeout()
{
    //	Stop the time out for the current request
    if(m_timer->isActive())
        m_timer->stop();

    disconnect(m_timer, SIGNAL(timeout()), this, SLOT(requestTimeout()));
    disconnect(m_reply, SIGNAL(finished()), this, SLOT(networkReply()));
    disconnect(m_reply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(networkError()));

    m_replyPackage.errorFlags |= AMPSNetwork::AMPS_ERROR_NETWORK;
    m_replyPackage.networkErrorString="Request Time Out";




    emit finished(m_replyPackage);

    if(m_webService == API_downloadAsset)
    {

        disconnect(m_reply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(downloadProgress(qint64,qint64)));

        if(m_downloadedFile!=NULL)
        {
            m_downloadedFile->flush();
            m_downloadedFile->close();
        }
    }
    else if(m_webService==API_uploadChunk)
        disconnect(m_reply, SIGNAL(uploadProgress(qint64,qint64)), this, SLOT(uploadProgress(qint64,qint64)));

//    n_errorMessages.append("Request Timeout");
//    ui->teTemp->append(n_errorMessages);

//    delete m_reply;
    m_networkManager->deleteLater();
    m_reply->deleteLater();


 }

void AMPSNetwork::downloadReadyRead()
{
//    std::cout << m_reply->bytesAvailable() << " " << m_reply->bytesToWrite() << "======";
    m_downloadedFile->write(m_reply->readAll());
    m_downloadedFile->flush();
//    std::cout << m_reply->bytesAvailable() << " " << m_reply->bytesToWrite() << std::endl;
/*
    if(m_downloadedFile!=NULL)
    {
        if(m_firstTimeOpenFile==true)
        {
            m_downloadedFile->open(QIODevice::WriteOnly);
            m_firstTimeOpenFile=false;
        }
        else
            m_downloadedFile->open(QIODevice::WriteOnly | QIODevice::Append);
        std::cout << m_reply->bytesAvailable() << " " << m_reply->bytesToWrite() << "======";
        m_downloadedFile->write(m_reply->readAll());
        m_downloadedFile->flush();
        m_downloadedFile->close();
        std::cout << m_reply->bytesAvailable() << " " << m_reply->bytesToWrite() << std::endl;

    }
    */
}
void AMPSNetwork::downloadFinished()
{
//    if(m_timer->isActive())
//        m_timer->stop();

    disconnect(m_reply, SIGNAL(readyRead()), this, SLOT(downloadReadyRead()));
    disconnect(m_reply, SIGNAL(finished()), this, SLOT(networkReply()));
    disconnect(m_reply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(networkError()));

    disconnect(m_reply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(downloadProgress(qint64,qint64)));
    m_reply->deleteLater();
    m_networkManager->deleteLater();
    if(m_downloadedFile!=NULL)
    {
        m_downloadedFile->flush();
        m_downloadedFile->close();
    }
    emit finished(m_replyPackage);

}

void AMPSNetwork::uploadProgress(qint64 bytesSent, qint64 bytesTotal)
{
    emit uploadProgress(m_objectIndex, bytesSent, bytesTotal);
}

void AMPSNetwork::downloadProgress(qint64 bytesSent, qint64 bytesTotal)
{
    emit downloadProgress(m_objectIndex, bytesSent, bytesTotal);

}
