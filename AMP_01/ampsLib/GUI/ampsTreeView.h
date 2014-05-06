/*
  ampsTreeView.h
*/

#ifndef AMPSTREEVIEW_HH
#define AMPSTREEVIEW_HH

#include <QWidget>
#include <QTreeView>
#include <QDrag>

class ampsTreeView : public QTreeView
{
  Q_OBJECT

  public:
    ampsTreeView();
    virtual ~ampsTreeView(){   };

  signals:
    //void DragEnterSignal(QDragEnterEvent *event);
    void DropSignal(QDropEvent *mevent);

  protected:
    virtual void dragEnterEvent(QDragEnterEvent *d_event);
    virtual void dropEvent(QDropEvent *d_event);
    virtual void dragMoveEvent(QDragMoveEvent *d_event);
};

#endif
