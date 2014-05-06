#ifndef TESTAPP_H
#define TESTAPP_H

#include <QtGui/QMainWindow>
#include <QTabWidget>

#include "ui_TestApp.h"

#include "../AMP_01_Lib/GUI/AMP_MainWinBase.h"
#include "../AMP_01_Lib/GUI/AMP_DockWidgetBase.h"

class TestApp : public QMainWindow
{
    Q_OBJECT

public:
    TestApp(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~TestApp();

    void CreateDockWidgetAll(void);
    void Init(void);


  public slots:
    void ShowDockWin1(void);
    void ShowDockWin2(void);
    void ShowDockWin3(void);

private:
    Ui::TestAppClass m_UI;

    QTabWidget *m_TabWidget1;
    QTabWidget *m_TabWidget2;
    AMP_MainWinBase *m_AMP_mainwin;
    AMP_MainWinBase *m_AMP_mainwin2;
    AMP_DockWidgetBase *m_DockWidget1;
    AMP_DockWidgetBase *m_DockWidget2;
    AMP_DockWidgetBase *m_DockWidget3;

    AMP_DockWidgetBase *m_DockMainWidget1;
    AMP_DockWidgetBase *m_DockMainWidget2;
};

#endif // TESTAPP_H
