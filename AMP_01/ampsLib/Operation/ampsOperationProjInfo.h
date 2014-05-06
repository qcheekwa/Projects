/*
  ampsOperationProjInfo.h
*/

#ifndef AMPSOPERATIONPROJINFO_HH
#define AMPSOPERATIONPROJINFO_HH


#include <QMutex>
#include <QDropEvent>
#include <QSortFilterProxyModel>
#include "ampsOperationBase.h"
#include "ampsUserInfo.h"
#include "ampsDataDoc.h"
#include "ampsSortProxyItemViewModel.h"
#include "../Comm/ampsNetwork.h"

#define FOLDER_TREE_DEPTH 2

#define AMPSVar_Download_Buffer_Size 1000000
#define AMPSVar_Download_Chunk_Size 1048576 * 50
#define AMPSVar_Download_Max_Chunks 3
#define AMPSVar_WebServices_Timeout 10

class ampsOperationProjInfo : public QObject, public ampsOperationBase
{
  Q_OBJECT

  public:
    ampsOperationProjInfo();
    ampsOperationProjInfo(const QObject *parent);
    virtual ~ampsOperationProjInfo();

    void Init(void);
    void InitConnect(void);

    //inline void SetDataPtr(const QJsonArray *data_ptr){  m_DataProjInfo =  data_ptr;  }
    inline void SetUser(const ampsUserInfo *user_info){  m_UserInfo = (ampsUserInfo *)user_info;  }

    void GetProjInfo(ampsDataDoc *data_doc, const ampsUserInfo *user_info);

    //void GetFolderInfoAll(ampsDataDoc *data_doc);
    void GetFolderInfoAll(void); //ampsDataDoc *data_doc, const ampsUserInfo *user_info);

    void GetRootFolderInfo(ampsDataDoc *data_doc, const int which_proj);
    void GetRootFolderInfo(ampsDataDoc *data_doc, const int which_proj, const ampsUserInfo *user_info);

    void GetOneLevelChildFolderInfo(const int which_proj, const QString proj_id, const QString parent_folder_id,
                                                            const AMPSFolderTreeRequest *ft_req); //, const int depth_to_get=1);
    void GetFolderAssetInfo(const int which_proj, const QString proj_id, const QString parent_folder_id,
                                                            const AMPSFolderTreeRequest *ft_req);

    void GetOneLevelChildFolderInfo(ampsDataDoc *data_doc, const int which_proj);
    void GetOneLevelChildFolderInfo(ampsDataDoc *data_doc, const int which_proj, const ampsUserInfo *user_info);
    //void GetOneLevelChildFolerInfo(const ampsDataDocProjFolder *which_proj_folder, const ampsUserInfo *user_info);

    //void CreateAndPostRequest(void);

    //////// For download asset ///////

    void DownloadOneAsset(QStandardItem *thisItem);
    bool SetupDataDownloadOneAsset(QString assetID, QString revID, QString filename, QString folderDest, QString tProjectId, quint64 fileSize, quint64 jobIndex);
    void DownloadAsset(QVariant *data_info);
    void DownloadOneAssetSubmit(void);

    AMPSFileChunk *m_OneFileChunk;
    //std::map<AMPSFileChunk *, 

  signals:
    void GetProjInfoFinished(int ok);
    void FinishDownloadOneAsset(std::string filename, std::string folder_name);

  public slots:
    void GetProjInfoNetworkReply(AMPSNetwork *ampsNetwork);
    void GetRootFolderReply(AMPSNetwork *ampsNetwork);
    void GetChildFolderReply(AMPSNetwork *ampsNetwork);
    void GetFolderAssetReply(AMPSNetwork *ampsNetwork);

    void FolderTreeViewClicked(const QModelIndex &mindex);
    void FolderTreeViewExpanded(const QModelIndex &mindex);

    void FolderTreeItemClicked(const QModelIndex &mindex);
    void FolderTreeItemDoubleClicked(const QModelIndex &mindex);

    void DoCopyFromDropToTreeView(QDropEvent *d_event);
    void DoCopyFromDropToItemView(QDropEvent *d_event);

    ///////////////////////////////////////////

    void DownloadOneAssetReply(AMPSNetwork *ampsNetwork);
    void DownloadAssetReply(AMPSNetwork *ampsNetwork);

  public:
    AMPSNetwork *m_ampsNetworkForProjInfo;
    AMPSNetwork *m_ampsNetworkForAsset;
    int m_Timeout;
    ampsUserInfo *m_UserInfo;
    QString m_AMPSWebServicesPath;
    QJsonArray m_DataProjInfo;
    QMutex *m_Mutex;

    AMPSFileChunk *m_DownloadFile;

    ampsDataDoc *m_DataDoc;
    QStandardItemModel *m_SelectedFolderItemViewModel;
    ampsSortProxyItemViewModel *m_SortItemViewModel;
    //QSortFilterProxyModel *m_SortItemViewModel;
};

#endif
