/********************************************************************************
** Form generated from reading UI file 'TestApp.ui'
**
** Created: Wed 26. Jun 17:11:15 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTAPP_H
#define UI_TESTAPP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestAppClass
{
public:
    QWidget *centralWidget;
    QPushButton *m_pushButton1;
    QPushButton *m_pushButton2;
    QPushButton *m_pushButton3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestAppClass)
    {
        if (TestAppClass->objectName().isEmpty())
            TestAppClass->setObjectName(QString::fromUtf8("TestAppClass"));
        TestAppClass->resize(600, 400);
        centralWidget = new QWidget(TestAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        m_pushButton1 = new QPushButton(centralWidget);
        m_pushButton1->setObjectName(QString::fromUtf8("m_pushButton1"));
        m_pushButton1->setGeometry(QRect(80, 10, 75, 23));
        m_pushButton2 = new QPushButton(centralWidget);
        m_pushButton2->setObjectName(QString::fromUtf8("m_pushButton2"));
        m_pushButton2->setGeometry(QRect(180, 10, 75, 23));
        m_pushButton3 = new QPushButton(centralWidget);
        m_pushButton3->setObjectName(QString::fromUtf8("m_pushButton3"));
        m_pushButton3->setGeometry(QRect(290, 10, 75, 23));
        TestAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TestAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TestAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TestAppClass->setStatusBar(statusBar);

        retranslateUi(TestAppClass);

        QMetaObject::connectSlotsByName(TestAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestAppClass)
    {
        TestAppClass->setWindowTitle(QApplication::translate("TestAppClass", "TestApp", 0, QApplication::UnicodeUTF8));
        m_pushButton1->setText(QApplication::translate("TestAppClass", "PushButton1", 0, QApplication::UnicodeUTF8));
        m_pushButton2->setText(QApplication::translate("TestAppClass", "PushButton2", 0, QApplication::UnicodeUTF8));
        m_pushButton3->setText(QApplication::translate("TestAppClass", "PushButton3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestAppClass: public Ui_TestAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTAPP_H
