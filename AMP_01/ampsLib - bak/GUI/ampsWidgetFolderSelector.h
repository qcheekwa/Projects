/*
  ampsFolderSelector.h
*/

#ifndef AMPSFOLDERSELECTOR_HH
#define AMPSFOLDERSELECTOR_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetFolderSelector.h"

class ampsWidgetFolderSelector : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetFolderSelector(const QWidget *parent = NULL);
    virtual ~ampsWidgetFolderSelector();

  public:
    Ui_Form_ampsWidgetFolderSelector m_UI;
};

class ampsScrollWidgetFolderSelector : public MgScrollArea
{
  Q_OBJECT

  public:
    ampsScrollWidgetFolderSelector(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetFolderSelector();

    void Init(void);
    void InitConnect(void);

  public:
    ampsWidgetFolderSelector *m_WidgetFolderSelector;
};


class ampsDockWidgetFolderSelector : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetFolderSelector(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetFolderSelector();

    void Init(void);
    void InitConnect(void);

  public:
    ampsScrollWidgetFolderSelector *m_DockWidgetFolderSelector;
};


#endif
