/*
  AMP_WinProj.h
*/

#ifndef AMP_WINPROJ_HH
#define AMP_WINPROJ_HH

#include "AMP_MainWinBase.h"
#include "AMP_DockWidgetBase.h"

#include "ui_AMP_WinProj.h"

class AMP_WinProj : public AMP_DockWidgetBase
{
  public:
    AMP_WinProj();
    virtual ~AMP_WinProj();

    //ChangeButtonSize();

  public:
    Ui_Form_AMP_WinProj m_UI;

};

#endif
