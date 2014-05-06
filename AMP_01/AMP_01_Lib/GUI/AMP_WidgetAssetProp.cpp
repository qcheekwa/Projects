/*
  AMP_WidgetAssetProp.cpp
*/

#include "AMP_WidgetAssetProp.h"

AMP_WidgetAssetProp::AMP_WidgetAssetProp(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetAssetProp::~AMP_WidgetAssetProp()
{

}

AMP_ScrollWidgetAssetProp::AMP_ScrollWidgetAssetProp(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetProp = new AMP_WidgetAssetProp(this);
  setWidget(m_WidgetAssetProp);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetAssetProp::~AMP_ScrollWidgetAssetProp()
{

}

AMP_DockWidgetAssetProp::AMP_DockWidgetAssetProp(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_DockWidgetAssetProp = new AMP_ScrollWidgetAssetProp;
  setWidget(m_DockWidgetAssetProp);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset Properties");
}

AMP_DockWidgetAssetProp::~AMP_DockWidgetAssetProp()
{

}

