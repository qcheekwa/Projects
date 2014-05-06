/********************************************************************************
** Form generated from reading UI file 'ampsWidgetFolderView.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSWIDGETFOLDERVIEW_H
#define UI_AMPSWIDGETFOLDERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_ampsWidgetFolderView
{
public:
    QScrollArea *m_scrollAreaTreeView;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *m_scrollAreaItemView;
    QWidget *scrollAreaWidgetContents_2;

    void setupUi(QWidget *Form_ampsWidgetFolderView)
    {
        if (Form_ampsWidgetFolderView->objectName().isEmpty())
            Form_ampsWidgetFolderView->setObjectName(QStringLiteral("Form_ampsWidgetFolderView"));
        Form_ampsWidgetFolderView->resize(902, 415);
        m_scrollAreaTreeView = new QScrollArea(Form_ampsWidgetFolderView);
        m_scrollAreaTreeView->setObjectName(QStringLiteral("m_scrollAreaTreeView"));
        m_scrollAreaTreeView->setGeometry(QRect(10, 10, 421, 371));
        m_scrollAreaTreeView->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 419, 369));
        m_scrollAreaTreeView->setWidget(scrollAreaWidgetContents);
        m_scrollAreaItemView = new QScrollArea(Form_ampsWidgetFolderView);
        m_scrollAreaItemView->setObjectName(QStringLiteral("m_scrollAreaItemView"));
        m_scrollAreaItemView->setGeometry(QRect(440, 10, 441, 371));
        m_scrollAreaItemView->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 439, 369));
        m_scrollAreaItemView->setWidget(scrollAreaWidgetContents_2);

        retranslateUi(Form_ampsWidgetFolderView);

        QMetaObject::connectSlotsByName(Form_ampsWidgetFolderView);
    } // setupUi

    void retranslateUi(QWidget *Form_ampsWidgetFolderView)
    {
        Form_ampsWidgetFolderView->setWindowTitle(QApplication::translate("Form_ampsWidgetFolderView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_ampsWidgetFolderView: public Ui_Form_ampsWidgetFolderView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSWIDGETFOLDERVIEW_H
