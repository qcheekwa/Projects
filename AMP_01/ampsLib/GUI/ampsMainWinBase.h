/*
  ampsMainWinBase.h
*/

#ifndef AMPSMAINWINBASE_HH
#define AMPSMAINWINBASE_HH

#include <QMainWindow>
#include "ampsDockWidgetBase.h"

class ampsMainWinBase : public QMainWindow//, ampsDockWidgetBase
{
  Q_OBJECT

  public:
    ampsMainWinBase();
    ampsMainWinBase(const QWidget *parent);
    virtual ~ampsMainWinBase();
};

#endif
