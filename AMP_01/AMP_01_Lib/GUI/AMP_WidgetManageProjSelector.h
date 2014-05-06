/*
  AMP_WidgetManageProjSelector.h
*/

#ifndef AMP_WIDGETMANAGEPROJSELECTOR_HH
#define AMP_WIDGETMANAGEPROJSELECTOR_HH


#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "AMP_TreeWidgetBase.h"


class AMP_WidgetManageProjSelector : public AMP_TreeWidgetBase
{
  Q_OBJECT

  public:
    AMP_WidgetManageProjSelector(const QWidget *parent = NULL);
    virtual ~AMP_WidgetManageProjSelector();

    void Init(void);
    void InitConnect(void);

};

class AMP_ScrollWidgetManageProjSelector : public MgScrollArea
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetManageProjSelector(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetManageProjSelector();

  public:
    AMP_WidgetManageProjSelector *m_WidgetManageProjSelector;
};


class AMP_DockWidgetManageProjSelector : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetManageProjSelector(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetManageProjSelector();

  public:
    AMP_ScrollWidgetManageProjSelector *m_ScrollWidgetManageProjSelector;
};

#endif
