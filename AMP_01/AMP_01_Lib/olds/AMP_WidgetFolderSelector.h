/*
  AMP_FolderSelector.h
*/

#ifndef AMP_FOLDERSELECTOR_HH
#define AMP_FOLDERSELECTOR_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "ui_AMP_WidgetFolderSelector.h"

class AMP_WidgetFolderSelector : public MgWidget
{
  Q_OBJECT

  public:
    AMP_WidgetFolderSelector(const QWidget *parent = NULL);
    virtual ~AMP_WidgetFolderSelector();

  public:
    Ui_Form_AMP_WidgetFolderSelector m_UI;
};

class AMP_ScrollWidgetFolderSelector : public MgScrollArea
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetFolderSelector(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetFolderSelector();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_WidgetFolderSelector *m_WidgetFolderSelector;
};


class AMP_DockWidgetFolderSelector : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetFolderSelector(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetFolderSelector();

    void Init(void);
    void InitConnect(void);

  public:
    AMP_ScrollWidgetFolderSelector *m_DockWidgetFolderSelector;
};


#endif
