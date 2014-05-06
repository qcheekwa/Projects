/*
  AMP_MainWinBase.h
*/

#ifndef AMP_MAINWINBASE_HH
#define AMP_MAINWINBASE_HH

#include <QMainWindow>
#include "AMP_DockWidgetBase.h"

class AMP_MainWinBase : public QMainWindow//, AMP_DockWidgetBase
{
  Q_OBJECT

  public:
    AMP_MainWinBase();
    AMP_MainWinBase(const QWidget *parent);
    virtual ~AMP_MainWinBase();
};

#endif
