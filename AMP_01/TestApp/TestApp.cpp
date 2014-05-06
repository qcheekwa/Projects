#include "TestApp.h"

TestApp::TestApp(QWidget *parent, Qt::WFlags flags)
    : QMainWindow(parent, flags)
{
    m_UI.setupUi(this);

  CreateDockWidgetAll();

  Init();
}

TestApp::~TestApp()
{

}

void TestApp::CreateDockWidgetAll(void)
{
  m_DockWidget1 = new AMP_DockWidgetBase(this);
  m_DockWidget2 = new AMP_DockWidgetBase(this);
  m_DockWidget3 = new AMP_DockWidgetBase(this);

  m_DockWidget1->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  m_DockWidget1->setFeatures(QDockWidget::AllDockWidgetFeatures);
  m_DockWidget1->setWindowTitle("win1");


  m_DockWidget2->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  m_DockWidget2->setFeatures(QDockWidget::AllDockWidgetFeatures);
  m_DockWidget2->setWindowTitle("win2");


  m_DockWidget3->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
  m_DockWidget3->setFeatures(QDockWidget::AllDockWidgetFeatures);
  m_DockWidget3->setWindowTitle("win3");


  m_DockMainWidget1 = new AMP_DockWidgetBase(this);
  m_DockMainWidget1->setWindowTitle("DockMainWin1");
  m_DockMainWidget2 = new AMP_DockWidgetBase(this);
  m_DockMainWidget2->setWindowTitle("DockMainWin2");

  m_DockMainWidget1->setAllowedAreas(Qt::AllDockWidgetAreas);
  m_DockMainWidget2->setAllowedAreas(Qt::AllDockWidgetAreas);
}

void TestApp::Init(void)
{
  m_AMP_mainwin = new AMP_MainWinBase(this);
  ((QMainWindow *)m_AMP_mainwin)->setWindowTitle("AMP_WinMain");

  connect(m_UI.m_pushButton1, SIGNAL(clicked()), this, SLOT(ShowDockWin1()) );
  connect(m_UI.m_pushButton2, SIGNAL(clicked()), this, SLOT(ShowDockWin2()) );
  connect(m_UI.m_pushButton3, SIGNAL(clicked()), this, SLOT(ShowDockWin3()) );

  m_AMP_mainwin->addDockWidget(Qt::RightDockWidgetArea, m_DockWidget1);//, Qt::Horizontal);
  m_AMP_mainwin->addDockWidget(Qt::LeftDockWidgetArea, m_DockWidget2); //, Qt::Vertical);
  m_AMP_mainwin->addDockWidget(Qt::RightDockWidgetArea, m_DockWidget3);

  //m_AMP_mainwin->setDockOptions(QMainWindow::AnimatedDocks | QMainWindow::AllowNestedDocks | QMainWindow::AllowTabbedDocks);
  m_AMP_mainwin->setDockOptions(QMainWindow::AllowNestedDocks | QMainWindow::AllowTabbedDocks);

  m_AMP_mainwin->setTabPosition(Qt::AllDockWidgetAreas, QTabWidget::North);

  //m_AMP_mainwin->tabifyDockWidget(m_DockWidget1, m_DockWidget2);
  //m_AMP_mainwin->tabifyDockWidget(m_DockWidget2, m_DockWidget3);
m_DockWidget1->raise();
  //m_DockWidget1->setFocus();
  //m_AMP_mainwin->setDockNestingEnabled(true);
  //m_AMP_mainwin->setDocumentMode(true);
  m_AMP_mainwin->show();
  //m_AMP_mainwin->pos() = QPoint(100, 100);  m_AMP_mainwin->update();
  m_DockMainWidget1->setWidget(m_AMP_mainwin);

/*
  m_TabWidget1 = new QTabWidget;
  m_TabWidget1->setWindowTitle("tabwin01");
  m_TabWidget1->show();

  m_TabWidget2 = new QTabWidget;
  m_TabWidget2->setWindowTitle("tabwin02");
  m_TabWidget2->show();
  m_TabWidget2->addTab(m_DockWidget2, "tabdockwin022");
  m_TabWidget2->addTab(m_DockWidget3, "tabdockwin023");
*/

  m_AMP_mainwin2 = new AMP_MainWinBase(this);
  ((QMainWindow *)m_AMP_mainwin2)->setWindowTitle("AMP_WinMain2");
  m_AMP_mainwin2->addDockWidget(Qt::RightDockWidgetArea, m_DockMainWidget1);
  m_AMP_mainwin2->addDockWidget(Qt::RightDockWidgetArea, m_DockMainWidget2);

  m_AMP_mainwin2->setDockOptions(QMainWindow::AnimatedDocks | QMainWindow::AllowNestedDocks |
                                  QMainWindow::AllowTabbedDocks);

  m_AMP_mainwin2->setTabPosition(Qt::AllDockWidgetAreas,QTabWidget::North);

  m_AMP_mainwin2->resize(640, 480);
  m_AMP_mainwin2->show();

  m_AMP_mainwin2->pos() = QPoint(600, 100);    m_AMP_mainwin2->update();
  this->move(600, 0);  update();

  update();
/*
  m_AMP_mainwin2->addDockWidget(Qt::RightDockWidgetArea, m_DockWidget1);
  m_AMP_mainwin2->show();
*/
}

void TestApp::ShowDockWin1(void)
{
  m_DockWidget1->show();
}

void TestApp::ShowDockWin2(void)
{
  m_DockWidget2->show();
  m_DockWidget3->show();
}

void TestApp::ShowDockWin3(void)
{
QWidget *tbwidget = m_DockWidget1->titleBarWidget();

  m_AMP_mainwin->tabifyDockWidget(m_DockWidget2, m_DockWidget3);
/*
QList<QAction *> laction;
laction = QWidget::actions();
int a =10;
*/
}
