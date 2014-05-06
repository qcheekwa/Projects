/*
  ampsWidgetProjSelector.h
*/

#ifndef AMPSWIDGETPROJSELECTOR_HH
#define AMPSWIDGETPROJSELECTOR_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetProjSelector.h"


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
    ampsWidgetProjSelector *m_WidgetProjSelector;
};


class ampsDockWidgetProjSelector : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetProjSelector(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetProjSelector();

    void Init(void);
    void InitConnect(void);

  public:
    ampsScrollWidgetProjSelector *m_DockWidgetProjSelector;
};


#endif
