/*
  AMP_WidgetProjBulletin.cpp
*/

#include "AMP_WidgetProjBulletin.h"


AMP_WidgetProjBulletin::AMP_WidgetProjBulletin(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
}

AMP_WidgetProjBulletin::~AMP_WidgetProjBulletin()
{

}

AMP_ScrollWidgetProjBulletin::AMP_ScrollWidgetProjBulletin(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetProjBulletin = new AMP_WidgetProjBulletin(this);
  setWidget(m_WidgetProjBulletin);
}

AMP_ScrollWidgetProjBulletin::~AMP_ScrollWidgetProjBulletin()
{

}

AMP_DockWidgetProjBulletin::AMP_DockWidgetProjBulletin(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_ScrollWidgetProjBulletin = new AMP_ScrollWidgetProjBulletin;
  setWidget(m_ScrollWidgetProjBulletin);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Project Bulletin");
}

AMP_DockWidgetProjBulletin::~AMP_DockWidgetProjBulletin()
{

}


