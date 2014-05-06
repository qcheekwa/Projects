/*
  ampsWidgetAssetTNView.h
*/

#ifndef AMPSWIDGETASSETTNVIEW_HH
#define AMPSWIDGETASSETTNVIEW_HH


#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetAssetTNView.h"


class ampsWidgetAssetTNView : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetAssetTNView(const QWidget *parent = NULL);
    virtual ~ampsWidgetAssetTNView();

  public:
    Ui_Form_ampsWidgetAssetTNView m_UI;
};

class ampsScrollWidgetAssetTNView : public MgScrollArea
{
  Q_OBJECT

  public:
    ampsScrollWidgetAssetTNView(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetAssetTNView();

    void Init(void);
    void InitConnect(void);

  public:
    ampsWidgetAssetTNView *m_WidgetAssetTNView;
};


class ampsDockWidgetAssetTNView : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetAssetTNView(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetAssetTNView();

    void Init(void);
    void InitConnect(void);

  public:
    ampsScrollWidgetAssetTNView *m_DockWidgetAssetTNView;
};



#endif
