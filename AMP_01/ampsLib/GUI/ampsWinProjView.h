/*
  ampsWinProjView.h
*/

#ifndef AMPSWINPROJVIEW_HH
#define AMPSWINPROJVIEW_HH

#include "ampsMainWinBase.h"
#include "ampsDockWidgetBase.h"

#include "../GeneratedFiles/ui_ampsWinProjView.h"

class ampsWinProjView : public ampsDockWidgetBase
{
  public:
    ampsWinProjView();
    ampsWinProjView(const QWidget *parent);
    virtual ~ampsWinProjView();

    //ChangeButtonSize();

  public:
    Ui_Form_ampsWinProjView m_UI;

};

#endif
