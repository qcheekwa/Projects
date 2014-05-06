/*
  AMP_wIDGETFolderView.cpp
*/

#include "AMP_WidgetFolderView.h"


AMP_WidgetFolderView::AMP_WidgetFolderView(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetFolderView::~AMP_WidgetFolderView()
{

}

AMP_ScrollWidgetFolderView::AMP_ScrollWidgetFolderView(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetFolderView = new AMP_WidgetFolderView(this);
  setWidget(m_WidgetFolderView);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetFolderView::~AMP_ScrollWidgetFolderView()
{

}

AMP_DockWidgetFolderView::AMP_DockWidgetFolderView(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_DockWidgetFolderView = new AMP_ScrollWidgetFolderView;
  setWidget(m_DockWidgetFolderView);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Folder View");
}

AMP_DockWidgetFolderView::~AMP_DockWidgetFolderView()
{

}

