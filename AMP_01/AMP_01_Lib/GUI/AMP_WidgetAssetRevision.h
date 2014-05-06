/*
  AMP_WidgetAssetRevision.h
*/

#ifndef AMP_WIDGETASSETREVISION_HH
#define AMP_WIDGETASSETREVISION_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "../GeneratedFiles/ui_AMP_WidgetAssetRevision.h"

class AMP_WidgetAssetRevision : public MgWidget
{
  Q_OBJECT

  public:
    AMP_WidgetAssetRevision(const QWidget *parent=NULL);
    virtual ~AMP_WidgetAssetRevision();

    void Init(void);
    void InitConnect(void);

  public:
    Ui_Form_AMP_WidgetAssetRevision m_UI;
};

class AMP_ScrollWidgetAssetRevision : public MgScrollArea
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetAssetRevision(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetAssetRevision();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_WidgetAssetRevision *m_WidgetAssetRevision;
};

class AMP_DockWidgetAssetRevision : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetAssetRevision(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetAssetRevision();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_ScrollWidgetAssetRevision *m_DockWidgetAssetRevision;
};


#endif
