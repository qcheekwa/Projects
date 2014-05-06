/*
  ampsWidgetProjChart.cpp
*/

#include "ampsWidgetProjChart.h"

ampsWidgetProjChart::ampsWidgetProjChart(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
}

ampsWidgetProjChart::~ampsWidgetProjChart()
{

}

ampsScrollWidgetProjChart::ampsScrollWidgetProjChart(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetProjChart = new ampsWidgetProjChart(this);
  setWidget(m_WidgetProjChart);
}

ampsScrollWidgetProjChart::~ampsScrollWidgetProjChart()
{

}

ampsDockWidgetProjChart::ampsDockWidgetProjChart(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_ScrollWidgetProjChart = new ampsScrollWidgetProjChart;
  setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  setWidget(m_ScrollWidgetProjChart);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Project Chart");
}

ampsDockWidgetProjChart::~ampsDockWidgetProjChart()
{

}


