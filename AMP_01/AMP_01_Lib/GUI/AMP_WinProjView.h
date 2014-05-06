/*
  AMP_WinProjView.h
*/

#ifndef AMP_WINPROJVIEW_HH
#define AMP_WINPROJVIEW_HH

#include "AMP_MainWinBase.h"
#include "AMP_DockWidgetBase.h"

#include "../GeneratedFiles/ui_AMP_WinProjView.h"

class AMP_WinProjView : public AMP_DockWidgetBase
{
  public:
    AMP_WinProjView();
    AMP_WinProjView(const QWidget *parent);
    virtual ~AMP_WinProjView();

    //ChangeButtonSize();

  public:
    Ui_Form_AMP_WinProjView m_UI;

};

#endif
