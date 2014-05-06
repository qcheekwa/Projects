#include <QtWidgets/QApplication>

//#include "../ampsLib/GUI/ampsViewContainerQtGUI.h"

#include "../ampsLib/Operation/ampsOperationAllQtGUI.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //TestApp w;
    //ampsViewContainerQtGUI w;
    ampsOperationAllQtGUI w;
    //w.Exe();
    w.show();
    //w.hide();
    //w.pos() = QPoint(100, 100);
    w.move(100, 100);
    //DropSiteWindow m_TestDragDropWin;// = new DropSiteWindow;
    //m_TestDragDropWin.show();
    return a.exec();
}
