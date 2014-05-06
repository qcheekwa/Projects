/*
  ampsWidgetProjBulletin.cpp
*/

#include "ampsWidgetProjBulletin.h"


ampsWidgetProjBulletin::ampsWidgetProjBulletin(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
}

ampsWidgetProjBulletin::~ampsWidgetProjBulletin()
{

}

ampsScrollWidgetProjBulletin::ampsScrollWidgetProjBulletin(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetProjBulletin = new ampsWidgetProjBulletin(this);
  setWidget(m_WidgetProjBulletin);
}

ampsScrollWidgetProjBulletin::~ampsScrollWidgetProjBulletin()
{

}

ampsDockWidgetProjBulletin::ampsDockWidgetProjBulletin(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_ScrollWidgetProjBulletin = new ampsScrollWidgetProjBulletin;
  setWidget(m_ScrollWidgetProjBulletin);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Project Bulletin");
}

ampsDockWidgetProjBulletin::~ampsDockWidgetProjBulletin()
{

}


