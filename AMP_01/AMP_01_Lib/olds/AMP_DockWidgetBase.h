/*
  AMP_DockWidgetBase.h
*/

#ifndef AMP_DOCKWIDGETBASE_HH
#define AMP_DOCKWIDGETBASE_HH

#include <QDockWidget>


class AMP_DockWidgetBase : public QDockWidget
{
  Q_OBJECT

  public:
    AMP_DockWidgetBase();
    AMP_DockWidgetBase(const QWidget *parent);
    virtual ~AMP_DockWidgetBase();

    void Init(void);

    //virtual void focusInEvent(void); 

  //public slots:
    
};

#endif

