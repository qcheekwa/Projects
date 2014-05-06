/*
  ampsViewContainerQtGUI.h
*/

#ifndef AMPSVIEWCONTAINERQTGUI_HH
#define AMPSVIEWCONTAINERQTGUI_HH

#include <qwidget.h>
#include <QListWidget>

#include "ampsWidgetAllType.h"

class ampsViewContainerQtGUI : public QWidget
{
  Q_OBJECT

  public:
    ampsViewContainerQtGUI();
    ampsViewContainerQtGUI(const QWidget *parent);
    virtual ~ampsViewContainerQtGUI();

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
    //Ui_Form_ampsViewContainerQtGUI m_UI;

    //ampsDockWidgetAssetProp *m_DockWidgetAssetProp;
    //ampsDockWidgetAssetComment *m_DockWidgetAssetComment;
/*
    ampsDockWidgetBase *m_DockWidgetProjInfo;
    ampsDockWidgetBase *m_DockWidgetProjBulletin;
    ampsDockWidgetBase *m_DockWidgetProjChart;
    ampsScrollWidgetProjInfo *m_WidgetProjInfo;
    ampsScrollWidgetProjBulletin *m_WidgetProjBulletin;;
    ampsScrollWidgetProjChart *m_WidgetProjChart;
*/
  // alternatative as above depending on the "level" of desired encapsulation/containing
    ampsDockWidgetProjSelector *m_DockWidgetProjSelector;
    ampsDockWidgetAssetSelector *m_DockWidgetAssetSelector;
    ampsDockWidgetFolderSelector *m_DockWidgetFolderSelector;

    ampsDockWidgetProjInfo *m_DockWidgetProjInfo;
    ampsDockWidgetProjBulletin *m_DockWidgetProjBulletin;
    ampsDockWidgetProjChart *m_DockWidgetProjChart;

    ampsDockWidgetAssetProp *m_DockWidgetAssetProp;
    ampsDockWidgetAssetComment *m_DockWidgetAssetComment;
    ampsDockWidgetAssetRevision *m_DockWidgetAssetRevision;
    ampsDockWidgetAssetTNView *m_DockWidgetAssetTNView;

    ampsDockWidgetFolderView *m_DockWidgetFolderView;

    ampsTabDockWinAssetView *m_TabDockWinAssetView;
    ampsTabDockWinFolderView *m_TabDockWinFolderView;
    ampsTabDockWinProjView *m_TabDockWinProjView;

    ampsWinProjView *m_WinProjView;

   //QListWidget *m_customerList, *m_paragraphsList;
};


#endif
