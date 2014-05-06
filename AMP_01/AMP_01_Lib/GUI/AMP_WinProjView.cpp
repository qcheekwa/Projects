/*
  AMP_WinProjView.cpp
*/

#include "AMP_WinProjView.h"


AMP_WinProjView::AMP_WinProjView()
{
  m_UI.setupUi(this);
}


AMP_WinProjView::AMP_WinProjView(const QWidget *parent) : AMP_DockWidgetBase(parent)
{
  m_UI.setupUi(this);
}

AMP_WinProjView::~AMP_WinProjView()
{

}

