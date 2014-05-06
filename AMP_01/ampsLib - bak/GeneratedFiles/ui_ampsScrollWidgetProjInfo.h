/********************************************************************************
** Form generated from reading UI file 'ampsScrollWidgetProjInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSSCROLLWIDGETPROJINFO_H
#define UI_AMPSSCROLLWIDGETPROJINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_ampsDockWidgetProjInfo
{
public:
    QScrollArea *m_scrollAreaWidget;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Form_ampsDockWidgetProjInfo)
    {
        if (Form_ampsDockWidgetProjInfo->objectName().isEmpty())
            Form_ampsDockWidgetProjInfo->setObjectName(QStringLiteral("Form_ampsDockWidgetProjInfo"));
        Form_ampsDockWidgetProjInfo->resize(607, 433);
        m_scrollAreaWidget = new QScrollArea(Form_ampsDockWidgetProjInfo);
        m_scrollAreaWidget->setObjectName(QStringLiteral("m_scrollAreaWidget"));
        m_scrollAreaWidget->setGeometry(QRect(10, 10, 591, 421));
        m_scrollAreaWidget->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 589, 419));
        m_scrollAreaWidget->setWidget(scrollAreaWidgetContents);

        retranslateUi(Form_ampsDockWidgetProjInfo);

        QMetaObject::connectSlotsByName(Form_ampsDockWidgetProjInfo);
    } // setupUi

    void retranslateUi(QWidget *Form_ampsDockWidgetProjInfo)
    {
        Form_ampsDockWidgetProjInfo->setWindowTitle(QApplication::translate("Form_ampsDockWidgetProjInfo", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_ampsDockWidgetProjInfo: public Ui_Form_ampsDockWidgetProjInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSSCROLLWIDGETPROJINFO_H
