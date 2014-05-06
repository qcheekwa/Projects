/*
  AMP_WidgetAssetRevision.cpp
*/

#include "AMP_WidgetAssetRevision.h"


AMP_WidgetAssetRevision::AMP_WidgetAssetRevision(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetAssetRevision::~AMP_WidgetAssetRevision()
{

}

AMP_ScrollWidgetAssetRevision::AMP_ScrollWidgetAssetRevision(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetRevision = new AMP_WidgetAssetRevision(this);
  setWidget(m_WidgetAssetRevision);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetAssetRevision::~AMP_ScrollWidgetAssetRevision()
{

}

AMP_DockWidgetAssetRevision::AMP_DockWidgetAssetRevision(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_DockWidgetAssetRevision = new AMP_ScrollWidgetAssetRevision;
  setWidget(m_DockWidgetAssetRevision);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset Revision");
}

AMP_DockWidgetAssetRevision::~AMP_DockWidgetAssetRevision()
{

}


