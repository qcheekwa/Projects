/*
  ampsWidgetAssetProp.cpp
*/

#include "ampsWidgetAssetProp.h"

ampsWidgetAssetProp::ampsWidgetAssetProp(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetAssetProp::~ampsWidgetAssetProp()
{

}

ampsScrollWidgetAssetProp::ampsScrollWidgetAssetProp(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetProp = new ampsWidgetAssetProp(this);
  setWidget(m_WidgetAssetProp);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetAssetProp::~ampsScrollWidgetAssetProp()
{

}

ampsDockWidgetAssetProp::ampsDockWidgetAssetProp(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_DockWidgetAssetProp = new ampsScrollWidgetAssetProp;
  setWidget(m_DockWidgetAssetProp);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset Properties");
}

ampsDockWidgetAssetProp::~ampsDockWidgetAssetProp()
{

}

