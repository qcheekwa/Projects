/*
  ampsWidgetProjBulletin.h
*/

#ifndef AMPSWIDGETPROJBULLETIN_HH
#define AMPSWIDGETPROJBULLETIN_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetProjBulletin.h"

class ampsWidgetProjBulletin : public MgWidget//public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsWidgetProjBulletin(const QWidget *parent = NULL);
    virtual ~ampsWidgetProjBulletin();

    void Init(void);
    void InitConnect(void);

  public:
    Ui_Form_ampsWidgetProjBulletin m_UI;

};

class ampsScrollWidgetProjBulletin : public MgScrollArea //ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsScrollWidgetProjBulletin(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetProjBulletin();

  public:
    ampsWidgetProjBulletin *m_WidgetProjBulletin;
};


class ampsDockWidgetProjBulletin : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetProjBulletin(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetProjBulletin();

  public:
    ampsScrollWidgetProjBulletin *m_ScrollWidgetProjBulletin;
};


#endif
