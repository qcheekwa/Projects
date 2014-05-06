/*
  AMP_TreeWidgetBase.cpp
*/

#include <QMessageBox>

#include "AMP_TreeWidgetBase.h"

AMP_TreeWidgetBase::AMP_TreeWidgetBase()
{
  AMP_TreeWidgetBase(NULL);
}

AMP_TreeWidgetBase::AMP_TreeWidgetBase(const QWidget *parent) : QTreeWidget((QWidget *)parent)
{
  Init();
}

AMP_TreeWidgetBase::~AMP_TreeWidgetBase()
{

}

void AMP_TreeWidgetBase::Init(void)
{

}