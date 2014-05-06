/*
  ampsAssetSelector
*/

#include "ampsWidgetAssetSelector.h"


ampsWidgetAssetSelector::ampsWidgetAssetSelector(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetAssetSelector::~ampsWidgetAssetSelector()
{

}

ampsScrollWidgetAssetSelector::ampsScrollWidgetAssetSelector(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetSelector = new ampsWidgetAssetSelector(this);
  setWidget(m_WidgetAssetSelector);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetAssetSelector::~ampsScrollWidgetAssetSelector()
{

}

ampsDockWidgetAssetSelector::ampsDockWidgetAssetSelector(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_DockWidgetAssetSelector = new ampsScrollWidgetAssetSelector;
  setWidget(m_DockWidgetAssetSelector);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset Selector");
}

ampsDockWidgetAssetSelector::~ampsDockWidgetAssetSelector()
{

}

