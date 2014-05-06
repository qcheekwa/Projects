/*
  MgWidget.h
*/

#ifndef MGWIDGET_HH
#define MGWIDGET_HH

#include <QWidget>

class MgWidget : public QWidget
{
  Q_OBJECT

  public:
    MgWidget(const QWidget *parent = NULL);
    virtual ~MgWidget();

};

#endif
