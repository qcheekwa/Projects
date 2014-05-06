/*
  AMP_WidgetAssetProp.h
*/

#ifndef AMP_WIDGETASSETPROP_HH
#define AMP_WIDGETASSETPROP_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "../GeneratedFiles/ui_AMP_WidgetAssetProp.h"


class AMP_WidgetAssetProp : public MgWidget
{
  Q_OBJECT

  public:
    AMP_WidgetAssetProp(const QWidget *parent = NULL);
    virtual ~AMP_WidgetAssetProp();

  public:
    Ui_Form_AMP_WidgetAssetProp m_UI;
};

class AMP_ScrollWidgetAssetProp : public MgScrollArea
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetAssetProp(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetAssetProp();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_WidgetAssetProp *m_WidgetAssetProp;
};


class AMP_DockWidgetAssetProp : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetAssetProp(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetAssetProp();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_ScrollWidgetAssetProp *m_DockWidgetAssetProp;
};

#endif
