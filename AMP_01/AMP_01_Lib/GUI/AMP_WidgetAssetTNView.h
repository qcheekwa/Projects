/*
  AMP_WidgetAssetTNView.h
*/

#ifndef AMP_WIDGETASSETTNVIEW_HH
#define AMP_WIDGETASSETTNVIEW_HH


#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "../GeneratedFiles/ui_AMP_WidgetAssetTNView.h"


class AMP_WidgetAssetTNView : public MgWidget
{
  Q_OBJECT

  public:
    AMP_WidgetAssetTNView(const QWidget *parent = NULL);
    virtual ~AMP_WidgetAssetTNView();

  public:
    Ui_Form_AMP_WidgetAssetTNView m_UI;
};

class AMP_ScrollWidgetAssetTNView : public MgScrollArea
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetAssetTNView(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetAssetTNView();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_WidgetAssetTNView *m_WidgetAssetTNView;
};


class AMP_DockWidgetAssetTNView : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetAssetTNView(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetAssetTNView();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_ScrollWidgetAssetTNView *m_DockWidgetAssetTNView;
};



#endif
