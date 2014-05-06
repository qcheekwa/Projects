/*
  ampsTabDockWinFolderView.h
*/

#ifndef AMPSTABDOCKWINFOLDERVIEW_HH
#define AMPSTABDOCKWINFOLDERVIEW_HH

#include "ampsMainWinBase.h"
#include "ampsDockWidgetBase.h"

class ampsTabDockWinFolderView : public ampsMainWinBase
{
  Q_OBJECT

  public:
    ampsTabDockWinFolderView();
    ampsTabDockWinFolderView(const QWidget *parent);
    virtual ~ampsTabDockWinFolderView();

    void Init(void);
    void InitConnect(void);

  public:


};




#endif
