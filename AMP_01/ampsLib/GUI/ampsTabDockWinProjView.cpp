/*
  ampsTabDockWinProjView.cpp
*/

#include "ampsTabDockWinProjView.h"


ampsTabDockWinProjView::ampsTabDockWinProjView()
{
  ampsTabDockWinProjView::ampsTabDockWinProjView(NULL);
}

ampsTabDockWinProjView::ampsTabDockWinProjView(const QWidget *parent) : ampsMainWinBase(parent)
{
  //m_UI.setupUi(this);

  Init();
}

ampsTabDockWinProjView::~ampsTabDockWinProjView()
{

}

void ampsTabDockWinProjView::Init(void)
{
  //setMinimumSize(640, 480);
}
/*
void ampsTabDockWinProjView::TabRaiseChange(void)
{
  QWidget *ww = centralWidget ();

  if(ww == NULL)
    return;

  QSize ss = ww->size();
  setMinimumSize(ss);  // to ensure scroll function appear w.r.t. child widget size
}
*/