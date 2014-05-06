/*
  ampsFolderSelector.cpp
*/

#include "ampsWidgetFolderSelector.h"


ampsWidgetFolderSelector::ampsWidgetFolderSelector(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetFolderSelector::~ampsWidgetFolderSelector()
{

}

ampsScrollWidgetFolderSelector::ampsScrollWidgetFolderSelector(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetFolderSelector = new ampsWidgetFolderSelector(this);
  setWidget(m_WidgetFolderSelector);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetFolderSelector::~ampsScrollWidgetFolderSelector()
{

}

ampsDockWidgetFolderSelector::ampsDockWidgetFolderSelector(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_DockWidgetFolderSelector = new ampsScrollWidgetFolderSelector;
  setWidget(m_DockWidgetFolderSelector);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Folder Selector");
}

ampsDockWidgetFolderSelector::~ampsDockWidgetFolderSelector()
{

}

