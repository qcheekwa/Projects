/*
  AMP_TreeWidgetBase.h
*/

#ifndef AMP_TREEWIDGETBASE_HH
#define AMP_TREEWIDGETBASE_HH

#include <QTreeWidget>

class AMP_TreeWidgetBase : public QTreeWidget
{
 Q_OBJECT

  public:
    AMP_TreeWidgetBase();
    AMP_TreeWidgetBase(const QWidget *parent);
    virtual ~AMP_TreeWidgetBase();

    void Init(void);

    //virtual void focusInEvent(void); 

  //public slots:

};


#endif
