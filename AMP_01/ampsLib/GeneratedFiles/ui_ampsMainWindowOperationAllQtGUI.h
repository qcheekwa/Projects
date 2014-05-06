/********************************************************************************
** Form generated from reading UI file 'ampsMainWindowOperationAllQtGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSMAINWINDOWOPERATIONALLQTGUI_H
#define UI_AMPSMAINWINDOWOPERATIONALLQTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_ampsOperationAllQtGUI
{
public:
    QAction *m_actionFileLogin;
    QAction *m_actionFileLogout;
    QAction *m_actionFileSwitchUser;
    QAction *m_actionProjectViewer;
    QAction *m_actionAssetViewer;
    QAction *actionExit;
    QAction *actionMDI_view;
    QAction *actionMDI_display;
    QAction *actionTab_documents;
    QAction *actionFloating_documents;
    QAction *m_actionProjectSelector;
    QAction *m_actionRefreshFolderView;
    QWidget *centralwidget;
    QScrollArea *m_scrollAreaDisp;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuWindow;
    QMenu *menuDisplay_options;
    QMenu *menuHelp;
    QMenu *menuProject;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_ampsOperationAllQtGUI)
    {
        if (MainWindow_ampsOperationAllQtGUI->objectName().isEmpty())
            MainWindow_ampsOperationAllQtGUI->setObjectName(QStringLiteral("MainWindow_ampsOperationAllQtGUI"));
        MainWindow_ampsOperationAllQtGUI->resize(1332, 742);
        m_actionFileLogin = new QAction(MainWindow_ampsOperationAllQtGUI);
        m_actionFileLogin->setObjectName(QStringLiteral("m_actionFileLogin"));
        m_actionFileLogout = new QAction(MainWindow_ampsOperationAllQtGUI);
        m_actionFileLogout->setObjectName(QStringLiteral("m_actionFileLogout"));
        m_actionFileSwitchUser = new QAction(MainWindow_ampsOperationAllQtGUI);
        m_actionFileSwitchUser->setObjectName(QStringLiteral("m_actionFileSwitchUser"));
        m_actionProjectViewer = new QAction(MainWindow_ampsOperationAllQtGUI);
        m_actionProjectViewer->setObjectName(QStringLiteral("m_actionProjectViewer"));
        m_actionAssetViewer = new QAction(MainWindow_ampsOperationAllQtGUI);
        m_actionAssetViewer->setObjectName(QStringLiteral("m_actionAssetViewer"));
        actionExit = new QAction(MainWindow_ampsOperationAllQtGUI);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionMDI_view = new QAction(MainWindow_ampsOperationAllQtGUI);
        actionMDI_view->setObjectName(QStringLiteral("actionMDI_view"));
        actionMDI_display = new QAction(MainWindow_ampsOperationAllQtGUI);
        actionMDI_display->setObjectName(QStringLiteral("actionMDI_display"));
        actionTab_documents = new QAction(MainWindow_ampsOperationAllQtGUI);
        actionTab_documents->setObjectName(QStringLiteral("actionTab_documents"));
        actionFloating_documents = new QAction(MainWindow_ampsOperationAllQtGUI);
        actionFloating_documents->setObjectName(QStringLiteral("actionFloating_documents"));
        m_actionProjectSelector = new QAction(MainWindow_ampsOperationAllQtGUI);
        m_actionProjectSelector->setObjectName(QStringLiteral("m_actionProjectSelector"));
        m_actionRefreshFolderView = new QAction(MainWindow_ampsOperationAllQtGUI);
        m_actionRefreshFolderView->setObjectName(QStringLiteral("m_actionRefreshFolderView"));
        centralwidget = new QWidget(MainWindow_ampsOperationAllQtGUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        m_scrollAreaDisp = new QScrollArea(centralwidget);
        m_scrollAreaDisp->setObjectName(QStringLiteral("m_scrollAreaDisp"));
        m_scrollAreaDisp->setGeometry(QRect(10, 10, 1311, 691));
        m_scrollAreaDisp->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1309, 689));
        m_scrollAreaDisp->setWidget(scrollAreaWidgetContents);
        MainWindow_ampsOperationAllQtGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_ampsOperationAllQtGUI);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1332, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuDisplay_options = new QMenu(menuWindow);
        menuDisplay_options->setObjectName(QStringLiteral("menuDisplay_options"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuProject = new QMenu(menubar);
        menuProject->setObjectName(QStringLiteral("menuProject"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow_ampsOperationAllQtGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_ampsOperationAllQtGUI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_ampsOperationAllQtGUI->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuProject->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(m_actionFileLogin);
        menuFile->addAction(m_actionFileLogout);
        menuFile->addAction(m_actionFileSwitchUser);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addAction(m_actionProjectSelector);
        menuView->addAction(m_actionProjectViewer);
        menuView->addAction(m_actionAssetViewer);
        menuView->addAction(m_actionRefreshFolderView);
        menuWindow->addAction(menuDisplay_options->menuAction());
        menuDisplay_options->addAction(actionMDI_display);
        menuDisplay_options->addAction(actionTab_documents);
        menuDisplay_options->addAction(actionFloating_documents);

        retranslateUi(MainWindow_ampsOperationAllQtGUI);

        QMetaObject::connectSlotsByName(MainWindow_ampsOperationAllQtGUI);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_ampsOperationAllQtGUI)
    {
        MainWindow_ampsOperationAllQtGUI->setWindowTitle(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "MainWindow", 0));
        m_actionFileLogin->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Login", 0));
        m_actionFileLogout->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Logout", 0));
        m_actionFileSwitchUser->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Switch User", 0));
        m_actionProjectViewer->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Project Viewer", 0));
        m_actionAssetViewer->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Asset Viewer", 0));
        actionExit->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Exit", 0));
        actionMDI_view->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "MDI view", 0));
        actionMDI_display->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "MDI display", 0));
        actionTab_documents->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Tab documents", 0));
        actionFloating_documents->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Floating documents", 0));
        m_actionProjectSelector->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Project Selector", 0));
        m_actionRefreshFolderView->setText(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Refresh Folder View", 0));
        menuFile->setTitle(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "File", 0));
        menuView->setTitle(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "View", 0));
        menuWindow->setTitle(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Window", 0));
        menuDisplay_options->setTitle(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Display options", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Help", 0));
        menuProject->setTitle(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Project", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow_ampsOperationAllQtGUI", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_ampsOperationAllQtGUI: public Ui_MainWindow_ampsOperationAllQtGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSMAINWINDOWOPERATIONALLQTGUI_H
