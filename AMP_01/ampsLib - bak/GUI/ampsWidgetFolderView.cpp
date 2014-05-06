/*
  ampswIDGETFolderView.cpp
*/

#include "ampsWidgetFolderView.h"


ampsWidgetFolderView::ampsWidgetFolderView(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetFolderView::~ampsWidgetFolderView()
{

}

ampsScrollWidgetFolderView::ampsScrollWidgetFolderView(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetFolderView = new ampsWidgetFolderView(this);
  setWidget(m_WidgetFolderView);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetFolderView::~ampsScrollWidgetFolderView()
{

}

ampsDockWidgetFolderView::ampsDockWidgetFolderView(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_DockWidgetFolderView = new ampsScrollWidgetFolderView;
  setWidget(m_DockWidgetFolderView);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Folder View");
}

ampsDockWidgetFolderView::~ampsDockWidgetFolderView()
{

}

