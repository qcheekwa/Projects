/*
  AMP_WidgetAssetSelector.h
*/

#ifndef AMP_WIDGETASSETSELECTOR_HH
#define AMP_WIDGETASSETSELECTOR_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "ui_AMP_WidgetAssetSelector.h"


class AMP_WidgetAssetSelector : public MgWidget
{
  Q_OBJECT

  public:
    AMP_WidgetAssetSelector(const QWidget *parent = NULL);
    virtual ~AMP_WidgetAssetSelector();

  public:
    Ui_Form_AMP_WidgetAssetSelector m_UI;
};

class AMP_ScrollWidgetAssetSelector : public MgScrollArea
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetAssetSelector(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetAssetSelector();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_WidgetAssetSelector *m_WidgetAssetSelector;
};


class AMP_DockWidgetAssetSelector : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetAssetSelector(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetAssetSelector();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_ScrollWidgetAssetSelector *m_DockWidgetAssetSelector;
};


#endif
