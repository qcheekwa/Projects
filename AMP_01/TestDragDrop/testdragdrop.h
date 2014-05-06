#ifndef TESTDRAGDROP_H
#define TESTDRAGDROP_H

#include <QtWidgets/QMainWindow>
#include "ui_testdragdrop.h"

class TestDragDrop : public QMainWindow
{
    Q_OBJECT

public:
    TestDragDrop(QWidget *parent = 0);
    ~TestDragDrop();

private:
    Ui::TestDragDropClass ui;
};

#endif // TESTDRAGDROP_H
