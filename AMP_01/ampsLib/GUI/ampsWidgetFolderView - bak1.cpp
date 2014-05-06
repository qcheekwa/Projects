/*
  ampswIDGETFolderView.cpp
*/

#include "ampsWidgetFolderView.h"

/////////////////////////////////////////////////////////////////////////////////
//
// class ampsWidgetFolderView
//
/////////////////////////////////////////////////////////////////////////////////

ampsWidgetFolderView::ampsWidgetFolderView(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetFolderView::~ampsWidgetFolderView()
{

}

/////////////////////////////////////////////////////////////////////////////////
//
// class ampsScrollWidgetFolderView
//
/////////////////////////////////////////////////////////////////////////////////

ampsScrollWidgetFolderView::ampsScrollWidgetFolderView(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetFolderView = new ampsWidgetFolderView(this);
  setWidget(m_WidgetFolderView);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetFolderView::~ampsScrollWidgetFolderView()
{

}

/////////////////////////////////////////////////////////////////////////////////
//
// class ampsDockWidgetFolderView
//
/////////////////////////////////////////////////////////////////////////////////

ampsDockWidgetFolderView::ampsDockWidgetFolderView(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_ScrollWidgetFolderView = new ampsScrollWidgetFolderView;
  setWidget(m_ScrollWidgetFolderView);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Folder View");

  Init();
}

ampsDockWidgetFolderView::~ampsDockWidgetFolderView()
{

}

void ampsDockWidgetFolderView::Init(void)
{
  m_FolderTreeView = new ampsTreeView;
  m_FolderTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
  m_FolderTreeView->setDragEnabled(true);

  m_FolderItemView = new ampsTreeView;
  m_FolderItemView->setSelectionMode(QAbstractItemView::ExtendedSelection);
  m_FolderItemView->setDragEnabled(true);
  m_FolderItemView->setRootIsDecorated(false);

  m_ScrollWidgetFolderView->m_WidgetFolderView->m_UI.m_scrollAreaTreeView->setWidget(m_FolderTreeView);

}