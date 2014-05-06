/*
  ampsDataDoc.cpp
*/

#include "ampsDataDoc.h"

void ampsDataDocProj::GetDocObjectByName(const std::string &name, QJsonObject &jobj)
{
  int i, num_proj;
  //QJsonObject *jobj = new QJsonObject;

  num_proj = m_DataProjInfo.size();

  for(i=0; i<num_proj; i++)
  {
    if(name == m_DataProjInfo[i].toObject()["name"].toString().toStdString())
    {
      jobj = (m_DataProjInfo[i].toObject());
      return;
      //jobj = (m_DataProjInfo[i].toObject());
      //return (m_DataProjInfo[i].toObject());
    }
  }

  return;
}
/////////////////////////////////////////////////////////////////
//
// class ampsDataDocProjFolder
//
//////////////////////////////////////////////////////////////////

ampsDataDocProjFolder::ampsDataDocProjFolder()
{
  m_fileSystemModelAMPS = new QStandardItemModel;
  m_FileSystemItem = new QStandardItem;
  //m_fileSystemModel = new QFileSystemModel;//
  m_ProjName = "NoName";
  m_ProjID = "NoID";
  //m_tvAMPSSelectedItem = m_fileSystemModelAMPS->invisibleRootItem();//
}

void ampsDataDocProjFolder::CreateHorizontalHeaderItem(void)
{
  m_fileSystemModelAMPS->setHorizontalHeaderItem(0, new QStandardItem(m_ProjName));//
}

////////////////////////////////////////////////////////////////
//
// class ampsDataDoc
//
//////////////////////////////////////////////////////////////////

ampsDataDoc::ampsDataDoc()
{
  m_NumProj=0;
  m_FileSystemModelAll = new QStandardItemModel;
  m_FileSystemModelAll->setHorizontalHeaderItem(0, new QStandardItem("All Project"));
  m_RootFileItemAll = m_FileSystemModelAll->invisibleRootItem();
}

void ampsDataDoc::CreateEmptyProjFolder(const int num_proj)
{
  int i;
  for(i=0; i<num_proj; i++)
  {
    m_DataProjFolder.push_back(ampsDataDocProjFolder::ampsDataDocProjFolder());
  }
/*
  for(i=0; i<num_proj; i++)
  {
    m_RootFileItemAll->appendRow(m_DataProjFolder[i].m_fileSystemModelAMPS->invisibleRootItem());
  }
*/
  m_NumProj = m_DataProjFolder.size();
}

void ampsDataDoc::CreateHorizontalHeaderItem(void)
{
  int i;
  for(i=0; i<m_NumProj; i++)
    m_DataProjFolder[i].CreateHorizontalHeaderItem();
}

QStandardItemModel * ampsDataDoc::GetItemModelByProjName(const QString proj_name)
{
  int i;
  QStandardItemModel *smodel = NULL;

  for(i=0; i<m_NumProj; i++)
  {
    if(proj_name == m_DataProjFolder[i].m_ProjName)
    {
      smodel=m_DataProjFolder[i].m_fileSystemModelAMPS;
      return smodel;
    }
  }

  return smodel;
}

ampsDataDoc::~ampsDataDoc()
{
  Destroy();
}

void ampsDataDoc::Destroy(void)
{

}
