/*
  AMP_WidgetAssetComment.cpp
*/

#include "AMP_WidgetAssetComment.h"


AMP_WidgetAssetComment::AMP_WidgetAssetComment(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_WidgetAssetComment::~AMP_WidgetAssetComment()
{

}

AMP_ScrollWidgetAssetComment::AMP_ScrollWidgetAssetComment(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  m_WidgetAssetComment = new AMP_WidgetAssetComment(this);
  setWidget(m_WidgetAssetComment);
  setFocusPolicy(Qt::WheelFocus);
}

AMP_ScrollWidgetAssetComment::~AMP_ScrollWidgetAssetComment()
{

}

AMP_DockWidgetAssetComment::AMP_DockWidgetAssetComment(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_DockWidgetAssetComment = new AMP_ScrollWidgetAssetComment;
  setWidget(m_DockWidgetAssetComment);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Asset Comment");
}

AMP_DockWidgetAssetComment::~AMP_DockWidgetAssetComment()
{

}


