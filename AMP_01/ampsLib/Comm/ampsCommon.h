#ifndef AMPSCOMMON_H
#define AMPSCOMMON_H

#include <QDir>
#include <QFileSystemModel>
#include <QFileSystemWatcher>
#include <QJsonArray>//
#include <QProcess>
#include <QString>
#include <QStringList>
#include <QStandardItem>
#include <QTime>
#include <QUrlQuery>
#include <QVector>

struct AMPSNetworkReply
{
    quint64 requestID;
    QJsonArray requestResult;//
    QString networkErrorString;
    QString jsonErrorString;//
    int errorFlags;
};


struct AMPSProjects
{
    QString projectID;
    QString projectName;
    QString localFoder;
    int m_LocalProjectIndex;
};

struct AMPSFolderTreeRequest
{
    QStandardItem *item;
    qint32 depth;

};

struct AMPSFolderDownloadUpload
{
    QStandardItem *item;
    QDir path;

};

struct AMPSFileDownloadUpload
{

    quint64 fileSize;
    quint64 transferredBytes;
};

struct AMPSFolderCreateRequest
{
    QStandardItem *parentItem;
    QString name;
};

struct AMPSFileFinalize
{
    QString filename;
    QString folderID;
};



struct AMPSRenderFarmJobRequests
{

    enum renderFarmRequestType{
        RF_createFolderResultInAMPS = 1,
        RF_downloadChunkFile = 2,
        RF_uploadChunkFile = 3,
        RF_finalizeUploadedResult = 4
    };

    quint32 jobID;
    qint8   type;

};

struct AMPRSRenderFarmFile
{
    QString projectID;
    QString assetID;
    QString folderID;
    QString revID;
    QString filename;
    quint64 filesize;

};


//contains input from AMPS server
struct AMPSRenderFarmJobInputParam
{
    AMPRSRenderFarmFile sceneFile;
    QVector<AMPRSRenderFarmFile> supportFiles;
  /*
    QString remoteFolderID_MAX;             // amps folder containing .max file to render
    QString remoteAssetID_MAX;              // assetid of .max file in amps
    QString remoteAssetName_MAX;            // asset name of .max file in amps
    QString remoteProjectID_MAX;            // amps project id of the .max file
    QString remoteFolderID_Maps;            // amps root folder containing assets
    QString remoteProjectID_Maps;           // amps project id of the root folder containing assets
*/

    QString remoteFolderID_Result;          // amps folder containing the rendering results
    QString projectID;         // amps project id of the folder containing the rendering results

    QString outputRenderFilename;
    quint64 outputWidth;
    quint64 outputHeight;
    qint64 startFrame;
    qint64 endframe;
    qint64 everyNthFrame;

    double outputAspectRatio;
    QString frames;
    qint8   outputSequence;
    bool continueError;

    QString renderer;

    QString localFolderName;
    quint64 jobIndex;
};

struct AMPSRenderFarmResultStatus
{
    QFileInfo file;
    qint64 lastSize;
    qint8 counter;

};


struct AMPSFileChunk
{
    QString projectid;
    QString uniqueIdentifier;
    QString fileName;
    QString chunkSize;
    QString fileSize;
    QString localFolder;
    QString folderid;
    QHash<quint64, quint64> chunkID; //key = chunk ID, data = which chunk
    QVector<quint64> pendingChunks;
    quint64 lastChunk;
    QUrlQuery params;
    QHash<quint64, quint64> bytesSent;
    QHash<quint64, quint64> maxChunkSize;

    bool    isRevision;
    QString orgRevisionID;
    QString newRevisionID;
    QStandardItem *parent; //contains pointer to the parent folder that will be refreshed its list of children in the ui
};


struct AMPSRenderFarmJobVariables
{
    quint64 jobIndex;
    QDir localFolderAsset;
    QDir localFolderResult;
    QDir localFolderConfigFiles;
    QDir localFolderSceneFile;

    AMPSRenderFarmJobInputParam *inputParams;


    QHash<quint64, AMPSFolderTreeRequest> m_childrenToGet;

    QVector<AMPSFileChunk*>                     m_pendingFiles;
    QVector<AMPSFolderDownloadUpload*>          m_pendingFoldersDownload;
    QVector<AMPSFolderDownloadUpload*>          m_pendingFoldersUpload;
    QHash<quint64, AMPSFileChunk*>              m_pendingChunks;

    QVector<AMPSFileChunk*>                     m_pendingFilesDownload;
    QHash<quint64, AMPSFileChunk*>              m_pendingChunksDownload;
    QHash<quint64, AMPSFolderCreateRequest>     m_pendingFolderCreate;
    QHash<quint64, AMPSFileChunk* >             m_pendingFinalize; //first element : filename, second element : folder id, third element : project id;
    QHash<quint64, AMPSFileDownloadUpload* >    m_downloadingFiles;
    QHash<quint64, AMPSFileDownloadUpload* >    m_uploadingChunks;
    QHash<QString, AMPSRenderFarmResultStatus>  m_resultFilesStatus;

    static QStringList                                 s_resultsUploading;
    QFileSystemWatcher*     localFolderMonitor;

    QTime       timer;
    int         renderingTime;
    quint64     totalResults;
    quint64     totalFinishedResults;
    QProcess    manager;
};



#endif // AMPSCOMMON_H
