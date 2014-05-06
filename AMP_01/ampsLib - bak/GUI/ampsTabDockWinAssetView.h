/*
  ampsTabDockWinAssetView.h
*/

#ifndef AMPSTABDOCKWINASSETVIEW_HH
#define AMPSTABDOCKWINASSETVIEW_HH

#include "ampsMainWinBase.h"
#include "ampsDockWidgetBase.h"


class ampsTabDockWinAssetView : public ampsMainWinBase
{
  Q_OBJECT

  public:
    ampsTabDockWinAssetView();
    ampsTabDockWinAssetView(const QWidget *parent);
    virtual ~ampsTabDockWinAssetView();

    void Init(void);
    void InitConnect(void);

    //virtual void focusInEvent(void);

  public slots:

  public:


};

#endif
