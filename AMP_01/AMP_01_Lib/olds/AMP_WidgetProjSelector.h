/*
  AMP_WidgetProjSelector.h
*/

#ifndef AMP_WIDGETPROJSELECTOR_HH
#define AMP_WIDGETPROJSELECTOR_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "ui_AMP_WidgetProjSelector.h"


class AMP_WidgetProjSelector : public MgWidget
{
  Q_OBJECT

  public:
    AMP_WidgetProjSelector(const QWidget *parent = NULL);
    virtual ~AMP_WidgetProjSelector();

  public:
    Ui_Form_AMP_WidgetProjSelector m_UI;
};

class AMP_ScrollWidgetProjSelector : public MgScrollArea
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetProjSelector(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetProjSelector();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_WidgetProjSelector *m_WidgetProjSelector;
};


class AMP_DockWidgetProjSelector : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetProjSelector(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetProjSelector();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_ScrollWidgetProjSelector *m_DockWidgetProjSelector;
};


#endif
