/*
  AMP_TabDockWinProjView.h
*/

#ifndef AMP_TABDOCKWINPROJVIEW_HH
#define AMP_TABDOCKWINPROJVIEW_HH

#include "AMP_MainWinBase.h"
#include "AMP_DockWidgetBase.h"


class AMP_TabDockWinProjView : public AMP_MainWinBase
{
  Q_OBJECT

  public:
    AMP_TabDockWinProjView();
    AMP_TabDockWinProjView(const QWidget *parent);
    virtual ~AMP_TabDockWinProjView();

    void Init(void);
    void InitConnect(void);

    //virtual void focusInEvent(void);

  public slots:
    void TabRaiseChange(void);

  public:


};


#endif
