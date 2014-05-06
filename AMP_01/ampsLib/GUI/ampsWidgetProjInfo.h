/*
  ampsWidgetProjInfo.h
*/

#ifndef AMPSWIDGETPROJINFO_HH
#define AMPSWIDGETPROJINFO_HH

#include <QJsonObject>
#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetProjInfo.h"

class ampsWidgetProjInfo : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetProjInfo(const QWidget *parent = NULL);
    virtual ~ampsWidgetProjInfo();

  public:
    Ui_Form_ampsWidgetProjInfo m_UI;

};

class ampsScrollWidgetProjInfo : public MgScrollArea //ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsScrollWidgetProjInfo(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetProjInfo();

  public:
    ampsWidgetProjInfo *m_WidgetProjInfo;
};

class ampsDockWidgetProjInfo : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetProjInfo(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetProjInfo();

    void UpdateDispData(const QJsonObject &proj_info);

  public:
    ampsScrollWidgetProjInfo *m_ScrollWidgetProjInfo;
};

#endif
