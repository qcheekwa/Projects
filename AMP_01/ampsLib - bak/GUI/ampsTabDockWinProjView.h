/*
  ampsTabDockWinProjView.h
*/

#ifndef AMPSTABDOCKWINPROJVIEW_HH
#define AMPSTABDOCKWINPROJVIEW_HH

#include "ampsMainWinBase.h"
#include "ampsDockWidgetBase.h"


class ampsTabDockWinProjView : public ampsMainWinBase
{
  Q_OBJECT

  public:
    ampsTabDockWinProjView();
    ampsTabDockWinProjView(const QWidget *parent);
    virtual ~ampsTabDockWinProjView();

    void Init(void);
    void InitConnect(void);

    //virtual void focusInEvent(void);

  public slots:
    void TabRaiseChange(void);

  public:


};


#endif
