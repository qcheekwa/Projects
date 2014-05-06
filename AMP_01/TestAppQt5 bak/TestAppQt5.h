#ifndef TESTAPPQT5_H
#define TESTAPPQT5_H

#include <QtWidgets/QMainWindow>
#include "ui_TestAppQt5.h"

class TestAppQt5 : public QMainWindow
{
    Q_OBJECT

public:
    TestAppQt5(QWidget *parent = 0);
    ~TestAppQt5();

private:
    Ui::TestAppQt5Class ui;
};

#endif // TESTAPPQT5_H
