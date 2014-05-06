/*
  ampsWidgetProjInfo.cpp
*/

#include "ampsWidgetProjInfo.h"

ampsWidgetProjInfo::ampsWidgetProjInfo(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetProjInfo::~ampsWidgetProjInfo()
{

}

ampsScrollWidgetProjInfo::ampsScrollWidgetProjInfo(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetProjInfo = new ampsWidgetProjInfo(this);
  setWidget(m_WidgetProjInfo);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetProjInfo::~ampsScrollWidgetProjInfo()
{

}

ampsDockWidgetProjInfo::ampsDockWidgetProjInfo(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_ScrollWidgetProjInfo = new ampsScrollWidgetProjInfo;
  setWidget(m_ScrollWidgetProjInfo);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Project Info");
}

ampsDockWidgetProjInfo::~ampsDockWidgetProjInfo()
{

}

