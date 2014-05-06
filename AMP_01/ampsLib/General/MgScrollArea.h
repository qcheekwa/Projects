/*
  MgScrollArea.h
*/

#ifndef MGSCROLLAREA_HH
#define MGSCROLLAREA_HH

#include <QScrollArea>

class MgScrollArea : public QScrollArea
{
  Q_OBJECT

  public:
    MgScrollArea(const QWidget *parent = NULL);
    virtual ~MgScrollArea();

};


#endif
