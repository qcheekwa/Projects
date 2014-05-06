/*
  ampsDockWidgetBase.cpp
*/

#include <QMessageBox>

#include "ampsDockWidgetBase.h"

ampsDockWidgetBase::ampsDockWidgetBase()
{
  ampsDockWidgetBase(NULL);
}

ampsDockWidgetBase::ampsDockWidgetBase(const QWidget *parent) : QDockWidget((QWidget *)parent)
{
  Init();
}

ampsDockWidgetBase::~ampsDockWidgetBase()
{

}

void ampsDockWidgetBase::Init(void)
{

}
/*
void ampsDockWidgetBase::focusInEvent(void)
{
    QMessageBox mb1(this);
    mb1.setText("focus event");
    mb1.exec();
}
*/