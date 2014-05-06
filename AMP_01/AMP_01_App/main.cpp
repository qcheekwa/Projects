#include "AMP_01_App.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AMP_01_App w;
    w.show();
    return a.exec();
}
