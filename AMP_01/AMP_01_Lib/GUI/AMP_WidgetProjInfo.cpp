/*
  AMP_WidgetProjInfo.cpp
*/

#include "AMP_WidgetProjInfo.h"

AMP_WidgetProjInfo::AMP_WidgetProjInfo(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetProjInfo::~AMP_WidgetProjInfo()
{

}

AMP_ScrollWidgetProjInfo::AMP_ScrollWidgetProjInfo(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetProjInfo = new AMP_WidgetProjInfo(this);
  setWidget(m_WidgetProjInfo);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetProjInfo::~AMP_ScrollWidgetProjInfo()
{

}

AMP_DockWidgetProjInfo::AMP_DockWidgetProjInfo(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_ScrollWidgetProjInfo = new AMP_ScrollWidgetProjInfo;
  setWidget(m_ScrollWidgetProjInfo);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Project Info");
}

AMP_DockWidgetProjInfo::~AMP_DockWidgetProjInfo()
{

}

