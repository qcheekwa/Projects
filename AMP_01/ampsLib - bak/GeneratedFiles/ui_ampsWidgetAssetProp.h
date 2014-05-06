/********************************************************************************
** Form generated from reading UI file 'ampsWidgetAssetProp.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSWIDGETASSETPROP_H
#define UI_AMPSWIDGETASSETPROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_ampsWidgetAssetProp
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Form_ampsWidgetAssetProp)
    {
        if (Form_ampsWidgetAssetProp->objectName().isEmpty())
            Form_ampsWidgetAssetProp->setObjectName(QStringLiteral("Form_ampsWidgetAssetProp"));
        Form_ampsWidgetAssetProp->resize(400, 300);
        pushButton = new QPushButton(Form_ampsWidgetAssetProp);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 90, 75, 23));

        retranslateUi(Form_ampsWidgetAssetProp);

        QMetaObject::connectSlotsByName(Form_ampsWidgetAssetProp);
    } // setupUi

    void retranslateUi(QWidget *Form_ampsWidgetAssetProp)
    {
        Form_ampsWidgetAssetProp->setWindowTitle(QApplication::translate("Form_ampsWidgetAssetProp", "Form", 0));
        pushButton->setText(QApplication::translate("Form_ampsWidgetAssetProp", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_ampsWidgetAssetProp: public Ui_Form_ampsWidgetAssetProp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSWIDGETASSETPROP_H
