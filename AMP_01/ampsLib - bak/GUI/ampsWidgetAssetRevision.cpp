/*
  ampsWidgetAssetRevision.cpp
*/

#include "ampsWidgetAssetRevision.h"


ampsWidgetAssetRevision::ampsWidgetAssetRevision(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetAssetRevision::~ampsWidgetAssetRevision()
{

}

ampsScrollWidgetAssetRevision::ampsScrollWidgetAssetRevision(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetRevision = new ampsWidgetAssetRevision(this);
  setWidget(m_WidgetAssetRevision);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetAssetRevision::~ampsScrollWidgetAssetRevision()
{

}

ampsDockWidgetAssetRevision::ampsDockWidgetAssetRevision(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_DockWidgetAssetRevision = new ampsScrollWidgetAssetRevision;
  setWidget(m_DockWidgetAssetRevision);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset Revision");
}

ampsDockWidgetAssetRevision::~ampsDockWidgetAssetRevision()
{

}


