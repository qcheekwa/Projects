/********************************************************************************
** Form generated from reading UI file 'AMP_WidgetProjInfo.ui'
**
** Created: Wed 26. Jun 15:11:47 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMP_WIDGETPROJINFO_H
#define UI_AMP_WIDGETPROJINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_AMP_WidgetProjInfo
{
public:
    QLabel *label;
    QLineEdit *m_lineEditProjName;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QDateTimeEdit *dateTimeEdit_2;

    void setupUi(QWidget *Form_AMP_WidgetProjInfo)
    {
        if (Form_AMP_WidgetProjInfo->objectName().isEmpty())
            Form_AMP_WidgetProjInfo->setObjectName(QString::fromUtf8("Form_AMP_WidgetProjInfo"));
        Form_AMP_WidgetProjInfo->resize(754, 328);
        label = new QLabel(Form_AMP_WidgetProjInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 71, 16));
        m_lineEditProjName = new QLineEdit(Form_AMP_WidgetProjInfo);
        m_lineEditProjName->setObjectName(QString::fromUtf8("m_lineEditProjName"));
        m_lineEditProjName->setGeometry(QRect(103, 36, 181, 20));
        label_2 = new QLabel(Form_AMP_WidgetProjInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 71, 16));
        label_3 = new QLabel(Form_AMP_WidgetProjInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 80, 71, 16));
        comboBox = new QComboBox(Form_AMP_WidgetProjInfo);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 80, 121, 22));
        comboBox_2 = new QComboBox(Form_AMP_WidgetProjInfo);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(370, 80, 151, 22));
        label_4 = new QLabel(Form_AMP_WidgetProjInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 130, 81, 16));
        label_5 = new QLabel(Form_AMP_WidgetProjInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 130, 81, 16));
        label_6 = new QLabel(Form_AMP_WidgetProjInfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(470, 130, 101, 16));
        lineEdit_4 = new QLineEdit(Form_AMP_WidgetProjInfo);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(570, 130, 113, 20));
        dateTimeEdit = new QDateTimeEdit(Form_AMP_WidgetProjInfo);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(100, 130, 141, 22));
        label_7 = new QLabel(Form_AMP_WidgetProjInfo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(580, 80, 46, 13));
        comboBox_3 = new QComboBox(Form_AMP_WidgetProjInfo);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(630, 80, 69, 22));
        dateTimeEdit_2 = new QDateTimeEdit(Form_AMP_WidgetProjInfo);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(320, 130, 141, 22));

        retranslateUi(Form_AMP_WidgetProjInfo);

        QMetaObject::connectSlotsByName(Form_AMP_WidgetProjInfo);
    } // setupUi

    void retranslateUi(QWidget *Form_AMP_WidgetProjInfo)
    {
        Form_AMP_WidgetProjInfo->setWindowTitle(QApplication::translate("Form_AMP_WidgetProjInfo", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form_AMP_WidgetProjInfo", "Project Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Form_AMP_WidgetProjInfo", "Project Type", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Form_AMP_WidgetProjInfo", "Project Status", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Form_AMP_WidgetProjInfo", "Estimated Start", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Form_AMP_WidgetProjInfo", "Estimated End", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Form_AMP_WidgetProjInfo", "Estimated Duration", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Form_AMP_WidgetProjInfo", "Client", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form_AMP_WidgetProjInfo: public Ui_Form_AMP_WidgetProjInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMP_WIDGETPROJINFO_H
