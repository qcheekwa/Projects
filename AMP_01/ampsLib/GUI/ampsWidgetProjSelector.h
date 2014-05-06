/*
  ampsWidgetProjSelector.h
*/

#ifndef AMPSWIDGETPROJSELECTOR_HH
#define AMPSWIDGETPROJSELECTOR_HH

#include <QTableWidget>
#include <QListWidget>
#include <QJsonArray>
#include <QJsonObject>
#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetProjSelector.h"

#define TABLE_COLUMN_PROJ_INFO 1

class ampsWidgetProjSelector : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetProjSelector(const QWidget *parent = NULL);
    virtual ~ampsWidgetProjSelector();

  public:
    Ui_Form_ampsWidgetProjSelector m_UI;
};

class ampsScrollWidgetProjSelector : public MgScrollArea
{
  Q_OBJECT

  public:
    ampsScrollWidgetProjSelector(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetProjSelector();

    void Init(void);
    void InitConnect(void);

  public:
    //ampsWidgetProjSelector *m_WidgetProjSelector;
    //QTableWidget *m_TableWidgetProjSelector;
    QListWidget *m_ListWidgetProjSelector;
};


class ampsDockWidgetProjSelector : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetProjSelector(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetProjSelector();

    void Init(void);
    void InitConnect(void);

    void UpdateDispData(const QJsonArray &proj_info);

  public:
    ampsScrollWidgetProjSelector *m_ScrollWidgetProjSelector;
};


#endif
