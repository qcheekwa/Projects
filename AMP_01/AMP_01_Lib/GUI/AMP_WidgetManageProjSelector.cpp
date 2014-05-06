
/*
  AMP_WidgetManageProjSelector.cpp
*/

#include "AMP_WidgetManageProjSelector.h"

AMP_WidgetManageProjSelector::AMP_WidgetManageProjSelector(const QWidget *parent) : AMP_TreeWidgetBase((QWidget *)parent)
{
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetManageProjSelector::~AMP_WidgetManageProjSelector()
{

}

AMP_ScrollWidgetManageProjSelector::AMP_ScrollWidgetManageProjSelector(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetManageProjSelector = new AMP_WidgetManageProjSelector(this);
  setWidget(m_WidgetManageProjSelector);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetManageProjSelector::~AMP_ScrollWidgetManageProjSelector()
{

}

AMP_DockWidgetManageProjSelector::AMP_DockWidgetManageProjSelector(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_ScrollWidgetManageProjSelector = new AMP_ScrollWidgetManageProjSelector;
  setWidget(m_ScrollWidgetManageProjSelector);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Manage Project");
}

AMP_DockWidgetManageProjSelector::~AMP_DockWidgetManageProjSelector()
{

}

