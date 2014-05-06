/*
  ampsWidgetAssetComment.h
*/

#ifndef AMPSWIDGETASSETCOMMENT_HH
#define AMPSWIDGETASSETCOMMENT_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetAssetComment.h"

class ampsWidgetAssetComment : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetAssetComment(const QWidget *parent=NULL);
    virtual ~ampsWidgetAssetComment();

    void Init(void);
    void InitConnect(void);

  public:
    Ui_Form_ampsWidgetAssetComment m_UI;
};

class ampsScrollWidgetAssetComment : public MgScrollArea
{
  Q_OBJECT

  public:
    ampsScrollWidgetAssetComment(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetAssetComment();

    void Init(void);
    void InitConnect(void);

  public:
    ampsWidgetAssetComment *m_WidgetAssetComment;
};

class ampsDockWidgetAssetComment : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetAssetComment(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetAssetComment();

    void Init(void);
    void InitConnect(void);

  public:
    ampsScrollWidgetAssetComment *m_DockWidgetAssetComment;
};

#endif
