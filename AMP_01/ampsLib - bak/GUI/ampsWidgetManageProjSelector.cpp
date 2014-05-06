
/*
  ampsWidgetManageProjSelector.cpp
*/

#include "ampsWidgetManageProjSelector.h"

ampsWidgetManageProjSelector::ampsWidgetManageProjSelector(const QWidget *parent) : ampsTreeWidgetBase((QWidget *)parent)
{
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetManageProjSelector::~ampsWidgetManageProjSelector()
{

}

ampsScrollWidgetManageProjSelector::ampsScrollWidgetManageProjSelector(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetManageProjSelector = new ampsWidgetManageProjSelector(this);
  setWidget(m_WidgetManageProjSelector);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetManageProjSelector::~ampsScrollWidgetManageProjSelector()
{

}

ampsDockWidgetManageProjSelector::ampsDockWidgetManageProjSelector(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_ScrollWidgetManageProjSelector = new ampsScrollWidgetManageProjSelector;
  setWidget(m_ScrollWidgetManageProjSelector);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Manage Project");
}

ampsDockWidgetManageProjSelector::~ampsDockWidgetManageProjSelector()
{

}

