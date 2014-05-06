/*
  ampsTreeWidgetBase.cpp
*/

#include <QMessageBox>

#include "ampsTreeWidgetBase.h"

ampsTreeWidgetBase::ampsTreeWidgetBase()
{
  ampsTreeWidgetBase(NULL);
}

ampsTreeWidgetBase::ampsTreeWidgetBase(const QWidget *parent) : QTreeWidget((QWidget *)parent)
{
  Init();
}

ampsTreeWidgetBase::~ampsTreeWidgetBase()
{

}

void ampsTreeWidgetBase::Init(void)
{

}