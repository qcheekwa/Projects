/*
  ampsWidgetFolderView.h
*/

#ifndef AMPSWIDGETFOLDERVIEW_HH
#define AMPSWIDGETFOLDERVIEW_HH


#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetFolderView.h"

class ampsWidgetFolderView : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetFolderView(const QWidget *parent = NULL);
    virtual ~ampsWidgetFolderView();

  public:
    Ui_Form_ampsWidgetFolderView m_UI;
};

class ampsScrollWidgetFolderView : public MgScrollArea
{
  Q_OBJECT

  public:
    ampsScrollWidgetFolderView(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetFolderView();

    void Init(void);
    void InitConnect(void);

  public:
    ampsWidgetFolderView *m_WidgetFolderView;
};


class ampsDockWidgetFolderView : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetFolderView(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetFolderView();

    void Init(void);
    void InitConnect(void);

  public:
    ampsScrollWidgetFolderView *m_DockWidgetFolderView;
};


#endif
