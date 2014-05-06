/********************************************************************************
** Form generated from reading UI file 'AMP_WinProjView.ui'
**
** Created: Wed 26. Jun 15:11:47 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMP_WINPROJVIEW_H
#define UI_AMP_WINPROJVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_AMP_WinProjView
{
public:
    QScrollArea *m_scrollAreaProjViewWin;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Form_AMP_WinProjView)
    {
        if (Form_AMP_WinProjView->objectName().isEmpty())
            Form_AMP_WinProjView->setObjectName(QString::fromUtf8("Form_AMP_WinProjView"));
        Form_AMP_WinProjView->resize(984, 606);
        m_scrollAreaProjViewWin = new QScrollArea(Form_AMP_WinProjView);
        m_scrollAreaProjViewWin->setObjectName(QString::fromUtf8("m_scrollAreaProjViewWin"));
        m_scrollAreaProjViewWin->setGeometry(QRect(20, 20, 871, 501));
        m_scrollAreaProjViewWin->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 869, 499));
        m_scrollAreaProjViewWin->setWidget(scrollAreaWidgetContents);

        retranslateUi(Form_AMP_WinProjView);

        QMetaObject::connectSlotsByName(Form_AMP_WinProjView);
    } // setupUi

    void retranslateUi(QWidget *Form_AMP_WinProjView)
    {
        Form_AMP_WinProjView->setWindowTitle(QApplication::translate("Form_AMP_WinProjView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form_AMP_WinProjView: public Ui_Form_AMP_WinProjView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMP_WINPROJVIEW_H
