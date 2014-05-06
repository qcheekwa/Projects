/*
  ampsTreeView.cpp
*/

#include <QDragEnterEvent>
#include <QDropEvent>
#include <QDragMoveEvent>
#include "ampsTreeView.h"

ampsTreeView::ampsTreeView() : QTreeView()
{
  setAcceptDrops(true);
  setDropIndicatorShown(true);
  setDragDropMode(QAbstractItemView::DragDrop);
}


void ampsTreeView::dragEnterEvent ( QDragEnterEvent * d_event)
{
  d_event->acceptProposedAction();
//printf("\ndrag enter\n");

  //emit DragEnterSignal(event);
}

void ampsTreeView::dropEvent(QDropEvent *d_event)
{
//printf("\ndrop event\n");
  d_event->acceptProposedAction();
  emit DropSignal(d_event);
}

void ampsTreeView::dragMoveEvent(QDragMoveEvent *d_event)
{
  d_event->acceptProposedAction();
  //printf("\ndrag move event\n");
}
