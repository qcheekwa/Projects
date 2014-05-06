/*
  AMP_WidgetProjSelector.cpp
*/

#include "AMP_WidgetProjSelector.h"


AMP_WidgetProjSelector::AMP_WidgetProjSelector(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetProjSelector::~AMP_WidgetProjSelector()
{

}

AMP_ScrollWidgetProjSelector::AMP_ScrollWidgetProjSelector(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetProjSelector = new AMP_WidgetProjSelector(this);
  setWidget(m_WidgetProjSelector);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetProjSelector::~AMP_ScrollWidgetProjSelector()
{

}

AMP_DockWidgetProjSelector::AMP_DockWidgetProjSelector(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_DockWidgetProjSelector = new AMP_ScrollWidgetProjSelector;
  setWidget(m_DockWidgetProjSelector);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Proj Selector");
}

AMP_DockWidgetProjSelector::~AMP_DockWidgetProjSelector()
{

}

