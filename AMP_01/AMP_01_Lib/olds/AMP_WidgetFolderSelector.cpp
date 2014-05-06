/*
  AMP_FolderSelector.cpp
*/

#include "AMP_WidgetFolderSelector.h"


AMP_WidgetFolderSelector::AMP_WidgetFolderSelector(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetFolderSelector::~AMP_WidgetFolderSelector()
{

}

AMP_ScrollWidgetFolderSelector::AMP_ScrollWidgetFolderSelector(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetFolderSelector = new AMP_WidgetFolderSelector(this);
  setWidget(m_WidgetFolderSelector);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetFolderSelector::~AMP_ScrollWidgetFolderSelector()
{

}

AMP_DockWidgetFolderSelector::AMP_DockWidgetFolderSelector(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_DockWidgetFolderSelector = new AMP_ScrollWidgetFolderSelector;
  setWidget(m_DockWidgetFolderSelector);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Folder Selector");
}

AMP_DockWidgetFolderSelector::~AMP_DockWidgetFolderSelector()
{

}

