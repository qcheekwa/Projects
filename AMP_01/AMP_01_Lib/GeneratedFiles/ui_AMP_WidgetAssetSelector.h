/********************************************************************************
** Form generated from reading UI file 'AMP_WidgetAssetSelector.ui'
**
** Created: Wed 26. Jun 15:11:47 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMP_WIDGETASSETSELECTOR_H
#define UI_AMP_WIDGETASSETSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_AMP_WidgetAssetSelector
{
public:

    void setupUi(QWidget *Form_AMP_WidgetAssetSelector)
    {
        if (Form_AMP_WidgetAssetSelector->objectName().isEmpty())
            Form_AMP_WidgetAssetSelector->setObjectName(QString::fromUtf8("Form_AMP_WidgetAssetSelector"));
        Form_AMP_WidgetAssetSelector->resize(400, 300);

        retranslateUi(Form_AMP_WidgetAssetSelector);

        QMetaObject::connectSlotsByName(Form_AMP_WidgetAssetSelector);
    } // setupUi

    void retranslateUi(QWidget *Form_AMP_WidgetAssetSelector)
    {
        Form_AMP_WidgetAssetSelector->setWindowTitle(QApplication::translate("Form_AMP_WidgetAssetSelector", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form_AMP_WidgetAssetSelector: public Ui_Form_AMP_WidgetAssetSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMP_WIDGETASSETSELECTOR_H