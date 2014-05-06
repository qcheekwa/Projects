/*
  ampsWidgetAssetSelector.h
*/

#ifndef AMPSWIDGETASSETSELECTOR_HH
#define AMPSWIDGETASSETSELECTOR_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetAssetSelector.h"


class ampsWidgetAssetSelector : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetAssetSelector(const QWidget *parent = NULL);
    virtual ~ampsWidgetAssetSelector();

  public:
    Ui_Form_ampsWidgetAssetSelector m_UI;
};

class ampsScrollWidgetAssetSelector : public MgScrollArea
{
  Q_OBJECT

  public:
    ampsScrollWidgetAssetSelector(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetAssetSelector();

    void Init(void);
    void InitConnect(void);

  public:
    ampsWidgetAssetSelector *m_WidgetAssetSelector;
};


class ampsDockWidgetAssetSelector : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetAssetSelector(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetAssetSelector();

    void Init(void);
    void InitConnect(void);

  public:
    ampsScrollWidgetAssetSelector *m_DockWidgetAssetSelector;
};


#endif
