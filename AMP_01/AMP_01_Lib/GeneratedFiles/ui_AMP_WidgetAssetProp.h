/********************************************************************************
** Form generated from reading UI file 'AMP_WidgetAssetProp.ui'
**
** Created: Wed 26. Jun 15:11:47 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMP_WIDGETASSETPROP_H
#define UI_AMP_WIDGETASSETPROP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_AMP_WidgetAssetProp
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Form_AMP_WidgetAssetProp)
    {
        if (Form_AMP_WidgetAssetProp->objectName().isEmpty())
            Form_AMP_WidgetAssetProp->setObjectName(QString::fromUtf8("Form_AMP_WidgetAssetProp"));
        Form_AMP_WidgetAssetProp->resize(400, 300);
        pushButton = new QPushButton(Form_AMP_WidgetAssetProp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 90, 75, 23));

        retranslateUi(Form_AMP_WidgetAssetProp);

        QMetaObject::connectSlotsByName(Form_AMP_WidgetAssetProp);
    } // setupUi

    void retranslateUi(QWidget *Form_AMP_WidgetAssetProp)
    {
        Form_AMP_WidgetAssetProp->setWindowTitle(QApplication::translate("Form_AMP_WidgetAssetProp", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Form_AMP_WidgetAssetProp", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form_AMP_WidgetAssetProp: public Ui_Form_AMP_WidgetAssetProp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMP_WIDGETASSETPROP_H
