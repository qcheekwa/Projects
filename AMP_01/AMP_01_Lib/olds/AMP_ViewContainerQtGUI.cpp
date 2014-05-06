/*
  AMP_ViewContainerQtGUI.cpp
*/

#include <QGraphicsView>
#include "AMP_ViewContainerQtGUI.h"

AMP_ViewContainerQtGUI::AMP_ViewContainerQtGUI()
{
  //AMP_ViewContainerQtGUI(NULL);
  Init();
}

AMP_ViewContainerQtGUI::AMP_ViewContainerQtGUI(const QWidget *parent) : QWidget((QWidget *)parent)
{
  Init();
}

AMP_ViewContainerQtGUI::~AMP_ViewContainerQtGUI()
{

}

void AMP_ViewContainerQtGUI::Init(void)
{
  m_WinProjView = new AMP_WinProjView(this);
  m_WinProjView->setWindowTitle("Project View");

  m_TabDockWinProjView = new AMP_TabDockWinProjView;
  m_TabDockWinProjView->setWindowTitle("Project View");

  m_TabDockWinAssetView = new AMP_TabDockWinAssetView;
  m_TabDockWinAssetView->setWindowTitle("Asset View");
  //m_TabDockWinProjView->resize(640, 480);

  m_TabDockWinFolderView = new AMP_TabDockWinFolderView;
  m_TabDockWinFolderView->setWindowTitle("Folder View");

  InitWithUI();
  InitDock();
  InitSelector();
  //InitConnect();
  //ShowAll();
}

void AMP_ViewContainerQtGUI::InitWithUI(void)
{
  //m_WinProjView->m_UI.m_scrollAreaProjViewWin->setWidget(m_TabDockWinProjView);

}

void AMP_ViewContainerQtGUI::InitDock(void)
{
  InitDockProjView();
  InitDockAssetView();
}

void AMP_ViewContainerQtGUI::InitSelector(void)
{
  m_DockWidgetProjSelector = new AMP_DockWidgetProjSelector(this);
  m_DockWidgetAssetSelector = new AMP_DockWidgetAssetSelector(this);
  m_DockWidgetFolderSelector = new AMP_DockWidgetFolderSelector(this);
}

void AMP_ViewContainerQtGUI::InitDockAssetView(void)
{
  m_DockWidgetAssetProp = new AMP_DockWidgetAssetProp(m_TabDockWinAssetView);
  m_DockWidgetAssetComment =  new AMP_DockWidgetAssetComment(m_TabDockWinAssetView);
  m_DockWidgetAssetRevision =  new AMP_DockWidgetAssetRevision(m_TabDockWinAssetView);

  m_DockWidgetAssetTNView = new AMP_DockWidgetAssetTNView(m_TabDockWinAssetView);

  m_TabDockWinAssetView->addDockWidget(Qt::RightDockWidgetArea, m_DockWidgetAssetProp);
  m_TabDockWinAssetView->addDockWidget(Qt::LeftDockWidgetArea, m_DockWidgetAssetComment);
  m_TabDockWinAssetView->addDockWidget(Qt::AllDockWidgetAreas, m_DockWidgetAssetRevision);

  m_TabDockWinAssetView->addDockWidget(Qt::AllDockWidgetAreas, m_DockWidgetAssetTNView);

  m_TabDockWinAssetView->setDockOptions(QMainWindow::AllowNestedDocks | QMainWindow::AllowTabbedDocks);
  m_TabDockWinAssetView->setTabPosition(Qt::AllDockWidgetAreas, QTabWidget::North);
  m_TabDockWinAssetView->tabifyDockWidget(m_DockWidgetAssetProp, m_DockWidgetAssetComment);
  m_TabDockWinAssetView->tabifyDockWidget(m_DockWidgetAssetComment, m_DockWidgetAssetRevision);
  m_DockWidgetAssetProp->raise();

  m_DockWidgetAssetTNView->setFloating(true);

}

void AMP_ViewContainerQtGUI::InitDockFolderView(void)
{
  m_DockWidgetFolderView = new AMP_DockWidgetFolderView(m_TabDockWinFolderView);

  m_TabDockWinFolderView->addDockWidget(Qt::RightDockWidgetArea, m_DockWidgetFolderView);
  m_TabDockWinFolderView->setDockOptions(QMainWindow::AllowNestedDocks | QMainWindow::AllowTabbedDocks);
  m_TabDockWinFolderView->setTabPosition(Qt::AllDockWidgetAreas, QTabWidget::North);
}

void AMP_ViewContainerQtGUI::InitDockProjView(void)
{
/*
  m_DockWidgetProjInfo = new AMP_DockWidgetBase(m_TabDockWinProjView);
  m_DockWidgetProjInfo->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  m_DockWidgetProjInfo->setFeatures(QDockWidget::AllDockWidgetFeatures);
  m_DockWidgetProjInfo->setWindowTitle("Project Info");
  m_WidgetProjInfo = new AMP_ScrollWidgetProjInfo(m_DockWidgetProjInfo);
  m_WidgetProjInfo->setFocusPolicy(Qt::WheelFocus);
  m_DockWidgetProjInfo->setWidget(m_WidgetProjInfo);

  m_DockWidgetProjBulletin = new AMP_DockWidgetBase(m_TabDockWinProjView);
  m_DockWidgetProjBulletin->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  m_DockWidgetProjBulletin->setFeatures(QDockWidget::AllDockWidgetFeatures);
  m_DockWidgetProjBulletin->setWindowTitle("Project Bulletin");
  m_WidgetProjBulletin = new AMP_ScrollWidgetProjBulletin(m_DockWidgetProjBulletin);
  m_WidgetProjBulletin->setFocusPolicy(Qt::WheelFocus);
  m_DockWidgetProjBulletin->setWidget(m_WidgetProjBulletin);

  m_DockWidgetProjChart = new AMP_DockWidgetBase(m_TabDockWinProjView);
  m_DockWidgetProjChart->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  m_DockWidgetProjChart->setFeatures(QDockWidget::AllDockWidgetFeatures);
  m_DockWidgetProjChart->setWindowTitle("Project Chart");
  m_WidgetProjChart = new AMP_ScrollWidgetProjChart(m_DockWidgetProjChart);
  m_WidgetProjChart->setFocusPolicy(Qt::WheelFocus);
  m_DockWidgetProjChart->setWidget(m_WidgetProjChart);
*/

  // alternatative as above w.r.t. to class declaration
  m_DockWidgetProjInfo = new AMP_DockWidgetProjInfo(m_TabDockWinProjView);
  m_DockWidgetProjBulletin = new AMP_DockWidgetProjBulletin(m_TabDockWinProjView);
  m_DockWidgetProjChart = new AMP_DockWidgetProjChart(m_TabDockWinProjView);

  /////////////////////////////////////////////////////////////////////////////////////

  m_TabDockWinProjView->addDockWidget(Qt::RightDockWidgetArea, m_DockWidgetProjInfo);
  m_TabDockWinProjView->addDockWidget(Qt::LeftDockWidgetArea, m_DockWidgetProjBulletin);
  m_TabDockWinProjView->addDockWidget(Qt::AllDockWidgetAreas, m_DockWidgetProjChart);
  m_TabDockWinProjView->setDockOptions(QMainWindow::AllowNestedDocks | QMainWindow::AllowTabbedDocks);
  m_TabDockWinProjView->setTabPosition(Qt::AllDockWidgetAreas, QTabWidget::North);
  m_TabDockWinProjView->tabifyDockWidget(m_DockWidgetProjInfo, m_DockWidgetProjBulletin);
  m_TabDockWinProjView->tabifyDockWidget(m_DockWidgetProjBulletin, m_DockWidgetProjChart);
  m_DockWidgetProjInfo->raise();

  /////////////////////////////////////////////////////////////////////////////////////
}

void AMP_ViewContainerQtGUI::InitConnect(void)
{

}

void AMP_ViewContainerQtGUI::ShowAll(void)
{
  //m_WinProjView->show();
  //m_WinProjView->setFloating(true);

  m_TabDockWinAssetView->show();  m_TabDockWinAssetView->resize(640, 480);  
  m_TabDockWinFolderView->show();  m_TabDockWinFolderView->resize(640, 480);  
  m_TabDockWinProjView->show();  m_TabDockWinProjView->resize(640, 480);
  //m_TabDockWinProjView->setFloating(true);

  //m_TabDockWinAssetView->setFloating(true);
}


void AMP_ViewContainerQtGUI::Exe(void)
{
  ShowAll();
}

void AMP_ViewContainerQtGUI::TabRaiseChange(void)
{
  m_TabDockWinProjView->TabRaiseChange();
}
