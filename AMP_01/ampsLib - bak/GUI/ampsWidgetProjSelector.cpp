/*
  ampsWidgetProjSelector.cpp
*/

#include "ampsWidgetProjSelector.h"


ampsWidgetProjSelector::ampsWidgetProjSelector(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetProjSelector::~ampsWidgetProjSelector()
{

}

ampsScrollWidgetProjSelector::ampsScrollWidgetProjSelector(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetProjSelector = new ampsWidgetProjSelector(this);
  setWidget(m_WidgetProjSelector);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetProjSelector::~ampsScrollWidgetProjSelector()
{

}

ampsDockWidgetProjSelector::ampsDockWidgetProjSelector(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_DockWidgetProjSelector = new ampsScrollWidgetProjSelector;
  setWidget(m_DockWidgetProjSelector);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Proj Selector");
}

ampsDockWidgetProjSelector::~ampsDockWidgetProjSelector()
{

}

