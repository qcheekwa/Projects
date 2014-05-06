/*
  ampsOperationProjInfo_SLOTs.cpp
*/

#include <QMessageBox>

#include "ampsOperationProjInfo.h"

void ampsOperationProjInfo::FolderTreeViewClicked(const QModelIndex &mindex)
{
  const QStandardItemModel *thisItemModel = dynamic_cast<const QStandardItemModel*>(mindex.model());
  QStandardItem *parentItem = thisItemModel->itemFromIndex(mindex);

  int asset_type = parentItem->data().toList()[0].toInt();

  if(asset_type>1)
    return;

  int proj_index = parentItem->data().toList()[6].toInt();
  QString proj_name = parentItem->data().toList()[7].toString();
  QString proj_id = parentItem->data().toList()[5].toString();

printf("\nclicked proj index = %d %s\n", proj_index, proj_name.toStdString().c_str());

  int i;

  QStandardItem *root_selected_item;
  QStandardItem *thisChild;
  m_SelectedFolderItemViewModel->clear();
  root_selected_item = m_SelectedFolderItemViewModel->invisibleRootItem();
  //m_SelectedFolderItemView->setF

QStringList sl;
//sl.push_back(QString(""));
sl.push_back(QString("name"));
sl.push_back(QString("type"));
sl.push_back(QString("size"));
m_SelectedFolderItemViewModel->setHorizontalHeaderLabels(sl);
m_SelectedFolderItemViewModel->setSortRole(Qt::DisplayRole);
//m_SelectedFolderItemViewModel->horizontalHeaderItem(1)->

int rowCount = parentItem->rowCount();

  for(i=0; i<rowCount; i++)
  {
    thisChild = parentItem->child(i);

    QStandardItem *dummy = new QStandardItem;
    QStandardItem *new_thisChild = thisChild->clone();

    QStandardItem *file_type = new QStandardItem;
    QList<QVariant> filetypeData;
    filetypeData.push_back(0);                                             // [0] - asset type
    filetypeData.push_back(new_thisChild->data().toList()[2].toString()); // [1] - asset name
    filetypeData.push_back("folder");                                     // [2] - asset type or extension
    file_type->setData(filetypeData);
    file_type->setText("folder");

printf("\n%s\n", new_thisChild->data().toList()[2].toString().toStdString().c_str());

    QList<QStandardItem *> col_list;

    //dummy->setText("217");
    //col_list.push_back(dummy);
    dummy->setText("");
    dummy->setData("", Qt::UserRole);
    dummy->setTextAlignment(Qt::AlignRight);
    col_list.push_back(new_thisChild);
    col_list.push_back(file_type);
    col_list.push_back(file_type);
    //col_list.push_back(dummy);
    root_selected_item->appendRow(col_list);
  }

  AMPSFolderTreeRequest *tree_request_next = new AMPSFolderTreeRequest;
  tree_request_next->item = root_selected_item;
  tree_request_next->depth = -1;
  QString parentFolderID = parentItem->data().toList()[1].toString();
  GetFolderAssetInfo(proj_index, proj_id, parentFolderID, tree_request_next); 
}

void ampsOperationProjInfo::FolderTreeViewExpanded(const QModelIndex &mindex)
{
  //QVariant mydata=mindex.data(Qt::UserRole);

  const QStandardItemModel *thisItemModel = dynamic_cast<const QStandardItemModel*>(mindex.model());
  QStandardItem *parentItem = thisItemModel->itemFromIndex(mindex);

  int asset_type = parentItem->data().toList()[0].toInt();
  if(asset_type>1)
    return;

  int size = parentItem->data().toList().size();

  int proj_index = parentItem->data().toList()[6].toInt();
  QString proj_name = parentItem->data().toList()[7].toString();
  QString proj_id = parentItem->data().toList()[5].toString();

printf("\nexpanded proj index = %d %s\n", proj_index, proj_name.toStdString().c_str());
  //QStandardItem *thisItem = m_DataDoc->m_fileSystemModelAMPS->itemFromIndex(mindex);

  int i;

  for(i=0; i<parentItem->rowCount(); i++)
  {
    QStandardItem *thisChild = parentItem->child(i);

    if(thisChild->data().toList()[0].toString()=="0")      // there will also be a similarity check in the GetOneLevelChildFolderInfo(...)
    {
      AMPSFolderTreeRequest *tree_request_next = new AMPSFolderTreeRequest;
      tree_request_next->item = thisChild;    // requesting item via this child
      tree_request_next->depth = 2;
      QString childFolderID = thisChild->data().toList()[1].toString();
      GetOneLevelChildFolderInfo(proj_index, proj_id, childFolderID, tree_request_next); //, tree_request->depth - 1);
    }
  }

}

void ampsOperationProjInfo::FolderTreeItemClicked(const QModelIndex &mindex)
{
  const QStandardItemModel *thisItemModel = dynamic_cast<const QStandardItemModel*>(mindex.model());
  QStandardItem *parentItem = thisItemModel->itemFromIndex(mindex);

  int asset_type = parentItem->data().toList()[0].toInt();
  QString asset_name = parentItem->data().toList()[2].toString();

printf("folder item clicked - type = %d %s\n", asset_type, asset_name.toStdString().c_str());
}

void ampsOperationProjInfo::FolderTreeItemDoubleClicked(const QModelIndex &mindex)
{
  const QStandardItemModel *thisItemModel = dynamic_cast<const QStandardItemModel*>(mindex.model());
  QStandardItem *parentItem = thisItemModel->itemFromIndex(mindex);

  DownloadOneAsset(parentItem);
  //QString asset_name = parentItem->data().toList()[2].toString();
  //int asset_type = parentItem->data().toList()[0].toInt();
//printf("folder item double clicked - type = %d %s\n", asset_type, asset_name.toStdString().c_str());
}

void ampsOperationProjInfo::DoCopyFromDropToTreeView(QDropEvent *d_event)
{
printf("Do Copy to tree from drop\n");
QMessageBox mbox;
mbox.setText("Do Copy to tree from drop");
mbox.exec();

  // do actual copying action .....
}

void ampsOperationProjInfo::DoCopyFromDropToItemView(QDropEvent *d_event)
{
printf("Do Copy to item from drop\n");
QMessageBox mbox;
mbox.setText("Do Copy to item from drop");
mbox.exec();

  // do actual copying action .....
  // 1) file transfer
  // 2) signal when file transfer done - could be implemented in another function
  // 3) connect to s file transfer signal to update view after file transfer

}