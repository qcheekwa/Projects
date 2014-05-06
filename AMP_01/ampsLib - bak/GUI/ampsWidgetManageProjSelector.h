/*
  ampsWidgetManageProjSelector.h
*/

#ifndef AMPSWIDGETMANAGEPROJSELECTOR_HH
#define AMPSWIDGETMANAGEPROJSELECTOR_HH


#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "ampsTreeWidgetBase.h"


class ampsWidgetManageProjSelector : public ampsTreeWidgetBase
{
  Q_OBJECT

  public:
    ampsWidgetManageProjSelector(const QWidget *parent = NULL);
    virtual ~ampsWidgetManageProjSelector();

    void Init(void);
    void InitConnect(void);

};

class ampsScrollWidgetManageProjSelector : public MgScrollArea
{
  Q_OBJECT

  public:
    ampsScrollWidgetManageProjSelector(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetManageProjSelector();

  public:
    ampsWidgetManageProjSelector *m_WidgetManageProjSelector;
};


class ampsDockWidgetManageProjSelector : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetManageProjSelector(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetManageProjSelector();

  public:
    ampsScrollWidgetManageProjSelector *m_ScrollWidgetManageProjSelector;
};

#endif
