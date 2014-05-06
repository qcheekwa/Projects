/*
  ampsOperationAllQtGUI
*/

#include <QDragEnterEvent>
#include <QDropEvent>
#include <QDragMoveEvent>

#include "ampsOperationAllQtGUI.h"

ampsOperationAllQtGUI::ampsOperationAllQtGUI()
{
  Init();
  InitConnect();
}

ampsOperationAllQtGUI::~ampsOperationAllQtGUI()
{
  if(m_DataDoc != NULL)
  {
    delete m_DataDoc;
    m_DataDoc = NULL; 
  }
}

void ampsOperationAllQtGUI::Init(void)
{
  m_UI.setupUi(this);
  m_OperationAutheticateUser = new ampsOperationAutheticateUser(this);
  m_OperationProjInfo = new ampsOperationProjInfo(this);
  m_DataDoc = new ampsDataDoc;
  m_MdiArea = new QMdiArea(this);

  m_subWindowProj = new QMdiSubWindow(this);
  m_subWindowAsset = new QMdiSubWindow(this);
  m_subWindowFolder = new QMdiSubWindow(this);
  m_subWindowTest = new QMdiSubWindow(this);

  m_TestDragDropWin = new DropSiteWindow;
  //m_TestDragDropWin->show();

  m_UI.m_scrollAreaDisp->setWidget(m_MdiArea);

  m_ViewContainerQtGUI = new ampsViewContainerQtGUI;
  m_MdiArea->addSubWindow(m_subWindowProj);
  m_MdiArea->addSubWindow(m_subWindowAsset);
  m_MdiArea->addSubWindow(m_subWindowFolder);
  m_MdiArea->addSubWindow(m_subWindowTest);

  m_subWindowProj->setWidget(m_ViewContainerQtGUI->m_TabDockWinProjView);
  m_subWindowAsset->setWidget(m_ViewContainerQtGUI->m_TabDockWinAssetView);
  m_subWindowFolder->setWidget(m_ViewContainerQtGUI->m_TabDockWinFolderView);
  m_subWindowFolder->setGeometry(10, 10, 900, 400);

  m_subWindowTest->setWidget(m_TestDragDropWin);
  //m_MdiArea->addSubWindow(m_ViewContainerQtGUI->m_TabDockWinProjView);
  //m_MdiArea->addSubWindow(m_ViewContainerQtGUI.m_TabDockWinAssetView);

  m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderItemView->setModel(m_OperationProjInfo->m_SelectedFolderItemViewModel);
  //m_ViewContainerQtGUI->m_FolderItemView->setModel(m_OperationProjInfo->m_SortItemViewModel);
  m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderItemView->setSortingEnabled(true);

  m_UI.m_scrollAreaDisp->setAcceptDrops(true);

  //setAcceptDrops(true);
  //setDropIndicatorShown(true);
  //setDragDropMode(QAbstractItemView::DragDrop);
  QStandardItemModel *smodel = m_DataDoc->m_FileSystemModelAll;
  m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderTreeView->setModel(smodel);
  m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderTreeView->update();
}

void ampsOperationAllQtGUI::dragEnterEvent(QDragEnterEvent *event)
{
//printf("\ndrag enter\n");
  event->acceptProposedAction();
  
}

void ampsOperationAllQtGUI::dropEvent(QDropEvent *event)
{
  event->acceptProposedAction();
}

void ampsOperationAllQtGUI::dragMoveEvent(QDragMoveEvent *d_event)
{
  //printf("\ndrag move event\n");
}
