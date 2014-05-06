/*
  ampsWidgetAutheticateUser.cpp
*/

#include "ampsWidgetAutheticateUser.h"

ampsWidgetAutheticateUser::ampsWidgetAutheticateUser()
{
  m_UI.setupUi(this);
  //setFocusPolicy(Qt::WheelFocus);
  Init();
}

ampsWidgetAutheticateUser::~ampsWidgetAutheticateUser()
{

}

void ampsWidgetAutheticateUser::Init(void)
{
  m_UI.m_lineEditPassword->setEchoMode(QLineEdit::Password);
  m_UI.m_lineEditUsername->setText("qck");
  m_UI.m_lineEditPassword->setText("magic");
  InitConnect();
}

void ampsWidgetAutheticateUser::InitConnect(void)
{
  connect( m_UI.m_pushButtonOK, SIGNAL(clicked()), this, SLOT(OkPressed()) );
  connect( m_UI.m_pushButtonCancel, SIGNAL(clicked()), this, SLOT(CancelPressed()) );
}

void ampsWidgetAutheticateUser::ClearEntry(void)
{
  m_Username = "";
  m_Password = "";
}

void ampsWidgetAutheticateUser::ShowUI(void)
{
  this->show();
}

void ampsWidgetAutheticateUser::HideUI(void)
{
  this->hide();
}

void ampsWidgetAutheticateUser::OkPressed(void)
{
  m_Username = m_UI.m_lineEditUsername->text().toStdString();
  m_Password = m_UI.m_lineEditPassword->text().toStdString();
  emit SelectLogin();
}

void ampsWidgetAutheticateUser::CancelPressed(void)
{
  HideUI();
  emit CancelLogin();
}


void ampsWidgetAutheticateUser::EnableButtonAll(void)
{
  EnableOkButton();
  EnableCancelButton();
}

void ampsWidgetAutheticateUser::DisableButtonAll(void)
{
  DisableOkButton();
  DisableCancelButton();
}

void ampsWidgetAutheticateUser::EnableOkButton(void)
{
  m_UI.m_pushButtonOK->setEnabled(true);
}

void ampsWidgetAutheticateUser::DisableOkButton(void)
{
  m_UI.m_pushButtonOK->setDisabled(true);
}

void ampsWidgetAutheticateUser::EnableCancelButton(void)
{
  m_UI.m_pushButtonCancel->setEnabled(true);
}

void ampsWidgetAutheticateUser::DisableCancelButton(void)
{
  m_UI.m_pushButtonCancel->setDisabled(true);
}


//////////////////////////////////////////////////////////
// To handle m_UI lineEdit textChanged and TextEdited
// Not need now
/////////////////////////////////////////////////////////
/*
void ampsWidgetAutheticateUser::UsernameTextChanged(void)
{

}

void ampsWidgetAutheticateUser::UsernameTextEdited(void)
{

}

void ampsWidgetAutheticateUser::PasswordTextChanged(void)
{

}

void ampsWidgetAutheticateUser::PasswordTextEdited(void)
{

}
*/