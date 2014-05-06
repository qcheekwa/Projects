/********************************************************************************
** Form generated from reading UI file 'ampsDockWidgetAssetProp.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSDOCKWIDGETASSETPROP_H
#define UI_AMPSDOCKWIDGETASSETPROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ui_ampsDockWidgetAssetProp
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Ui_ampsDockWidgetAssetProp)
    {
        if (Ui_ampsDockWidgetAssetProp->objectName().isEmpty())
            Ui_ampsDockWidgetAssetProp->setObjectName(QStringLiteral("Ui_ampsDockWidgetAssetProp"));
        Ui_ampsDockWidgetAssetProp->resize(400, 300);
        pushButton = new QPushButton(Ui_ampsDockWidgetAssetProp);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 90, 75, 23));

        retranslateUi(Ui_ampsDockWidgetAssetProp);

        QMetaObject::connectSlotsByName(Ui_ampsDockWidgetAssetProp);
    } // setupUi

    void retranslateUi(QWidget *Ui_ampsDockWidgetAssetProp)
    {
        Ui_ampsDockWidgetAssetProp->setWindowTitle(QApplication::translate("Ui_ampsDockWidgetAssetProp", "Form", 0));
        pushButton->setText(QApplication::translate("Ui_ampsDockWidgetAssetProp", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Ui_ampsDockWidgetAssetProp: public Ui_Ui_ampsDockWidgetAssetProp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSDOCKWIDGETASSETPROP_H
