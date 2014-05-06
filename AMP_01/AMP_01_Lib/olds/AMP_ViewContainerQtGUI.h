/*
  AMP_ViewContainerQtGUI.h
*/

#ifndef AMP_VIEWCONTAINERQTGUI_HH
#define AMP_VIEWCONTAINERQTGUI_HH

#include <qwidget.h>
#include <QListWidget>

#include "AMP_WidgetAllType.h"

class AMP_ViewContainerQtGUI : public QWidget
{
  Q_OBJECT

  public:
    AMP_ViewContainerQtGUI();
    AMP_ViewContainerQtGUI(const QWidget *parent);
    virtual ~AMP_ViewContainerQtGUI();

    void Init(void);
    void InitDock(void);
    void InitSelector(void);

    void InitDockProjView(void);
    void InitDockAssetView(void);
    void InitDockFolderView(void);

    void InitConnect(void);
    void InitWithUI(void);

    void Exe(void);

    void ShowAll(void);

  public slots: 
    void TabRaiseChange(void);

  public:
    //Ui_Form_AMP_ViewContainerQtGUI m_UI;

    //AMP_DockWidgetAssetProp *m_DockWidgetAssetProp;
    //AMP_DockWidgetAssetComment *m_DockWidgetAssetComment;
/*
    AMP_DockWidgetBase *m_DockWidgetProjInfo;
    AMP_DockWidgetBase *m_DockWidgetProjBulletin;
    AMP_DockWidgetBase *m_DockWidgetProjChart;
    AMP_ScrollWidgetProjInfo *m_WidgetProjInfo;
    AMP_ScrollWidgetProjBulletin *m_WidgetProjBulletin;;
    AMP_ScrollWidgetProjChart *m_WidgetProjChart;
*/
  // alternatative as above depending on the "level" of desired encapsulation/containing
    AMP_DockWidgetProjSelector *m_DockWidgetProjSelector;
    AMP_DockWidgetAssetSelector *m_DockWidgetAssetSelector;
    AMP_DockWidgetFolderSelector *m_DockWidgetFolderSelector;

    AMP_DockWidgetProjInfo *m_DockWidgetProjInfo;
    AMP_DockWidgetProjBulletin *m_DockWidgetProjBulletin;
    AMP_DockWidgetProjChart *m_DockWidgetProjChart;

    AMP_DockWidgetAssetProp *m_DockWidgetAssetProp;
    AMP_DockWidgetAssetComment *m_DockWidgetAssetComment;
    AMP_DockWidgetAssetRevision *m_DockWidgetAssetRevision;
    AMP_DockWidgetAssetTNView *m_DockWidgetAssetTNView;

    AMP_DockWidgetFolderView *m_DockWidgetFolderView;

    AMP_TabDockWinAssetView *m_TabDockWinAssetView;
    AMP_TabDockWinFolderView *m_TabDockWinFolderView;
    AMP_TabDockWinProjView *m_TabDockWinProjView;

    AMP_WinProjView *m_WinProjView;

   //QListWidget *m_customerList, *m_paragraphsList;
};


#endif
