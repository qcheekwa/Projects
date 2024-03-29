#ifndef AMPSNETWORK_H
#define AMPSNETWORK_H

#include <QFile>
#include <QObject>
//#include <QJsonDocument>//
//#include <QJsonArray>//
#include <QMutex>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QString>
#include <QTime>
#include <QTimer>
#include <QUrlQuery>

#include "ampsCommon.h"

class AMPSNetwork : public QObject
{
    Q_OBJECT
public:

    enum WebServices{
        API_authenticateUser                = 1,
        API_logout                          = 2,
        API_getProjectInfo                  = 3,
        API_getRootFolderID                 = 4,
        API_getOneLevelChild                = 5,
        API_getAssetInfoOfAFolder           = 6,
        API_uploadChunk                     = 7,
        API_finalizeChunks                  = 8,
        API_downloadAsset                   = 9,
        API_createRevision                  = 10,
        API_getRevision                     = 11,
        API_createProjectFolder             = 12

    };

    enum Signals{
        SGN_finished                        = 1,
        SGN_downloadProgress                = 2,
        SGN_uploadProgress                  = 3

    };

    enum AMPSErrorFlags{
        AMPS_ERROR_JSON                       = 0x0001,
        AMPS_ERROR_NETWORK                    = 0x0002
    };

    explicit AMPSNetwork(QObject *parent = 0);
    explicit AMPSNetwork(AMPSNetwork::WebServices type, QString path, int timeOut);

    AMPSNetwork::~AMPSNetwork();

    quint64 AMPSNetwork::getObjectID();
    void AMPSNetwork::postRequest(QUrlQuery &params, const QByteArray* uploadFile = NULL);



signals:
    void finished(AMPSNetworkReply);
    void uploadProgress(quint64, qint64, qint64);
    void downloadProgress(quint64, qint64, qint64);

public slots:

private :
    QNetworkAccessManager   *m_networkManager;
    QNetworkReply           *m_reply;
    QTimer                  *m_timer;
    int                     m_timeOut;
    WebServices             m_webService;
    QString                 m_AMPSWebServicesPath;
    QFile                   *m_downloadedFile;
    AMPSNetworkReply        m_replyPackage;
    quint64     m_objectIndex;
    static quint64 s_objectCounter;
    void init();
    bool                    m_firstTimeOpenFile;
private slots:
    void networkError();
    void networkReply();
    void requestTimeout();
    void downloadReadyRead();
    void downloadFinished();
    void uploadProgress(qint64, qint64);
    void downloadProgress(qint64, qint64);

};

#endif // AMPSNETWORK_H
