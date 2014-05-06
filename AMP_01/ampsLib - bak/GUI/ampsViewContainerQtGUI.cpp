/*
  ampsViewContainerQtGUI.cpp
*/

#include <QGraphicsView>
#include "ampsViewContainerQtGUI.h"

ampsViewContainerQtGUI::ampsViewContainerQtGUI()
{
  //ampsViewContainerQtGUI(NULL);
  Init();
}

ampsViewContainerQtGUI::ampsViewContainerQtGUI(const QWidget *parent) : QWidget((QWidget *)parent)
{
  Init();
}

ampsViewContainerQtGUI::~ampsViewContainerQtGUI()
{

}

void ampsViewContainerQtGUI::Init(void)
{
  m_WinProjView = new ampsWinProjView(this);
  m_WinProjView->setWindowTitle("Project View");

  m_TabDockWinProjView = new ampsTabDockWinProjView;
  m_TabDockWinProjView->setWindowTitle("Project View");

  m_TabDockWinAssetView = new ampsTabDockWinAssetView;
  m_TabDockWinAssetView->setWindowTitle("Asset View");
  //m_TabDockWinProjView->resize(640, 480);

  m_TabDockWinFolderView = new ampsTabDockWinFolderView;
  m_TabDockWinFolderView->setWindowTitle("Folder View");

  InitWithUI();
  InitDock();
  InitSelector();
  //InitConnect();
  //ShowAll();
}

void ampsViewContainerQtGUI::InitWithUI(void)
{
  //m_WinProjView->m_UI.m_scrollAreaProjViewWin->setWidget(m_TabDockWinProjView);

}

void ampsViewContainerQtGUI::InitDock(void)
{
  InitDockProjView();
  InitDockAssetView();
}

void ampsViewContainerQtGUI::InitSelector(void)
{
  m_DockWidgetProjSelector = new ampsDockWidgetProjSelector(this);
  m_DockWidgetAssetSelector = new ampsDockWidgetAssetSelector(this);
  m_DockWidgetFolderSelector = new ampsDockWidgetFolderSelector(this);
}

void ampsViewContainerQtGUI::InitDockAssetView(void)
{
  m_DockWidgetAssetProp = new ampsDockWidgetAssetProp(m_TabDockWinAssetView);
  m_DockWidgetAssetComment =  new ampsDockWidgetAssetComment(m_TabDockWinAssetView);
  m_DockWidgetAssetRevision =  new ampsDockWidgetAssetRevision(m_TabDockWinAssetView);

  m_DockWidgetAssetTNView = new ampsDockWidgetAssetTNView(m_TabDockWinAssetView);

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

void ampsViewContainerQtGUI::InitDockFolderView(void)
{
  m_DockWidgetFolderView = new ampsDockWidgetFolderView(m_TabDockWinFolderView);

  m_TabDockWinFolderView->addDockWidget(Qt::RightDockWidgetArea, m_DockWidgetFolderView);
  m_TabDockWinFolderView->setDockOptions(QMainWindow::AllowNestedDocks | QMainWindow::AllowTabbedDocks);
  m_TabDockWinFolderView->setTabPosition(Qt::AllDockWidgetAreas, QTabWidget::North);
}

void ampsViewContainerQtGUI::InitDockProjView(void)
{
/*
  m_DockWidgetProjInfo = new ampsDockWidgetBase(m_TabDockWinProjView);
  m_DockWidgetProjInfo->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  m_DockWidgetProjInfo->setFeatures(QDockWidget::AllDockWidgetFeatures);
  m_DockWidgetProjInfo->setWindowTitle("Project Info");
  m_WidgetProjInfo = new ampsScrollWidgetProjInfo(m_DockWidgetProjInfo);
  m_WidgetProjInfo->setFocusPolicy(Qt::WheelFocus);
  m_DockWidgetProjInfo->setWidget(m_WidgetProjInfo);

  m_DockWidgetProjBulletin = new ampsDockWidgetBase(m_TabDockWinProjView);
  m_DockWidgetProjBulletin->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  m_DockWidgetProjBulletin->setFeatures(QDockWidget::AllDockWidgetFeatures);
  m_DockWidgetProjBulletin->setWindowTitle("Project Bulletin");
  m_WidgetProjBulletin = new ampsScrollWidgetProjBulletin(m_DockWidgetProjBulletin);
  m_WidgetProjBulletin->setFocusPolicy(Qt::WheelFocus);
  m_DockWidgetProjBulletin->setWidget(m_WidgetProjBulletin);

  m_DockWidgetProjChart = new ampsDockWidgetBase(m_TabDockWinProjView);
  m_DockWidgetProjChart->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  m_DockWidgetProjChart->setFeatures(QDockWidget::AllDockWidgetFeatures);
  m_DockWidgetProjChart->setWindowTitle("Project Chart");
  m_WidgetProjChart = new ampsScrollWidgetProjChart(m_DockWidgetProjChart);
  m_WidgetProjChart->setFocusPolicy(Qt::WheelFocus);
  m_DockWidgetProjChart->setWidget(m_WidgetProjChart);
*/

  // alternatative as above w.r.t. to class declaration
  m_DockWidgetProjInfo = new ampsDockWidgetProjInfo(m_TabDockWinProjView);
  m_DockWidgetProjBulletin = new ampsDockWidgetProjBulletin(m_TabDockWinProjView);
  m_DockWidgetProjChart = new ampsDockWidgetProjChart(m_TabDockWinProjView);

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

void ampsViewContainerQtGUI::InitConnect(void)
{

}

void ampsViewContainerQtGUI::ShowAll(void)
{
  //m_WinProjView->show();
  //m_WinProjView->setFloating(true);

  m_TabDockWinAssetView->show();  m_TabDockWinAssetView->resize(640, 480);  m_TabDockWinAssetView->move(100, 100);
  m_TabDockWinFolderView->show();  m_TabDockWinFolderView->resize(640, 480);  m_TabDockWinFolderView->move(200, 100);
  m_TabDockWinProjView->show();  m_TabDockWinProjView->resize(640, 480);  m_TabDockWinProjView->move(300, 100);
  //m_TabDockWinProjView->setFloating(true);

  //m_TabDockWinAssetView->setFloating(true);
}


void ampsViewContainerQtGUI::Exe(void)
{
  ShowAll();
}

void ampsViewContainerQtGUI::TabRaiseChange(void)
{
  m_TabDockWinProjView->TabRaiseChange();
}
