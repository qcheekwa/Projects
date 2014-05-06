/*
  AMP_WidgetAssetTNView.cpp
*/


#include "AMP_WidgetAssetTNView.h"


AMP_WidgetAssetTNView::AMP_WidgetAssetTNView(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetAssetTNView::~AMP_WidgetAssetTNView()
{

}

AMP_ScrollWidgetAssetTNView::AMP_ScrollWidgetAssetTNView(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetTNView = new AMP_WidgetAssetTNView(this);
  setWidget(m_WidgetAssetTNView);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetAssetTNView::~AMP_ScrollWidgetAssetTNView()
{

}

AMP_DockWidgetAssetTNView::AMP_DockWidgetAssetTNView(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_DockWidgetAssetTNView = new AMP_ScrollWidgetAssetTNView;
  setWidget(m_DockWidgetAssetTNView);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset TNView");
}

AMP_DockWidgetAssetTNView::~AMP_DockWidgetAssetTNView()
{

}

