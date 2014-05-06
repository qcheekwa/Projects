/*
  ampsOperationProjDownload.cpp
*/

#include <QtCore/qmath.h>
#include "ampsOperationProjInfo.h"

void ampsOperationProjInfo::DownloadOneAsset(QStandardItem *thisItem)
{
  QList<QVariant> myData;

  myData = (thisItem->data()).toList();
  QString asset_name = myData[2].toString();
  int asset_type = myData[0].toInt();
  int rev_num = myData[7].toInt();
  QString asset_size = myData[6].toString();
printf("folder item double clicked DownloadAsset - type = %d %s rev=%d -- %sB\n", asset_type, asset_name.toStdString().c_str(),
                                                                        rev_num, asset_size.toStdString().c_str());

  QString folderDestin = "E:/temp/";

  qint64 filesize = asset_size.toLongLong(); // qint64 same as qlonglong

  SetupDataDownloadOneAsset(myData[1].toString(), myData[7].toString(), ( myData[2].toString() + "." + myData[3].toString() ),
                                       folderDestin, myData[5].toString(), filesize, 0);

  DownloadOneAssetSubmit();
}

void ampsOperationProjInfo::DownloadOneAssetSubmit(void)
{
  QUrlQuery params = m_DownloadFile->params;
  QUrlQuery other_params;

  params.addQueryItem("startPos", QString::number(0));//
  params.addQueryItem("endPos", m_DownloadFile->fileSize);
  params.addQueryItem("chunk", QString::number(m_DownloadFile->pendingChunks[0]-1));

  m_ampsNetworkForAsset = new AMPSNetwork(AMPSNetwork::API_downloadAsset, m_AMPSWebServicesPath, m_Timeout);

  //connect( m_ampsNetworkForAsset, SIGNAL(finished(AMPSNetwork *)), this, SLOT(DownloadOneAssetReply(AMPSNetwork *)) );
  connect( m_ampsNetworkForAsset, SIGNAL(FileReadyRead(AMPSNetwork *)), this, SLOT(DownloadOneAssetReply(AMPSNetwork *)) );

printf("submit download asset\n");
  m_ampsNetworkForAsset->postDownloadAssetRequest(params, NULL);
  //m_ampsNetworkForProjInfo->postRequest(params, NULL);
}


void ampsOperationProjInfo::DownloadOneAssetReply(AMPSNetwork *ampsNetwork)
{
  AMPSNetworkReply *replyResult = ampsNetwork->GetReplyPackage();

    QString resultString="";
    int resultCode = -1;
    QJsonObject parseObject;

    if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_JSON)
        resultString = replyResult->jsonErrorString;

    if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_NETWORK)
        resultString = replyResult->networkErrorString;

    //quint64 jobIndex = m_rf_requests[replyResult.requestID].jobID;//

    if((replyResult->errorFlags)>0)
    {
        AMPSFileChunk *thisFile = m_DownloadFile;

printf("download err\n");
        DownloadOneAssetSubmit();
    }
    else
    {
      AMPSFileChunk *thisFile = m_DownloadFile;

printf("download asset ok\n");

      emit(FinishDownloadOneAsset((thisFile->fileName).toStdString(), (thisFile->localFolder).toStdString()));

      if(m_DownloadFile!=NULL)
        delete m_DownloadFile;
    }

    //m_rf_requests.remove(replyResult.requestID);
    ampsNetwork->deleteLater();
    //checkJobReadyToStart(jobIndex);

}

bool ampsOperationProjInfo::SetupDataDownloadOneAsset(QString assetID, QString revID, QString filename, QString folderDest, QString tProjectId, quint64 fileSize, quint64 jobIndex)
{
    bool status=true;
    qint64 tChunkSize = AMPSVar_Download_Chunk_Size;
    //main->getValue("AMPSVar_Download_Chunk_Size", tChunkSize);
    quint64 chunkSize = tChunkSize;
    quint64 endPos = chunkSize;
    quint64 totalChunks = qCeil((double)fileSize/(double)chunkSize);
    QString szFileName = filename;
    QString szFileFolder = folderDest;
    QString szFileID = QDate::currentDate().toString("yyyyMMdd")+QTime::currentTime().toString("hhmmss")+"-"+szFileName;

    qint64 tUserId;       tUserId=m_UserInfo->m_UserID;  //main->getValue("AMPSVar_Login_UserID", tUserId);
    QString tTokenId;     tTokenId=QString(m_UserInfo->m_TokenID.c_str());  //main->getValue("AMPSVar_Login_TokenID", tTokenId);
    qint64 tTimeout;      tTimeout=AMPSVar_WebServices_Timeout*100;  //main->getValue("AMPSVar_WebServices_Timeout",tTimeout);
    qint64 tDownloadSize; tDownloadSize=fileSize;  //main->getValue("AMPSVar_Download_Buffer_Size", tDownloadSize);

    QUrlQuery params;
    params.addQueryItem("tokenid",tTokenId);
    params.addQueryItem("userid", QString::number(tUserId));

    params.addQueryItem("projectid",tProjectId);
    params.addQueryItem("assetid_lst",assetID);
    params.addQueryItem("filename", filename);//
    //params.addQueryItem("folderDest", folderDest);//
    params.addQueryItem("folderDest", ".");
    params.addQueryItem("downloadSize", QString::number(tDownloadSize));
    if(revID!="") params.addQueryItem("revid", revID);

    if(endPos > fileSize) endPos = fileSize;

    m_DownloadFile = new AMPSFileChunk;
    AMPSFileChunk *thisFile = m_DownloadFile;
    thisFile->chunkID.clear();
    thisFile->chunkSize = QString::number(chunkSize);
    thisFile->fileName = szFileName;
    thisFile->fileSize = QString::number(fileSize);
    //thisFile->localFolder = szFileFolder;
    thisFile->localFolder = ".";
    thisFile->uniqueIdentifier = szFileID;
    thisFile->params = params;
    thisFile->lastChunk = totalChunks;
    for(quint64 i=0; i<totalChunks; i++) thisFile->pendingChunks.push_back(i+1);

    //m_jobs[jobIndex]->m_pendingFilesDownload.push_back(thisFile);

    //just being lazy. Let's just return true for now
    return status;
}


void ampsOperationProjInfo::DownloadAssetReply(AMPSNetwork *ampsNetwork)
{
  AMPSNetworkReply *replyResult = ampsNetwork->GetReplyPackage();

    QString resultString="";
    int resultCode = -1;
    QJsonObject parseObject;

    if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_JSON)
        resultString = replyResult->jsonErrorString;

    if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_NETWORK)
        resultString = replyResult->networkErrorString;

    //quint64 jobIndex = m_rf_requests[replyResult.requestID].jobID;//

    if((replyResult->errorFlags)>0)
    {
        //AMPSFileChunk *thisFile = m_jobs[jobIndex]->m_pendingChunksDownload[replyResult.requestID];
        AMPSFileChunk *thisFile = m_DownloadFile;
        //thisFile->pendingChunks.push_back(thisFile->chunkID[replyResult.requestID]);
        //thisFile->chunkID.remove(replyResult.requestID);
//        QVector<quint64>::Iterator pChunk = qFind(thisFile->chunkID.begin(), thisFile->chunkID.end(), replyResult.requestID);
//        if(pChunk != thisFile->chunkID.end()) thisFile->chunkID.erase(pChunk);
        //m_jobs[jobIndex]->m_pendingChunksDownload[replyResult.requestID] = NULL;
        //m_jobs[jobIndex]->m_pendingChunksDownload.remove(replyResult.requestID);

        //AMPSFileDownloadUpload* download = m_jobs[jobIndex]->m_downloadingFiles[replyResult.requestID];
        //m_jobs[jobIndex]->m_downloadingFiles[replyResult.requestID]=NULL;
        //m_jobs[jobIndex]->m_downloadingFiles.remove(replyResult.requestID);
        //delete download;
printf("download err\n");
        DownloadOneAssetSubmit();
    }
    else
    {
        AMPSFileChunk *thisFile = m_DownloadFile;

//        QVector<quint64>::Iterator pChunk = qFind(thisFile->chunkID.begin(), thisFile->chunkID.end(), replyResult.requestID);
//        if(pChunk != thisFile->chunkID.end()) thisFile->chunkID.erase(pChunk);
        //thisFile->chunkID.remove(replyResult.requestID);
        //m_jobs[jobIndex]->m_pendingChunksDownload[replyResult.requestID] = NULL;
        //m_jobs[jobIndex]->m_pendingChunksDownload.remove(replyResult.requestID);

        //AMPSFileDownloadUpload* download = m_jobs[jobIndex]->m_downloadingFiles[replyResult.requestID];
        //m_jobs[jobIndex]->m_downloadingFiles[replyResult.requestID]=NULL;
        //m_jobs[jobIndex]->m_downloadingFiles.remove(replyResult.requestID);
        //delete download;

        //checkPendingChunksToDownload();
/*
        if((thisFile->chunkID.size()==0)&&(thisFile->pendingChunks.size()==0))
        {
            //finalize, merge the downloaded files ! but by thinApps

            QVector<AMPSFileChunk*>::Iterator ppChunk =  qFind(m_jobs[jobIndex]->m_pendingFilesDownload.begin(), m_jobs[jobIndex]->m_pendingFilesDownload.end(), thisFile);
            if(ppChunk!=m_jobs[jobIndex]->m_pendingFilesDownload.end())
            {
                m_jobs[jobIndex]->m_pendingFilesDownload.erase(ppChunk);
            }

            const quint64 readBlockSize = 1024 * 1024 * 10;
            QByteArray *readBlob = new QByteArray(readBlockSize, '\0');
            QFile *mergedFile =  new QFile(thisFile->localFolder+ "/" + thisFile->fileName);
            mergedFile->open(QIODevice::WriteOnly);
            for(quint64 i=0; i<thisFile->lastChunk; i++)
            {

                QFile * downloadedFile = new QFile(thisFile->localFolder+ "/" + thisFile->fileName+ ".part" + QString::number(i));
                downloadedFile->open(QIODevice::ReadOnly);

                quint64 readSize=1;

                while(readSize>0)
                {
                    readBlob->fill('\0');
                    readSize = downloadedFile->read(readBlob->data(), readBlockSize);
                    if(readSize>0)
                    {

                        mergedFile->write(readBlob->data(), readSize);
                        mergedFile->flush();

                    }

                }

                downloadedFile->close();
                downloadedFile->remove();
                delete downloadedFile;
            }

            mergedFile->close();
            delete mergedFile;
            delete readBlob;
            delete thisFile;
        }
*/
printf("download asset ok\n");
  
if(m_DownloadFile!=NULL)
  delete m_DownloadFile;
    }

    //m_rf_requests.remove(replyResult.requestID);
    ampsNetwork->deleteLater();
    //checkJobReadyToStart(jobIndex);

}
