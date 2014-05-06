/*
  ampsWidgetProjInfo.cpp
*/

#include "ampsWidgetProjInfo.h"

////////////////////////////////////////////////////////////////////
//
// 1. ampsWidgetProjInfo
//
////////////////////////////////////////////////////////////////////

ampsWidgetProjInfo::ampsWidgetProjInfo(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetProjInfo::~ampsWidgetProjInfo()
{

}

////////////////////////////////////////////////////////////////////
//
// 2. ampsScrollWidgetProjInfo
//
////////////////////////////////////////////////////////////////////

ampsScrollWidgetProjInfo::ampsScrollWidgetProjInfo(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetProjInfo = new ampsWidgetProjInfo(this);
  setWidget(m_WidgetProjInfo);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetProjInfo::~ampsScrollWidgetProjInfo()
{

}

////////////////////////////////////////////////////////////////////
//
//  ampsDockWidgetProjInfo
//
////////////////////////////////////////////////////////////////////

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

void ampsDockWidgetProjInfo::UpdateDispData(const QJsonObject &proj_info)
{
  m_ScrollWidgetProjInfo->m_WidgetProjInfo->m_UI.m_lineEditProjName->setText(proj_info["name"].toString());
  m_ScrollWidgetProjInfo->m_WidgetProjInfo->m_UI.m_lineEditEstimatedDuration->setText(proj_info["duration"].toString() );
}