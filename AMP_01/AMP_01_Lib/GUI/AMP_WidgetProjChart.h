/*
  AMP_WidgetProjChart.h
*/

#ifndef AMP_WIDGETPROJCHART_HH
#define AMP_WIDGETPROJCHART_HH

#include "../General/MgWidget.h"
#include "../General/MgScrollArea.h"
#include "AMP_DockWidgetBase.h"
#include "../GeneratedFiles/ui_AMP_WidgetProjChart.h"

class AMP_WidgetProjChart : public MgWidget //public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_WidgetProjChart(const QWidget *parent = NULL);
    virtual ~AMP_WidgetProjChart();

  public:
    Ui_Form_AMP_WidgetProjChart m_UI;

};

class AMP_ScrollWidgetProjChart : public MgScrollArea //AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_ScrollWidgetProjChart(const QWidget *parent = NULL);
    virtual ~AMP_ScrollWidgetProjChart();

  public:
    AMP_WidgetProjChart *m_WidgetProjChart;
};


class AMP_DockWidgetProjChart : public AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_DockWidgetProjChart(const QWidget *parent = NULL);
    virtual ~AMP_DockWidgetProjChart();

  public:
    AMP_ScrollWidgetProjChart *m_ScrollWidgetProjChart;
};


#endif
