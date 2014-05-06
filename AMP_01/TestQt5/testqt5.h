#ifndef TESTQT5_H
#define TESTQT5_H

#include <QtWidgets/QMainWindow>
#include "ui_testqt5.h"

class TestQt5 : public QMainWindow
{
    Q_OBJECT

public:
    TestQt5(QWidget *parent = 0);
    ~TestQt5();

private:
    Ui::TestQt5Class ui;
};

#endif // TESTQT5_H
