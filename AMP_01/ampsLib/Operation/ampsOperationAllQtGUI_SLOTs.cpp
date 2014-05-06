/*
  ampsOperationAllQtGUI_SLOTs.cpp
*/

#include "ampsOperationAllQtGUI.h"

QStandardItemModel * TestStandardItem(void);

void ampsOperationAllQtGUI::RetrieveProjectInfo(void)
{
  printf("\nretrieving project info\n");
  m_OperationProjInfo->GetProjInfo(m_DataDoc, m_OperationAutheticateUser->GetUserInfo());
  //m_ViewContainerQtGUI.Exe();
}

void ampsOperationAllQtGUI::ShowProjSelector(void)
{
  m_ViewContainerQtGUI->m_DockWidgetProjSelector->show();
}

void ampsOperationAllQtGUI::ShowProjInfo(void)
{
  m_ViewContainerQtGUI->m_TabDockWinProjView->show();
  //m_subWindowProjInfo->show();
}

void ampsOperationAllQtGUI::UpdateProjInfo(int status)
{
  if(status == 0)
  {
    //m_DataDoc->m_DataProj.m_DataProjInfo = m_OperationProjInfo->m_DataProjInfo;  // not needed here
    m_ViewContainerQtGUI->m_DockWidgetProjSelector->UpdateDispData(m_DataDoc->m_DataProj.m_DataProjInfo);

    //DispProj();

    m_OperationProjInfo->GetFolderInfoAll();//
    //int num_proj;
    //num_proj = m_DataDoc->m_DataProj.m_DataProjInfo.size();
    //m_DataDoc->CreateEmptyProjFolder(num_proj);

    //m_OperationProjInfo->GetFolderInfoAll(m_DataDoc, m_OperationAutheticateUser->GetUserInfo());

//printf("\nproj num = %d\n", num_proj);
  }
}

void ampsOperationAllQtGUI::SelectDispProj(QListWidgetItem *sel_item)
{
  QJsonObject proj_info_obj;
  m_DataDoc->m_DataProj.GetDocObjectByName(sel_item->text().toStdString(), proj_info_obj);

  QStandardItemModel *smodel = m_DataDoc->GetItemModelByProjName(sel_item->text());
  //QStandardItemModel *smodel = TestStandardItem();

  m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderTreeView->setModel(smodel);
  m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderTreeView->update();
  m_ViewContainerQtGUI->m_DockWidgetProjInfo->UpdateDispData(proj_info_obj);

printf("selected project name: %s\n", sel_item->text().toStdString().c_str());
printf("%s\n", (proj_info_obj)["name"].toString().toStdString().c_str());

}

void ampsOperationAllQtGUI::DispProj(void)
{
  QStandardItemModel *smodel = m_DataDoc->m_FileSystemModelAll;
  m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderTreeView->setModel(smodel);
  m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderTreeView->update();
}

void ampsOperationAllQtGUI::ShowAssetInfo(void)
{
  m_ViewContainerQtGUI->m_TabDockWinAssetView->show();
}

void ampsOperationAllQtGUI::RefreshFolderView(void)
{
  //m_OperationProjInfo->GetFolderInfoAll(m_DataDoc, m_OperationAutheticateUser->GetUserInfo());
  m_OperationProjInfo->GetFolderInfoAll();
}


//////////////////////////////////////////////////////////////////////////////////////////////
// For testing only                                                                         //
//////////////////////////////////////////////////////////////////////////////////////////////
QStandardItemModel *TestStandardItem(void)
{
  QStandardItemModel *item_model = new QStandardItemModel;
  QStandardItem *item1;  // = new QStandardItem;
  QStandardItem *item2, *item3;
  QStandardItem *item_temp1, *item_temp2;

  QStandardItem *item1a = new QStandardItem;
  QStandardItem *item1aa = new QStandardItem;
  QStandardItem *item1ab = new QStandardItem;

QIcon tempIcon = QApplication::style()->standardIcon(QStyle::SP_DirIcon);

  //item_model->setObjectName("root");

item1 = item_model->invisibleRootItem();
  item1->setText("item1");
  item1->setIcon(tempIcon);

QStringList sl;
sl.push_back(QString("header1"));
sl.push_back(QString("header2"));
sl.push_back(QString("header3"));
//item_model->setObjectName("root");
//item_model->setHorizontalHeaderItem(0,  new QStandardItem("root1"));
item_model->setHorizontalHeaderLabels(sl);
//item_model->setHorizontalHeaderItem(1,  new QStandardItem(("root2")) );
//item_temp1 = item_model->horizontalHeaderItem(0);

  item2 = new QStandardItem;
  item3 = new QStandardItem;
  item2->setText("12");
  item3->setText("13");


//item_temp2 = item_model->horizontalHeaderItem(1);
//item_temp1->setText("root1");
//item_model->appendRow(item1);
//item_temp = item_model->invisibleRootItem();

  item1a->setText("item1a");
  item1a->setTextAlignment(Qt::AlignLeft);
  item1a->setIcon(tempIcon);

  item1aa->setText("item1aa");
  item1aa->setIcon(tempIcon);

  item1ab->setText("item1ab");
  item1ab->setIcon(tempIcon);

  QList<QStandardItem *> col_list;
  col_list.push_back(item1a);
  col_list.push_back(item2);
  col_list.push_back(item3);

  item1->setTextAlignment(Qt::AlignLeft);
  item1->appendRow(col_list);
  //item_model->appendRow(col_list);
  //item1->appendRow(item1a);
  //item1->appendColumn(col_list);
  //item1a->appendRow(item1aa);
  //item1a->appendRow(item1ab);

  return item_model;
}