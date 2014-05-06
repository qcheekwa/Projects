/*
  ampsWidgetAssetProp.h
*/

#ifndef AMPSWIDGETASSETPROP_HH
#define AMPSWIDGETASSETPROP_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetAssetProp.h"


class ampsWidgetAssetProp : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetAssetProp(const QWidget *parent = NULL);
    virtual ~ampsWidgetAssetProp();

  public:
    Ui_Form_ampsWidgetAssetProp m_UI;
};

class ampsScrollWidgetAssetProp : public MgScrollArea
{
  Q_OBJECT

  public:
    ampsScrollWidgetAssetProp(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetAssetProp();

    void Init(void);
    void InitConnect(void);

  public:
    ampsWidgetAssetProp *m_WidgetAssetProp;
};


class ampsDockWidgetAssetProp : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetAssetProp(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetAssetProp();

    void Init(void);
    void InitConnect(void);

  public:
    ampsScrollWidgetAssetProp *m_DockWidgetAssetProp;
};

#endif
