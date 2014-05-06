/*
  ampsWinProj.h
*/

#ifndef AMPSWINPROJ_HH
#define AMPSWINPROJ_HH

#include "ampsMainWinBase.h"
#include "ampsDockWidgetBase.h"

#include "../GeneratedFiles/ui_ampsWinProj.h"

class ampsWinProj : public ampsDockWidgetBase
{
  public:
    ampsWinProj();
    virtual ~ampsWinProj();

    //ChangeButtonSize();

  public:
    Ui_Form_ampsWinProj m_UI;

};

#endif
