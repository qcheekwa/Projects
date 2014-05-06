/*
  AMP_WidgetProjChart.cpp
*/

#include "AMP_WidgetProjChart.h"

AMP_WidgetProjChart::AMP_WidgetProjChart(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
}

AMP_WidgetProjChart::~AMP_WidgetProjChart()
{

}

AMP_ScrollWidgetProjChart::AMP_ScrollWidgetProjChart(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetProjChart = new AMP_WidgetProjChart(this);
  setWidget(m_WidgetProjChart);
}

AMP_ScrollWidgetProjChart::~AMP_ScrollWidgetProjChart()
{

}

AMP_DockWidgetProjChart::AMP_DockWidgetProjChart(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_ScrollWidgetProjChart = new AMP_ScrollWidgetProjChart;
  setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  setWidget(m_ScrollWidgetProjChart);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Project Chart");
}

AMP_DockWidgetProjChart::~AMP_DockWidgetProjChart()
{

}


