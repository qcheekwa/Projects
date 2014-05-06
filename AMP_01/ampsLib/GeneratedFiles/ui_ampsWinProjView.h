/********************************************************************************
** Form generated from reading UI file 'ampsWinProjView.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSWINPROJVIEW_H
#define UI_AMPSWINPROJVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_ampsWinProjView
{
public:
    QScrollArea *m_scrollAreaProjViewWin;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Form_ampsWinProjView)
    {
        if (Form_ampsWinProjView->objectName().isEmpty())
            Form_ampsWinProjView->setObjectName(QStringLiteral("Form_ampsWinProjView"));
        Form_ampsWinProjView->resize(984, 606);
        m_scrollAreaProjViewWin = new QScrollArea(Form_ampsWinProjView);
        m_scrollAreaProjViewWin->setObjectName(QStringLiteral("m_scrollAreaProjViewWin"));
        m_scrollAreaProjViewWin->setGeometry(QRect(20, 20, 871, 501));
        m_scrollAreaProjViewWin->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 869, 499));
        m_scrollAreaProjViewWin->setWidget(scrollAreaWidgetContents);

        retranslateUi(Form_ampsWinProjView);

        QMetaObject::connectSlotsByName(Form_ampsWinProjView);
    } // setupUi

    void retranslateUi(QWidget *Form_ampsWinProjView)
    {
        Form_ampsWinProjView->setWindowTitle(QApplication::translate("Form_ampsWinProjView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_ampsWinProjView: public Ui_Form_ampsWinProjView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSWINPROJVIEW_H
