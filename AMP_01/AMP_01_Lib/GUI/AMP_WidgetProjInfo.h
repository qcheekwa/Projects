/*
  AMP_WidgetProjInfo.h
*/

#ifndef AMP_WIDGETPROJINFO_HH
#define AMP_WIDGETPROJINFO_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "../GeneratedFiles/ui_AMP_WidgetProjInfo.h"

class AMP_WidgetProjInfo : public MgWidget
{
  Q_OBJECT

  public:
    AMP_WidgetProjInfo(const QWidget *parent = NULL);
    virtual ~AMP_WidgetProjInfo();

  public:
    Ui_Form_AMP_WidgetProjInfo m_UI;

};

class AMP_ScrollWidgetProjInfo : public MgScrollArea //AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetProjInfo(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetProjInfo();

  public:
    AMP_WidgetProjInfo *m_WidgetProjInfo;
};

class AMP_DockWidgetProjInfo : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetProjInfo(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetProjInfo();

  public:
    AMP_ScrollWidgetProjInfo *m_ScrollWidgetProjInfo;
};

#endif
