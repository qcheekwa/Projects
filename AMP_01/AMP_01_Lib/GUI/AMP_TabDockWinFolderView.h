/*
  AMP_TabDockWinFolderView.h
*/

#ifndef AMP_TABDOCKWINFOLDERVIEW_HH
#define AMP_TABDOCKWINFOLDERVIEW_HH

#include "AMP_MainWinBase.h"
#include "AMP_DockWidgetBase.h"

class AMP_TabDockWinFolderView : public AMP_MainWinBase
{
  Q_OBJECT

  public:
    AMP_TabDockWinFolderView();
    AMP_TabDockWinFolderView(const QWidget *parent);
    virtual ~AMP_TabDockWinFolderView();

    void Init(void);
    void InitConnect(void);

  public:


};




#endif
