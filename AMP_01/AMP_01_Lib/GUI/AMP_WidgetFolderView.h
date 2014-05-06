/*
  AMP_WidgetFolderView.h
*/

#ifndef AMP_WIDGETFOLDERVIEW_HH
#define AMP_WIDGETFOLDERVIEW_HH


#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "../GeneratedFiles/ui_AMP_WidgetFolderView.h"

class AMP_WidgetFolderView : public MgWidget
{
  Q_OBJECT

  public:
    AMP_WidgetFolderView(const QWidget *parent = NULL);
    virtual ~AMP_WidgetFolderView();

  public:
    Ui_Form_AMP_WidgetFolderView m_UI;
};

class AMP_ScrollWidgetFolderView : public MgScrollArea
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetFolderView(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetFolderView();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_WidgetFolderView *m_WidgetFolderView;
};


class AMP_DockWidgetFolderView : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetFolderView(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetFolderView();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_ScrollWidgetFolderView *m_DockWidgetFolderView;
};


#endif
