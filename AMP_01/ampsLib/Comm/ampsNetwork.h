#ifndef AMPSNETWORK_H
#define AMPSNETWORK_H

#include <QFile>
#include <QObject>
#include <QJsonDocument>//
#include <QJsonArray>//
#include <QMutex>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QString>
#include <QTime>
#include <QTimer>
#include <QUrlQuery>

#include "../Operation/ampsDataDoc.h"
#include "ampsCommon.h"

//#define DEFINED_AMPSVar_WebServices_Path "http://155.69.147.160/AMPS/ampslt/AMPSAPI/"

//http://46.137.247.210/AMPS/ampslt/AMPSAPI/
//http://46.137.247.210/AMPS/
//http://46.137.247.210/AMPS/amps/    // for front-end testing

#define DEFINED_AMPSVar_WebServices_Path "http://46.137.247.210/AMPS/ampslt/AMPSAPI/" // frontend API, for testing, qck - magic
/* web logon to http://155.69.151.13/AMPS/amps/#   -  for testing // cloud - qck - magic */
/* http://155.69.151.13/AMPS/ampsadm/ backend -  for testing // cloud - qck - magic */

/* web logon to 155.69.147.155/AMPS/amps/ - for operation // data centre  - CheeKwang - magic */

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
    void postRequest(QUrlQuery &params, const QByteArray* uploadFile = NULL);

    void postDownloadAssetRequest(QUrlQuery &params, const QByteArray* uploadFile = NULL);

    void Init();

    void SetReplyData(AMPSNetworkReply *rdata);

    inline AMPSNetworkReply * GetReplyPackage(void){  return m_replyPackage;  }

    inline void SetLocalProjFolderInfo(const ampsDataDocProjFolder *pfinfo)
    {
      m_LocalProjFolderInfo = (ampsDataDocProjFolder *)pfinfo;
    }

    inline ampsDataDocProjFolder *GetLocalProjFolderInfo(void)
    {
      return m_LocalProjFolderInfo;
    }

    inline void SetFolderTreeRequest(const AMPSFolderTreeRequest *tree_request)
    {
      m_FolderTreeRequest = (AMPSFolderTreeRequest *)tree_request;
    }

    inline AMPSFolderTreeRequest * GetFolderTreeRequest(void)
    {
      return m_FolderTreeRequest;
    }

signals:
    void finished(AMPSNetworkReply *);
    void finished(AMPSNetwork *self);
    void uploadProgress(quint64, qint64, qint64);
    void downloadProgress(quint64, qint64, qint64);
    void FileReadyRead(AMPSNetwork *self);
    //void FileReadyRead(QString filename);

public slots:

private :
    QNetworkAccessManager   *m_networkManager;
    QNetworkReply           *m_reply;
    QTimer                  *m_timer;
    int                     m_timeOut;
    WebServices             m_webService;
    QString                 m_AMPSWebServicesPath;
    QFile                   *m_downloadedFile;
    //AMPSNetworkReply        m_replyPackage;
    AMPSNetworkReply        *m_replyPackage;
    ampsDataDocProjFolder   *m_LocalProjFolderInfo;
    AMPSFolderTreeRequest   *m_FolderTreeRequest;
    quint64     m_objectIndex;
    void *m_UserData;
    static quint64 s_objectCounter;
    //void *s_objectCounter;

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
