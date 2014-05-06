/*
  AMP_DockWidgetBase.cpp
*/

#include <QMessageBox>

#include "AMP_DockWidgetBase.h"

AMP_DockWidgetBase::AMP_DockWidgetBase()
{
  AMP_DockWidgetBase(NULL);
}

AMP_DockWidgetBase::AMP_DockWidgetBase(const QWidget *parent) : QDockWidget((QWidget *)parent)
{
  Init();
}

AMP_DockWidgetBase::~AMP_DockWidgetBase()
{

}

void AMP_DockWidgetBase::Init(void)
{

}
/*
void AMP_DockWidgetBase::focusInEvent(void)
{
    QMessageBox mb1(this);
    mb1.setText("focus event");
    mb1.exec();
}
*/