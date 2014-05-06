//#include "TestApp.h"
#include <QtWidgets/QApplication>

#include "../ampsLib/GUI/ampsViewContainerQtGUI.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //TestApp w;
    ampsViewContainerQtGUI w;
    w.Exe();
    //w.hide();
    //w.pos() = QPoint(100, 100);
    w.move(100, 100);
    return a.exec();
}
