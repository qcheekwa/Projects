/*
  ampsWidgetAssetComment.cpp
*/

#include "ampsWidgetAssetComment.h"


ampsWidgetAssetComment::ampsWidgetAssetComment(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetAssetComment::~ampsWidgetAssetComment()
{

}

ampsScrollWidgetAssetComment::ampsScrollWidgetAssetComment(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetComment = new ampsWidgetAssetComment(this);
  setWidget(m_WidgetAssetComment);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetAssetComment::~ampsScrollWidgetAssetComment()
{

}

ampsDockWidgetAssetComment::ampsDockWidgetAssetComment(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_DockWidgetAssetComment = new ampsScrollWidgetAssetComment;
  setWidget(m_DockWidgetAssetComment);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset Comment");
}

ampsDockWidgetAssetComment::~ampsDockWidgetAssetComment()
{

}


