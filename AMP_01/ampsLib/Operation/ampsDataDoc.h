/*
  ampsDataDoc.h
*/

#ifndef AMPSDATADOC_HH
#define AMPSDATADOC_HH

#include <string>
#include <vector>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QFileSystemModel>

struct ampsDataDocProj
{
  QJsonArray m_DataProjInfo;

  void GetDocObjectByName(const std::string &name, QJsonObject &jobj);

  //std::string GetProjName(void);

};

struct ampsDataDocProjFolder
{
  ampsDataDocProjFolder();

  void CreateHorizontalHeaderItem(void);

  QStandardItemModel *m_fileSystemModelAMPS;
  QStandardItem *m_FileSystemItem;
  //QStandardItem *m_tvAMPSSelectedItem;//
  //QFileSystemModel *m_fileSystemModel;//
  QString m_ProjName;
  QString m_ProjID;
  int m_LocalProjIndex;
};

typedef std::vector<ampsDataDocProjFolder> ampsDataDocProjFolder_VECTOR;

class ampsDataDoc
{
  public:
    ampsDataDoc();
    virtual ~ampsDataDoc();

    void Destroy(void);

    void CreateEmptyProjFolder(const int num_proj);

    QStandardItemModel * GetItemModelByProjName(const QString proj_name);
    QStandardItemModel * GetItemModelByProjID(const QString proj_id);
    void CreateHorizontalHeaderItem(void);

  public:
    int m_NumProj;
    ampsDataDocProj m_DataProj;
    ampsDataDocProjFolder_VECTOR m_DataProjFolder;
    QStandardItemModel *m_FileSystemModelAll;
    QStandardItem *m_RootFileItemAll;
};

//#include "ampsDataDoc.inl"

#endif
