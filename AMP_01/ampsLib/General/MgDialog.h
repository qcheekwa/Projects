/*
  MgDialog.h
*/

#ifndef MGDIALOG_HH
#define MGDIALOG_HH

#include <QDialog>

class MgDialog : public QDialog
{
  Q_OBJECT

  public:
    MgDialog(const QWidget *parent = NULL);
    virtual ~MgDialog();

};


#endif
