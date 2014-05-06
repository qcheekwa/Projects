/*
  AMP_WidgetAssetComment.h
*/

#ifndef AMP_WIDGETASSETCOMMENT_HH
#define AMP_WIDGETASSETCOMMENT_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "../GeneratedFiles/ui_AMP_WidgetAssetComment.h"

class AMP_WidgetAssetComment : public MgWidget
{
  Q_OBJECT

  public:
    AMP_WidgetAssetComment(const QWidget *parent=NULL);
    virtual ~AMP_WidgetAssetComment();

    void Init(void);
    void InitConnect(void);

  public:
    Ui_Form_AMP_WidgetAssetComment m_UI;
};

class AMP_ScrollWidgetAssetComment : public MgScrollArea
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetAssetComment(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetAssetComment();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_WidgetAssetComment *m_WidgetAssetComment;
};

class AMP_DockWidgetAssetComment : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetAssetComment(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetAssetComment();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_ScrollWidgetAssetComment *m_DockWidgetAssetComment;
};

#endif
