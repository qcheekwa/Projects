//#include "TestApp.h"
#include <QtGui/QApplication>

#include "../AMP_01_Lib/GUI/AMP_ViewContainerQtGUI.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //TestApp w;
    AMP_ViewContainerQtGUI w;
    w.Exe();
    //w.hide();
    //w.pos() = QPoint(100, 100);  
    return a.exec();
}
