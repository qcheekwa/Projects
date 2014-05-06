//#include "testdragdropqt4.h"
#include <QApplication>

#include "dropsitewindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DropSiteWindow w;
    w.show();
    return a.exec();
}
