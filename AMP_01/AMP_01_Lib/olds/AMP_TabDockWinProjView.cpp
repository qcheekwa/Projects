/*
  AMP_TabDockWinProjView.cpp
*/

#include "AMP_TabDockWinProjView.h"


AMP_TabDockWinProjView::AMP_TabDockWinProjView()
{
  AMP_TabDockWinProjView::AMP_TabDockWinProjView(NULL);
}

AMP_TabDockWinProjView::AMP_TabDockWinProjView(const QWidget *parent) : AMP_MainWinBase(parent)
{
  //m_UI.setupUi(this);

  Init();
}

AMP_TabDockWinProjView::~AMP_TabDockWinProjView()
{

}

void AMP_TabDockWinProjView::Init(void)
{
  //setMinimumSize(640, 480);
}

void AMP_TabDockWinProjView::TabRaiseChange(void)
{
  QWidget *ww = centralWidget ();

  if(ww == NULL)
    return;

  QSize ss = ww->size();
  setMinimumSize(ss);  // to ensure scroll function appear w.r.t. child widget size
}