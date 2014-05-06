/*
  ampsWidgetAssetRevision.h
*/

#ifndef AMPSWIDGETASSETREVISION_HH
#define AMPSWIDGETASSETREVISION_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetAssetRevision.h"

class ampsWidgetAssetRevision : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetAssetRevision(const QWidget *parent=NULL);
    virtual ~ampsWidgetAssetRevision();

    void Init(void);
    void InitConnect(void);

  public:
    Ui_Form_ampsWidgetAssetRevision m_UI;
};

class ampsScrollWidgetAssetRevision : public MgScrollArea
{
  Q_OBJECT

  public:
    ampsScrollWidgetAssetRevision(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetAssetRevision();

    void Init(void);
    void InitConnect(void);

  public:
    ampsWidgetAssetRevision *m_WidgetAssetRevision;
};

class ampsDockWidgetAssetRevision : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetAssetRevision(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetAssetRevision();

    void Init(void);
    void InitConnect(void);

  public:
    ampsScrollWidgetAssetRevision *m_DockWidgetAssetRevision;
};


#endif
