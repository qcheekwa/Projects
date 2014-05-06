/*
  AMP_WidgetProjBulletin.h
*/

#ifndef AMP_WIDGETPROJBULLETIN_HH
#define AMP_WIDGETPROJBULLETIN_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "ui_AMP_WidgetProjBulletin.h"

class AMP_WidgetProjBulletin : public MgWidget//public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_WidgetProjBulletin(const QWidget *parent = NULL);
    virtual ~AMP_WidgetProjBulletin();

    void Init(void);
    void InitConnect(void);

  public:
    Ui_Form_AMP_WidgetProjBulletin m_UI;

};

class AMP_ScrollWidgetProjBulletin : public MgScrollArea //AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetProjBulletin(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetProjBulletin();

  public:
    AMP_WidgetProjBulletin *m_WidgetProjBulletin;
};


class AMP_DockWidgetProjBulletin : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetProjBulletin(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetProjBulletin();

  public:
    AMP_ScrollWidgetProjBulletin *m_ScrollWidgetProjBulletin;
};


#endif
