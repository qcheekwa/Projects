/********************************************************************************
** Form generated from reading UI file 'ampsWidgetAutheticateUser.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPSWIDGETAUTHETICATEUSER_H
#define UI_AMPSWIDGETAUTHETICATEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_ampsWidgetAutheticateUser
{
public:
    QLabel *m_labelUserName;
    QLabel *m_labelPassword;
    QLineEdit *m_lineEditUsername;
    QLineEdit *m_lineEditPassword;
    QPushButton *m_pushButtonOK;
    QPushButton *m_pushButtonCancel;
    QLabel *m_labelTitle;

    void setupUi(QWidget *Form_ampsWidgetAutheticateUser)
    {
        if (Form_ampsWidgetAutheticateUser->objectName().isEmpty())
            Form_ampsWidgetAutheticateUser->setObjectName(QStringLiteral("Form_ampsWidgetAutheticateUser"));
        Form_ampsWidgetAutheticateUser->resize(326, 212);
        m_labelUserName = new QLabel(Form_ampsWidgetAutheticateUser);
        m_labelUserName->setObjectName(QStringLiteral("m_labelUserName"));
        m_labelUserName->setGeometry(QRect(25, 60, 51, 20));
        m_labelPassword = new QLabel(Form_ampsWidgetAutheticateUser);
        m_labelPassword->setObjectName(QStringLiteral("m_labelPassword"));
        m_labelPassword->setGeometry(QRect(25, 100, 51, 20));
        m_lineEditUsername = new QLineEdit(Form_ampsWidgetAutheticateUser);
        m_lineEditUsername->setObjectName(QStringLiteral("m_lineEditUsername"));
        m_lineEditUsername->setGeometry(QRect(90, 60, 171, 20));
        m_lineEditPassword = new QLineEdit(Form_ampsWidgetAutheticateUser);
        m_lineEditPassword->setObjectName(QStringLiteral("m_lineEditPassword"));
        m_lineEditPassword->setGeometry(QRect(90, 100, 171, 20));
        m_pushButtonOK = new QPushButton(Form_ampsWidgetAutheticateUser);
        m_pushButtonOK->setObjectName(QStringLiteral("m_pushButtonOK"));
        m_pushButtonOK->setGeometry(QRect(40, 150, 91, 31));
        m_pushButtonCancel = new QPushButton(Form_ampsWidgetAutheticateUser);
        m_pushButtonCancel->setObjectName(QStringLiteral("m_pushButtonCancel"));
        m_pushButtonCancel->setGeometry(QRect(170, 150, 91, 31));
        m_labelTitle = new QLabel(Form_ampsWidgetAutheticateUser);
        m_labelTitle->setObjectName(QStringLiteral("m_labelTitle"));
        m_labelTitle->setGeometry(QRect(70, 20, 141, 16));

        retranslateUi(Form_ampsWidgetAutheticateUser);

        QMetaObject::connectSlotsByName(Form_ampsWidgetAutheticateUser);
    } // setupUi

    void retranslateUi(QWidget *Form_ampsWidgetAutheticateUser)
    {
        Form_ampsWidgetAutheticateUser->setWindowTitle(QApplication::translate("Form_ampsWidgetAutheticateUser", "Form", 0));
        m_labelUserName->setText(QApplication::translate("Form_ampsWidgetAutheticateUser", "Username", 0));
        m_labelPassword->setText(QApplication::translate("Form_ampsWidgetAutheticateUser", "Password", 0));
        m_pushButtonOK->setText(QApplication::translate("Form_ampsWidgetAutheticateUser", "Ok", 0));
        m_pushButtonCancel->setText(QApplication::translate("Form_ampsWidgetAutheticateUser", "Cancel", 0));
        m_labelTitle->setText(QApplication::translate("Form_ampsWidgetAutheticateUser", "Enter username & password", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_ampsWidgetAutheticateUser: public Ui_Form_ampsWidgetAutheticateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPSWIDGETAUTHETICATEUSER_H
