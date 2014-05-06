/*
  AMP_AssetSelector
*/

#include "AMP_WidgetAssetSelector.h"


AMP_WidgetAssetSelector::AMP_WidgetAssetSelector(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetAssetSelector::~AMP_WidgetAssetSelector()
{

}

AMP_ScrollWidgetAssetSelector::AMP_ScrollWidgetAssetSelector(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetSelector = new AMP_WidgetAssetSelector(this);
  setWidget(m_WidgetAssetSelector);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetAssetSelector::~AMP_ScrollWidgetAssetSelector()
{

}

AMP_DockWidgetAssetSelector::AMP_DockWidgetAssetSelector(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_DockWidgetAssetSelector = new AMP_ScrollWidgetAssetSelector;
  setWidget(m_DockWidgetAssetSelector);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset Selector");
}

AMP_DockWidgetAssetSelector::~AMP_DockWidgetAssetSelector()
{

}

