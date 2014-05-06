/********************************************************************************
** Form generated from reading UI file 'ampsWidgetOperationAllQtGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSWIDGETOPERATIONALLQTGUI_H
#define UI_AMPSWIDGETOPERATIONALLQTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_ampsOperationAllQtGUI
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Form_ampsOperationAllQtGUI)
    {
        if (Form_ampsOperationAllQtGUI->objectName().isEmpty())
            Form_ampsOperationAllQtGUI->setObjectName(QStringLiteral("Form_ampsOperationAllQtGUI"));
        Form_ampsOperationAllQtGUI->resize(653, 535);
        pushButton = new QPushButton(Form_ampsOperationAllQtGUI);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 40, 181, 51));

        retranslateUi(Form_ampsOperationAllQtGUI);

        QMetaObject::connectSlotsByName(Form_ampsOperationAllQtGUI);
    } // setupUi

    void retranslateUi(QWidget *Form_ampsOperationAllQtGUI)
    {
        Form_ampsOperationAllQtGUI->setWindowTitle(QApplication::translate("Form_ampsOperationAllQtGUI", "Form", 0));
        pushButton->setText(QApplication::translate("Form_ampsOperationAllQtGUI", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_ampsOperationAllQtGUI: public Ui_Form_ampsOperationAllQtGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSWIDGETOPERATIONALLQTGUI_H
