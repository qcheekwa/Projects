/*
  AMP_TabDockWinAssetView.h
*/

#ifndef AMP_TABDOCKWINASSETVIEW_HH
#define AMP_TABDOCKWINASSETVIEW_HH

#include "AMP_MainWinBase.h"
#include "AMP_DockWidgetBase.h"


class AMP_TabDockWinAssetView : public AMP_MainWinBase
{
  Q_OBJECT

  public:
    AMP_TabDockWinAssetView();
    AMP_TabDockWinAssetView(const QWidget *parent);
    virtual ~AMP_TabDockWinAssetView();

    void Init(void);
    void InitConnect(void);

    //virtual void focusInEvent(void);

  public slots:

  public:


};

#endif
