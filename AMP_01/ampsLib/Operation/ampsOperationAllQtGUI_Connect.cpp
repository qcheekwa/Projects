/*
  ampsOperationAllQtGUI_Connect.cpp
*/

#include "ampsOperationAllQtGUI.h"

void ampsOperationAllQtGUI::InitConnect(void)
{
  connect( m_UI.m_actionFileLogin, SIGNAL(triggered()), m_OperationAutheticateUser, SLOT(Exe()) );
  //connect( m_UI.m_actionFileLogin, SIGNAL(triggered()), m_OperationAutheticateUser, SLOT(ExeAutoLogin()) );

  connect( m_UI.m_actionProjectSelector, SIGNAL(triggered()),  this, SLOT(ShowProjSelector()) );
  connect( m_UI.m_actionProjectViewer, SIGNAL(triggered()),  this, SLOT(ShowProjInfo()) );
  connect( m_UI.m_actionAssetViewer, SIGNAL(triggered()),  this, SLOT(ShowAssetInfo()) );
  connect( m_UI.m_actionRefreshFolderView, SIGNAL(triggered()),  this, SLOT(RefreshFolderView()) );


  connect( m_OperationAutheticateUser, SIGNAL(Autheticated()), this, SLOT(RetrieveProjectInfo()) );

  connect( m_OperationProjInfo, SIGNAL(GetProjInfoFinished(int)), this, SLOT(UpdateProjInfo(int)) );

  connect( m_ViewContainerQtGUI->m_DockWidgetProjSelector->m_ScrollWidgetProjSelector->m_ListWidgetProjSelector,
               SIGNAL(itemDoubleClicked(QListWidgetItem *) ), this, SLOT(SelectDispProj(QListWidgetItem *)) );

  connect( m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderTreeView, SIGNAL(clicked(const QModelIndex &)), m_OperationProjInfo, SLOT(FolderTreeViewClicked(const QModelIndex &)) );
  connect( m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderTreeView, SIGNAL(expanded(const QModelIndex &)), m_OperationProjInfo, SLOT(FolderTreeViewExpanded(const QModelIndex &)) );

  connect( m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderItemView, SIGNAL(clicked(const QModelIndex &)), m_OperationProjInfo, SLOT(FolderTreeItemClicked(const QModelIndex &)) );
  connect( m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderItemView, SIGNAL(doubleClicked(const QModelIndex &)), m_OperationProjInfo, SLOT(FolderTreeItemDoubleClicked(const QModelIndex &)) );
  connect( m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderItemView, SIGNAL(pressed(const QModelIndex &)), m_OperationProjInfo, SLOT(FolderTreeItemClicked(const QModelIndex &)) );

  //connect( m_OperationProjInfo->m_SelectedFolderItemViewModel, SIGNAL(headDataChaged()), m_OperationProjInfo, SLOT(FolderTreeItemClicked(const QModelIndex &)) );
  connect( m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderTreeView, SIGNAL(DropSignal(QDropEvent *)), m_OperationProjInfo, SLOT(DoCopyFromDropToTreeView(QDropEvent *)) );
  connect( m_ViewContainerQtGUI->m_DockWidgetFolderView->m_FolderItemView, SIGNAL(DropSignal(QDropEvent *)), m_OperationProjInfo, SLOT(DoCopyFromDropToItemView(QDropEvent *)) );
}
