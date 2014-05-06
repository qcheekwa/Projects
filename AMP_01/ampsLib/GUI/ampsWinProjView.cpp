/*
  ampsWinProjView.cpp
*/

#include "ampsWinProjView.h"


ampsWinProjView::ampsWinProjView()
{
  m_UI.setupUi(this);
}


ampsWinProjView::ampsWinProjView(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_UI.setupUi(this);
}

ampsWinProjView::~ampsWinProjView()
{

}

