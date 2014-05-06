/*
  ampsTreeWidgetBase.h
*/

#ifndef AMPSTREEWIDGETBASE_HH
#define AMPSTREEWIDGETBASE_HH

#include <QTreeWidget>

class ampsTreeWidgetBase : public QTreeWidget
{
 Q_OBJECT

  public:
    ampsTreeWidgetBase();
    ampsTreeWidgetBase(const QWidget *parent);
    virtual ~ampsTreeWidgetBase();

    void Init(void);

    //virtual void focusInEvent(void); 

  //public slots:

};


#endif
