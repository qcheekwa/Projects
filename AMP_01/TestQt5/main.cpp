#include "testqt5.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestQt5 w;
    w.show();
    return a.exec();
}
