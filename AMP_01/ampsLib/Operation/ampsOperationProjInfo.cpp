/*
  ampsOperationProjInfo.cpp
*/

#include <stdlib.h>
#include <QApplication>
#include <QStyle>
#include <QMessageBox>
#include <QJsonObject>
#include "ampsOperationProjInfo.h"

ampsOperationProjInfo::ampsOperationProjInfo()
{
  Init();
}

ampsOperationProjInfo::ampsOperationProjInfo(const QObject *parent) : QObject((QObject *)parent)
{
  Init();
}


ampsOperationProjInfo::~ampsOperationProjInfo()
{
  delete m_Mutex;
}

void ampsOperationProjInfo::Init(void)
{
  m_AMPSWebServicesPath = DEFINED_AMPSVar_WebServices_Path;
  m_Timeout = 55;

  m_SelectedFolderItemViewModel = new QStandardItemModel;

  m_SortItemViewModel = new ampsSortProxyItemViewModel;
  m_SortItemViewModel->setSourceModel(m_SelectedFolderItemViewModel);
  m_SortItemViewModel->setDynamicSortFilter(true);
  m_SortItemViewModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
  m_SortItemViewModel->setSortCaseSensitivity(Qt::CaseInsensitive);
  //m_SelectedFolderItemView->setF

QStringList sl;
sl.push_back(QString("name"));
sl.push_back(QString("type"));
sl.push_back(QString("size"));
m_SelectedFolderItemViewModel->setHorizontalHeaderLabels(sl);

  m_Mutex = new QMutex;

  m_DownloadFile = NULL;

  InitConnect();
}

void ampsOperationProjInfo::InitConnect(void)
{

}

void ampsOperationProjInfo::GetProjInfo(ampsDataDoc *data_doc, const ampsUserInfo *user_info)
{
  m_DataDoc = data_doc;  // to use for putting reply data later on.
  m_UserInfo = (ampsUserInfo *)user_info;
  //CreateAndPostRequest();
  m_ampsNetworkForProjInfo = new AMPSNetwork(AMPSNetwork::API_getProjectInfo,
                                                          m_AMPSWebServicesPath, m_Timeout);

  QUrlQuery param;
  char *user_id_txt = (char *)calloc(256, sizeof(char));
  sprintf(user_id_txt, "%ld", m_UserInfo->m_UserID);
  param.addQueryItem("tokenid", QString::fromStdString(m_UserInfo->m_TokenID));
  param.addQueryItem("userid", QString::QString(user_id_txt));

  connect( m_ampsNetworkForProjInfo, SIGNAL(finished(AMPSNetwork *)), this, SLOT(GetProjInfoNetworkReply(AMPSNetwork *)) );
  m_ampsNetworkForProjInfo->postRequest(param, NULL);

  free((void *)user_id_txt);
}
/*
void ampsOperationProjInfo::CreateAndPostRequest(void)
{
  m_ampsNetworkForProjInfo = new AMPSNetwork(AMPSNetwork::API_getProjectInfo,
                                                          m_AMPSWebServicesPath, m_Timeout);

  QUrlQuery param;
  char *user_id_txt = (char *)calloc(256, sizeof(char));
  sprintf(user_id_txt, "%ld", m_UserInfo->m_UserID);
  param.addQueryItem("tokenid", QString::fromStdString(m_UserInfo->m_TokenID));
  param.addQueryItem("userid", QString::QString(user_id_txt));

  connect( m_ampsNetworkForProjInfo, SIGNAL(finished(AMPSNetwork *)), this, SLOT(GetProjInfoNetworkReply(AMPSNetwork *)) );
  m_ampsNetworkForProjInfo->postRequest(param, NULL);

  free((void *)user_id_txt);
}
*/
void ampsOperationProjInfo::GetProjInfoNetworkReply(AMPSNetwork *ampsNetwork)
{
printf("\nGet proj info from network\n");

  AMPSNetworkReply *replyResult = m_ampsNetworkForProjInfo->GetReplyPackage();
  //AMPSNetworkReply *replyResult = ampsNetwork->GetReplyPackage();  // similar as above

  QString resultString="";
  int resultCode = -1;
  int num_proj = -1;

  if(replyResult->errorFlags==0)
  {
    QJsonObject parseObject = replyResult->requestResult[0].toObject();
    QJsonArray jarray = replyResult->requestResult[0].toArray();
    QJsonArray json_array;

    resultCode = (int) (parseObject["error_code"].toDouble());

    //QJsonObject data_array = parseObject["data_array"].toObject();

    switch(resultCode)
    {
      case 0:
          m_DataProjInfo = parseObject["data_array"].toArray();
          m_DataDoc->m_DataProj.m_DataProjInfo = m_DataProjInfo;
          resultString = "retrieved proj info";
          {
            int i, num_proj;
            num_proj = m_DataDoc->m_DataProj.m_DataProjInfo.size();
            m_DataDoc->CreateEmptyProjFolder(num_proj);

            for(i=0; i<num_proj; i++)
            {
              m_DataDoc->m_DataProjFolder[i].m_ProjName = m_DataDoc->m_DataProj.m_DataProjInfo[i].toObject()["name"].toString();
              m_DataDoc->m_DataProjFolder[i].m_ProjID = m_DataDoc->m_DataProj.m_DataProjInfo[i].toObject()["project_id"].toString();
              m_DataDoc->m_DataProjFolder[i].m_LocalProjIndex = i;

printf("%d: %s - %s\n", i+1, m_DataDoc->m_DataProjFolder[i].m_ProjName.toStdString().c_str(),
                         m_DataDoc->m_DataProjFolder[i].m_ProjID.toStdString().c_str());
            }

            for(i=0; i<num_proj; i++)
            {
              QStandardItem *item = new QStandardItem;
              QList<QVariant> myData;

              myData.push_back(2);    // asset type '0'-folder '1'-asset '2'-others
              myData.push_back(m_DataDoc->m_DataProjFolder[i].m_ProjID);
              item->setData(myData);
              item->setText(m_DataDoc->m_DataProjFolder[i].m_ProjName);

//m_DataDoc->m_DataProjFolder[i].m_fileSystemModelAMPS->setData(myData);
              //m_DataDoc->m_DataProjFolder[i].m_fileSystemModelAMPS->invisibleRootItem()->setData(myData);
              //item->appendRow(m_DataDoc->m_DataProjFolder[i].m_fileSystemModelAMPS->invisibleRootItem());//
              //item->appendRow(m_DataDoc->m_DataProjFolder[i].m_FileSystemItem);//
              m_DataDoc->m_DataProjFolder[i].m_FileSystemItem = item;
              m_DataDoc->m_RootFileItemAll->appendRow(item);

              //m_DataDoc->m_FileSystemModelAll->appendRow(item);
              //m_DataDoc->m_FileSystemModelAll->appendRow(m_DataDoc->m_DataProjFolder[i].m_fileSystemModelAMPS->invisibleRootItem());

              //m_DataDoc->m_RootFileItemAll->setData(myData);
              //m_DataDoc->m_RootFileItemAll->setText(m_DataDoc->m_DataProjFolder[i].m_ProjName);
              //m_DataDoc->m_RootFileItemAll->appendRow(m_DataDoc->m_DataProjFolder[i].m_fileSystemModelAMPS->invisibleRootItem());

            }

            //m_DataDoc->CreateHorizontalHeaderItem();//
          }

          emit GetProjInfoFinished(resultCode);
          break;

      case 1:
          resultString = "session expire";
          emit GetProjInfoFinished(resultCode);
          break;

      case 2:
          resultString = "no right";
          emit GetProjInfoFinished(resultCode);
          break;

      case 33:
          resultString = "internal error";
          emit GetProjInfoFinished(resultCode);
          break;
    }
  }

  disconnect( m_ampsNetworkForProjInfo, SIGNAL(finished(AMPSNetwork *)), this, SLOT(GetProjInfoNetworkReply(AMPSNetwork *)) );
  m_ampsNetworkForProjInfo->deleteLater();
}

//void ampsOperationProjInfo::GetFolderInfoAll(ampsDataDoc *data_doc, const ampsUserInfo *user_info)
void ampsOperationProjInfo::GetFolderInfoAll(void)  // m_UserInfo & m_DataDoc must be already available via GetProjInfo()
{
  int i, num_proj;

  //m_UserInfo = user_info;

  num_proj = m_DataDoc->m_DataProjFolder.size();
/*
  for(i=0; i<num_proj; i++)
  {
    data_doc->m_DataProjFolder[i].m_ProjName = data_doc->m_DataProj.m_DataProjInfo[i].toObject()["name"].toString();
    data_doc->m_DataProjFolder[i].m_ProjID = data_doc->m_DataProj.m_DataProjInfo[i].toObject()["project_id"].toString();
    data_doc->m_DataProjFolder[i].m_LocalProjIndex = i+1;

printf("%d: %s - %s\n", i+1, data_doc->m_DataProjFolder[i].m_ProjName.toStdString().c_str(),
                         data_doc->m_DataProjFolder[i].m_ProjID.toStdString().c_str());
  }
*/
printf("\nproj num = %d\n", num_proj);
  for(i=0; i<num_proj; i++)
  {
    QUrlQuery params;
    qint64 tUserId;
    QString tTokenId;
    QString tProjectId;

    tUserId = m_UserInfo->m_UserID;
    tTokenId = QString::QString(m_UserInfo->m_TokenID.c_str());
    tProjectId = m_DataDoc->m_DataProjFolder[i].m_ProjID;

    params.addQueryItem("userid", QString::number(tUserId));
    params.addQueryItem("tokenid",tTokenId);
    params.addQueryItem("projectid",tProjectId);

    AMPSNetwork *getRootFolderNetwork = new AMPSNetwork(AMPSNetwork::API_getRootFolderID, m_AMPSWebServicesPath, m_Timeout);
    getRootFolderNetwork->SetLocalProjFolderInfo(&(m_DataDoc->m_DataProjFolder[i]));    // so that can get it back upon nework reply via slot
    connect( getRootFolderNetwork, SIGNAL(finished(AMPSNetwork *)), this, SLOT(GetRootFolderReply(AMPSNetwork *)) );
    getRootFolderNetwork->postRequest(params, NULL);
printf("--------\n");
  }
}

void ampsOperationProjInfo::GetRootFolderInfo(ampsDataDoc *data_doc, const int which_proj, const ampsUserInfo *user_info)
{

}

void ampsOperationProjInfo::GetRootFolderReply(AMPSNetwork *ampsNetwork)
{
  AMPSNetworkReply *replyResult = ampsNetwork->GetReplyPackage();

  QString resultString="";
  int resultCode = -1;
  QJsonObject parseObject;
  if(replyResult->errorFlags==0)
  {
    parseObject = replyResult->requestResult[0].toObject();
    resultCode = parseObject["error_code"].toDouble();
    switch(resultCode)
    {
            case 0 : resultString ="Get folder id successfully !";
                     break;
            case 1 : resultString ="Session has expired.";
                     break;
            case 2 : resultString ="No right on this function.";
                     break;
            case 3 : resultString ="Invalid or missing projectid parameter.";
                     break;

    }
  }

  if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_JSON)
    resultString = replyResult->jsonErrorString;

  if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_NETWORK)
    resultString = replyResult->networkErrorString;

  if((resultCode+replyResult->errorFlags>0))
  {
        //fail to get folder id
        //m_tvAMPSSelectedItem = NULL;
  }
  else
  {
    QJsonObject projectObject = parseObject["data_array"].toObject();
    QString rootFolderID= projectObject["folder_id"].toString();

    if(rootFolderID != "")
    {
      ampsDataDocProjFolder *local_folder_info = ampsNetwork->GetLocalProjFolderInfo();
      AMPSFolderTreeRequest *tree_request = new AMPSFolderTreeRequest;

      tree_request->depth = FOLDER_TREE_DEPTH;  // folder tree depth
      //tree_request->item = local_folder_info->m_fileSystemModelAMPS->invisibleRootItem();//
      tree_request->item = local_folder_info->m_FileSystemItem;

      // first element is type : 0 = folder, 1 = asset
      // second element is folder id/asset id;
      // third element is name
      // fourth element is ext (if it's asset)
      // fifth element is parent folder id
      // sixth element is project id
      // seventh element is current project index
      QList<QVariant> myData;
      myData.push_back(2); //
      myData.push_back(rootFolderID);
      //myData.push_back("root");
      myData.push_back(local_folder_info->m_ProjName);
      myData.push_back(QString(""));
      myData.push_back(QString(""));
      myData.push_back(local_folder_info->m_ProjID);
      myData.push_back(local_folder_info->m_LocalProjIndex);
/*
        // first element is type : 0 = folder, 1 = asset,
        // second element is folder id/asset id;
        // third element is name
        // fourth element is ext (if it's asset)
        // fifth element is parent folder id
        // sixth element is project id
        // seventh element is current project index
        myData.push_back(0); //
        myData.push_back(childFolderID);
        myData.push_back(childFolderName);
        myData.push_back(QString(""));
        myData.push_back(parentItem->data().toList()[1].toString());
        myData.push_back(parentItem->data().toList()[5].toString());
        myData.push_back(parentItem->data().toList()[6]);
        myData.push_back(local_folder_info->m_ProjName);
*/

      //local_folder_info->m_fileSystemModelAMPS->invisibleRootItem()->setData(myData);//
      local_folder_info->m_FileSystemItem->setData(myData);
      // same as above
      // m_DataDoc->m_DataProjFolder[local_folder_info->m_LocalProjIndex].m_fileSystemModelAMPS->invisibleRootItem()->setData(myData);

      GetOneLevelChildFolderInfo((local_folder_info->m_LocalProjIndex), local_folder_info->m_ProjID, rootFolderID, tree_request); //, 2);
    }
    //GetOneLevelChildFolerInfo(m_DataDoc, ampsNetwork->GetLocalProjFolderInfo()->m_LocalProjIndex, m_UserInfo);
printf("get root folder id of proj %d = %s \n----\n", ampsNetwork->GetLocalProjFolderInfo()->m_LocalProjIndex,
                                                       rootFolderID.toStdString().c_str());
  }

  disconnect( ampsNetwork, SIGNAL(finished(AMPSNetwork *)), this, SLOT(GetRootFolderReply(AMPSNetwork *)) );
  ampsNetwork->deleteLater();
//printf("\nGet root folder info from network\n");
}

void ampsOperationProjInfo::GetOneLevelChildFolderInfo(const int which_proj, const QString proj_id, const QString parent_folder_id,
                                                                               const AMPSFolderTreeRequest *ft_req) //, const int depth_to_get)
{
  QUrlQuery params;
  qint64 tUserId;
  QString tTokenId;
  QString tProjectId;

  tUserId = m_UserInfo->m_UserID;
  tTokenId = QString::QString(m_UserInfo->m_TokenID.c_str());
  //ft_req->depth = depth_to_get;

  params.addQueryItem("userid", QString::number(tUserId));
  params.addQueryItem("tokenid", tTokenId);
  params.addQueryItem("projectid", proj_id);
  params.addQueryItem("parent_id", parent_folder_id);

  AMPSNetwork *getChildFolderNetwork = new AMPSNetwork(AMPSNetwork::API_getOneLevelChild, m_AMPSWebServicesPath, m_Timeout);
  getChildFolderNetwork->SetLocalProjFolderInfo(&(m_DataDoc->m_DataProjFolder[which_proj]));    // so that can get it back upon nework reply via slot
  getChildFolderNetwork->SetFolderTreeRequest(ft_req);
  connect( getChildFolderNetwork, SIGNAL(finished(AMPSNetwork *)), this, SLOT(GetChildFolderReply(AMPSNetwork *)) );
  getChildFolderNetwork->postRequest(params, NULL);

printf("--------\n");
}

void ampsOperationProjInfo::GetChildFolderReply(AMPSNetwork *ampsNetwork)
{
  int i, j;
  AMPSNetworkReply *replyResult = ampsNetwork->GetReplyPackage();

printf("\nproj_req = %d\n", (ampsNetwork->GetLocalProjFolderInfo()->m_LocalProjIndex)+1);

  qint32 depthProcess=0;

  QString resultString="";
  int resultCode = -1;
  QJsonObject parseObject;
  if(replyResult->errorFlags==0)
  {
    parseObject = replyResult->requestResult[0].toObject();

    resultCode = parseObject["error_code"].toDouble();
    switch(resultCode)
    {
       case 0 : resultString ="Get children folder id successfully !";
                break;
       case 1 : resultString ="Session has expired.";
                break;
       case 2 : resultString ="No right on this function.";
                break;
       case 3 : resultString ="Invalid or missing projectid parameter.";
                 break;

    }
  }

  if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_JSON)
    resultString = replyResult->jsonErrorString;

  if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_NETWORK)
    resultString = replyResult->networkErrorString;

//    ui->teTemp->append(resultString);
  if((resultCode+replyResult->errorFlags>0))
  {
        //fail to get folder id
        //m_tvAMPSSelectedItem = NULL;
  }
  else
  {
    QJsonArray childArray = parseObject["data_array"].toArray();
    QIcon tempIcon = QApplication::style()->standardIcon(QStyle::SP_DirIcon);
    AMPSFolderTreeRequest *tree_request = ampsNetwork->GetFolderTreeRequest();
    QStandardItem *parentItem = tree_request->item;

    ampsDataDocProjFolder *local_folder_info = ampsNetwork->GetLocalProjFolderInfo();

    for(i=0; i<childArray.size(); i++)
    {
      QString childFolderID = ((childArray[i].toObject())["folder_id"]).toString();
      QString childFolderName = ((childArray[i].toObject())["name"]).toString();
      QStandardItem *existingChildItem;
      bool similar=false, samename=false;
      for(j=0; (j<parentItem->rowCount()) && (similar==false); j++)
      {
        existingChildItem= parentItem->child(j);
        if(existingChildItem->data().toList()[1].toString() == childFolderID)
        {
          similar=true;
          if(existingChildItem->text()==childFolderName)
            samename=true;
        }
      }

      if(similar==false)
      {
        QStandardItem *item = new QStandardItem;
        item->setDragEnabled(true);
        item->setDropEnabled(true);

        // first element is type : 0 = folder, 1 = asset,
        // second element is folder id/asset id;
        // third element is name
        // fourth element is ext (if it's asset)
        // fifth element is parent folder id
        // sixth element is project id
        // seventh element is current project index
        QList<QVariant> myData;
        myData.push_back(0); //
        myData.push_back(childFolderID);
        myData.push_back(childFolderName);
        myData.push_back(QString(""));
        myData.push_back(parentItem->data().toList()[1].toString());
        myData.push_back(parentItem->data().toList()[5].toString());
        myData.push_back(parentItem->data().toList()[6]);
        myData.push_back(local_folder_info->m_ProjName);

        item->setText(childFolderName);
        item->setData(myData);  //, Qt::UserRole);
        //item->setData(myData, Qt::UserRole);
        item->setIcon(tempIcon);
        //item->index().
        parentItem->appendRow(item);
      }
      else if((similar==true)&&(samename==false))
        existingChildItem->setText(childFolderName);
    }

    if( (tree_request->depth > 1) || (tree_request->depth==-1) )
    {
      for(i=0; i<parentItem->rowCount(); i++)
      {
        QStandardItem *thisChild = parentItem->child(i);

        if(thisChild->data().toList()[0].toString()=="0")
        {
          AMPSFolderTreeRequest *tree_request_next = new AMPSFolderTreeRequest;
          tree_request_next->item = thisChild;
          tree_request_next->depth = tree_request->depth - 1;
          QString childFolderID = thisChild->data().toList()[1].toString();  // childFolderID shall now be the parent to getting its one level child
          GetOneLevelChildFolderInfo((local_folder_info->m_LocalProjIndex), local_folder_info->m_ProjID, childFolderID, tree_request_next); //, tree_request->depth - 1);
        }
      }
    }

  }

  disconnect( ampsNetwork, SIGNAL(finished(AMPSNetwork *)), this, SLOT(GetChildFolderReply(AMPSNetwork *)) );
  delete (ampsNetwork->GetFolderTreeRequest());
  ampsNetwork->deleteLater();
}

void ampsOperationProjInfo::GetFolderAssetInfo(const int which_proj, const QString proj_id, const QString parent_folder_id,
                                                            const AMPSFolderTreeRequest *ft_req)
{
  QUrlQuery params;
  qint64 tUserId;
  QString tTokenId;
  QString tProjectId;

  tUserId = m_UserInfo->m_UserID;
  tTokenId = QString::QString(m_UserInfo->m_TokenID.c_str());
  //ft_req->depth = depth_to_get;

  params.addQueryItem("userid", QString::number(tUserId));
  params.addQueryItem("tokenid", tTokenId);
  params.addQueryItem("projectid", proj_id);
  params.addQueryItem("folderid", parent_folder_id);
  params.addQueryItem("select", "[asset_id],[name],[ext],[projectid],[folderid],[file_size],[latest_revnum],[latest_revsize]");

  AMPSNetwork *getChildFolderNetwork = new AMPSNetwork(AMPSNetwork::API_getAssetInfoOfAFolder, m_AMPSWebServicesPath, m_Timeout);
  getChildFolderNetwork->SetLocalProjFolderInfo(&(m_DataDoc->m_DataProjFolder[which_proj]));    // so that can get it back upon nework reply via slot
  getChildFolderNetwork->SetFolderTreeRequest(ft_req);
  connect( getChildFolderNetwork, SIGNAL(finished(AMPSNetwork *)), this, SLOT(GetFolderAssetReply(AMPSNetwork *)) );
  getChildFolderNetwork->postRequest(params, NULL);

printf("--------\n");
}

void ampsOperationProjInfo::GetFolderAssetReply(AMPSNetwork *ampsNetwork)
{
  int i, j;
  AMPSNetworkReply *replyResult = ampsNetwork->GetReplyPackage();

  QString resultString="";
  int resultCode = -1;
  QJsonObject parseObject;
  qint32 depthProcess=0;
  if(replyResult->errorFlags==0)
  {
    parseObject = replyResult->requestResult[0].toObject();
    resultCode = parseObject["error_code"].toDouble();
    switch(resultCode)
    {
      case 0 : resultString ="Succeeded, and return data_array a variable is arrays that each element is another array with keys are specified in the select clause";
               break;
      case 1 : resultString ="Session has expired.";
               break;
      case 2 : resultString ="No right on this function.";
               break;
      case 3 : resultString ="invalid or missing projectid.";
               break;
      case 4 : resultString ="you have to specify the end_pos param to get a range.";
               break;
      case 5 : resultString ="the end_pos is less than start_pos.";
               break;

    }
  }

  if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_JSON)
    resultString = replyResult->jsonErrorString;

  if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_NETWORK)
    resultString = replyResult->networkErrorString;

//    ui->teTemp->append(resultString);
  if((resultCode+replyResult->errorFlags>0))
  {
        //fail to get folder id
        //m_tvAMPSSelectedItem = NULL;
  }
  else
  {
    QJsonArray childArray = parseObject["data_array"].toArray();
    QIcon tempIcon = QApplication::style()->standardIcon(QStyle::SP_FileIcon);
    AMPSFolderTreeRequest *tree_request = ampsNetwork->GetFolderTreeRequest();
    QStandardItem *parentItem = tree_request->item;

    ampsDataDocProjFolder *local_folder_info = ampsNetwork->GetLocalProjFolderInfo();

    m_Mutex->lock();

    QVector<bool> rowsToDelete;
    for(int i=0; i<parentItem->rowCount(); i++)
    {
      if(parentItem->child(i)->data().toList()[0].toInt()==0)
        rowsToDelete.push_back(false);
      else
        rowsToDelete.push_back(true);
    }

    for(int i=0; i<childArray.size(); i++)
    {
      QString childAssetID = ((childArray[i].toObject())["asset_id"]).toString();
      QString childAssetName = ((childArray[i].toObject())["name"]).toString();
      QString childAssetExt = ((childArray[i].toObject())["ext"]).toString();
      QString childAssetProjectID = ((childArray[i].toObject())["projectid"]).toString();
      QString childAssetFolderID = ((childArray[i].toObject())["folderid"]).toString();
      //QString childAssetSize = ((childArray[i].toObject())["file_size"]).toString();//
      QString childAssetSize = ((childArray[i].toObject())["latest_revsize"]).toString();
      //QString childAssetSize;
      //childAssetSize.setNum(((childArray[i].toObject())["latest_revsize"]).toInt());
      QString childLatestRevNum = ((childArray[i].toObject())["latest_revnum"]).toString();

//printf("\nsize = %d\n", ((childArray[i].toObject())["latest_revsize"]).toInt());
//printf("\nsize = %s\n", childAssetSize.toStdString().c_str());

      QStandardItem *existingChildItem;
      QStandardItem *toGetRevision;
      bool similar=false, samename=false;
      for(int j=0; (j<parentItem->rowCount()) && (similar==false); j++)
      {
        existingChildItem= parentItem->child(j);
        if(existingChildItem->data().toList()[1].toString() == childAssetID)
        {
          rowsToDelete[j]=false;
          similar=true;
          if(existingChildItem->text()==childAssetName)
            samename=true;
        }
      }

      QList<QVariant> myData;
      myData.push_back(1); //
      myData.push_back(childAssetID);  // elemetn #1
      myData.push_back(childAssetName);  // elemetn #2
      myData.push_back(childAssetExt);  // elemetn #3
      myData.push_back(childAssetFolderID);  // elemetn #4
      myData.push_back(childAssetProjectID);  // elemetn #5
      myData.push_back(childAssetSize);  // elemetn #6
      myData.push_back(childLatestRevNum);  // elemetn #7
      myData.push_back("");

      if(similar==false)
      {
        QStandardItem *item = new QStandardItem;
        item->setDragEnabled(true);
        item->setDropEnabled(true);

        QStandardItem *file_type = new QStandardItem;
        QList<QVariant> filetypeData;
        filetypeData.push_back(1);           // [0] - asset type
        filetypeData.push_back(childAssetID);
        filetypeData.push_back(childAssetName);  // [1] - asset name
        filetypeData.push_back(childAssetExt);   // [2] - asset type or extension
        //file_type->setData(filetypeData);
        file_type->setData(myData);
        file_type->setText(childAssetExt);

        QStandardItem *file_size = new QStandardItem;
        file_size->setText(childAssetSize + " B");
        //file_size->setData(childAssetSize.toLongLong(), Qt::UserRole);
        //file_size->setData(myData, Qt::UserRole);
        file_size->setData(myData);
        file_size->setTextAlignment(Qt::AlignRight);

        //first element is type : 0 = folder, 1 = asset
        //second element is folder id/asset id;
        //third element is name
        //fourth element is ext (if it's asset)
        //fifth element is parent folder id
        //sixth element is project id
        //seventh element is asset size
        //eigth element is latest revision number
        //ninth element is revision id
        item->setText(childAssetName);
        item->setData(myData);  //, Qt::UserRole);
        //item->setData(myData, Qt::UserRole);
        item->setIcon(tempIcon);

        QList<QStandardItem *> col_list;
        col_list.push_back(item);
        col_list.push_back(file_type);
        col_list.push_back(file_size);
        parentItem->appendRow(col_list);

        toGetRevision = item;

      }
      else
      {
        if(samename==false)
          existingChildItem->setText(childAssetName);
        else
          existingChildItem->setData(myData);

        toGetRevision = existingChildItem;
      }

      if(childLatestRevNum!="0") //
      {
/*
        //get the revision information !
        QUrlQuery params0;
        qint64 tUserId;       main->getValue("AMPSVar_Login_UserID", tUserId);
        QString tTokenId;   main->getValue("AMPSVar_Login_TokenID", tTokenId);
        qint64 tTimeout;      main->getValue("AMPSVar_WebServices_Timeout",tTimeout);

        params0.addQueryItem("userid", QString::number(tUserId));
        params0.addQueryItem("tokenid",tTokenId);
        params0.addQueryItem("projectid",childAssetProjectID);
        params0.addQueryItem("assetid",childAssetID);
        params0.addQueryItem("revnum",childLatestRevNum);

        quint64 todo0= main->createAndPostRequest(AMPSNetwork::API_getRevision,this, SLOT(getRevisionReply(AMPSNetworkReply)), params0, tTimeout);

        m_pendingGetRevision[todo0] = toGetRevision;
*/
printf("Get revision\n");
      }

    }

    int rowOffset=0;
    for(int i=0; i<rowsToDelete.size(); i++)
    {
      if(rowsToDelete[i]==true)
      {
        parentItem->removeRow(i-rowOffset);
        rowOffset++;
      }
    }

    //depthProcess=m_childrenToGet[replyResult->requestID].depth;
    depthProcess = tree_request->depth;
    m_Mutex->unlock();
  }

  disconnect( ampsNetwork, SIGNAL(finished(AMPSNetwork *)), this, SLOT(GetChildFolderReply(AMPSNetwork *)) );
  delete (ampsNetwork->GetFolderTreeRequest());
  ampsNetwork->deleteLater();

printf("\nasset reply\n");
}