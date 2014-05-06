#ifndef TESTDRAGDROPQT4_H
#define TESTDRAGDROPQT4_H

#include <QtGui/QMainWindow>
#include "ui_testdragdropqt4.h"

class TestDragDropQt4 : public QMainWindow
{
    Q_OBJECT

public:
    TestDragDropQt4(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~TestDragDropQt4();

private:
    Ui::TestDragDropQt4Class ui;
};

#endif // TESTDRAGDROPQT4_H
