/*
  ampsWidgetProjChart.h
*/

#ifndef AMPSWIDGETPROJCHART_HH
#define AMPSWIDGETPROJCHART_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "ampsDockWidgetBase.h"
#include "../GeneratedFiles/ui_ampsWidgetProjChart.h"

class ampsWidgetProjChart : public MgWidget //public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsWidgetProjChart(const QWidget *parent = NULL);
    virtual ~ampsWidgetProjChart();

  public:
    Ui_Form_ampsWidgetProjChart m_UI;

};

class ampsScrollWidgetProjChart : public MgScrollArea //ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsScrollWidgetProjChart(const QWidget *parent = NULL);
    virtual ~ampsScrollWidgetProjChart();

  public:
    ampsWidgetProjChart *m_WidgetProjChart;
};


class ampsDockWidgetProjChart : public ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsDockWidgetProjChart(const QWidget *parent = NULL);
    virtual ~ampsDockWidgetProjChart();

  public:
    ampsScrollWidgetProjChart *m_ScrollWidgetProjChart;
};


#endif
