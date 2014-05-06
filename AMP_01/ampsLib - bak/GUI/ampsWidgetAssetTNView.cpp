/*
  ampsWidgetAssetTNView.cpp
*/


#include "ampsWidgetAssetTNView.h"


ampsWidgetAssetTNView::ampsWidgetAssetTNView(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetAssetTNView::~ampsWidgetAssetTNView()
{

}

ampsScrollWidgetAssetTNView::ampsScrollWidgetAssetTNView(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetTNView = new ampsWidgetAssetTNView(this);
  setWidget(m_WidgetAssetTNView);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetAssetTNView::~ampsScrollWidgetAssetTNView()
{

}

ampsDockWidgetAssetTNView::ampsDockWidgetAssetTNView(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_DockWidgetAssetTNView = new ampsScrollWidgetAssetTNView;
  setWidget(m_DockWidgetAssetTNView);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset TNView");
}

ampsDockWidgetAssetTNView::~ampsDockWidgetAssetTNView()
{

}

