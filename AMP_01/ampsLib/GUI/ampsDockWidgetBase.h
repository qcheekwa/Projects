/*
  ampsDockWidgetBase.h
*/

#ifndef AMPSDOCKWIDGETBASE_HH
#define AMPSDOCKWIDGETBASE_HH

#include <QDockWidget>


class ampsDockWidgetBase : public QDockWidget
{
  Q_OBJECT

  public:
    ampsDockWidgetBase();
    ampsDockWidgetBase(const QWidget *parent);
    virtual ~ampsDockWidgetBase();

    void Init(void);

    //virtual void focusInEvent(void); 

  //public slots:
    
};

#endif

