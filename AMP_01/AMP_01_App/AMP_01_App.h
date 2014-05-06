#ifndef AMP_01_APP_H
#define AMP_01_APP_H

#include <QtGui/QMainWindow>
#include "ui_AMP_01_App.h"

class AMP_01_App : public QMainWindow
{
    Q_OBJECT

public:
    AMP_01_App(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~AMP_01_App();

private:
    Ui::AMP_01_AppClass ui;
};

#endif // AMP_01_APP_H
