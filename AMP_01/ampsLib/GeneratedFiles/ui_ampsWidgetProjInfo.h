/********************************************************************************
** Form generated from reading UI file 'ampsWidgetProjInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSWIDGETPROJINFO_H
#define UI_AMPSWIDGETPROJINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_ampsWidgetProjInfo
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
    QLabel *m_label_6;
    QLineEdit *m_lineEditEstimatedDuration;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QDateTimeEdit *dateTimeEdit_2;

    void setupUi(QWidget *Form_ampsWidgetProjInfo)
    {
        if (Form_ampsWidgetProjInfo->objectName().isEmpty())
            Form_ampsWidgetProjInfo->setObjectName(QStringLiteral("Form_ampsWidgetProjInfo"));
        Form_ampsWidgetProjInfo->resize(754, 328);
        label = new QLabel(Form_ampsWidgetProjInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 71, 16));
        m_lineEditProjName = new QLineEdit(Form_ampsWidgetProjInfo);
        m_lineEditProjName->setObjectName(QStringLiteral("m_lineEditProjName"));
        m_lineEditProjName->setGeometry(QRect(103, 36, 181, 20));
        label_2 = new QLabel(Form_ampsWidgetProjInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 71, 16));
        label_3 = new QLabel(Form_ampsWidgetProjInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 80, 71, 16));
        comboBox = new QComboBox(Form_ampsWidgetProjInfo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 80, 121, 22));
        comboBox_2 = new QComboBox(Form_ampsWidgetProjInfo);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(370, 80, 151, 22));
        label_4 = new QLabel(Form_ampsWidgetProjInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 130, 81, 16));
        label_5 = new QLabel(Form_ampsWidgetProjInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 130, 81, 16));
        m_label_6 = new QLabel(Form_ampsWidgetProjInfo);
        m_label_6->setObjectName(QStringLiteral("m_label_6"));
        m_label_6->setGeometry(QRect(480, 130, 101, 16));
        m_lineEditEstimatedDuration = new QLineEdit(Form_ampsWidgetProjInfo);
        m_lineEditEstimatedDuration->setObjectName(QStringLiteral("m_lineEditEstimatedDuration"));
        m_lineEditEstimatedDuration->setGeometry(QRect(580, 130, 113, 20));
        dateTimeEdit = new QDateTimeEdit(Form_ampsWidgetProjInfo);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(100, 130, 141, 22));
        label_7 = new QLabel(Form_ampsWidgetProjInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(580, 80, 46, 13));
        comboBox_3 = new QComboBox(Form_ampsWidgetProjInfo);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(630, 80, 69, 22));
        dateTimeEdit_2 = new QDateTimeEdit(Form_ampsWidgetProjInfo);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(320, 130, 141, 22));

        retranslateUi(Form_ampsWidgetProjInfo);

        QMetaObject::connectSlotsByName(Form_ampsWidgetProjInfo);
    } // setupUi

    void retranslateUi(QWidget *Form_ampsWidgetProjInfo)
    {
        Form_ampsWidgetProjInfo->setWindowTitle(QApplication::translate("Form_ampsWidgetProjInfo", "Form", 0));
        label->setText(QApplication::translate("Form_ampsWidgetProjInfo", "Project Name", 0));
        label_2->setText(QApplication::translate("Form_ampsWidgetProjInfo", "Project Type", 0));
        label_3->setText(QApplication::translate("Form_ampsWidgetProjInfo", "Project Status", 0));
        label_4->setText(QApplication::translate("Form_ampsWidgetProjInfo", "Estimated Start", 0));
        label_5->setText(QApplication::translate("Form_ampsWidgetProjInfo", "Estimated End", 0));
        m_label_6->setText(QApplication::translate("Form_ampsWidgetProjInfo", "Estimated Duration", 0));
        label_7->setText(QApplication::translate("Form_ampsWidgetProjInfo", "Client", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_ampsWidgetProjInfo: public Ui_Form_ampsWidgetProjInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSWIDGETPROJINFO_H
