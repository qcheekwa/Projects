/*
  ampsOperationAutheticateUser.cpp
*/

#include <QMessageBox>
#include <QJsonObject>

#include "ampsOperationAutheticateUser.h"

ampsOperationAutheticateUser::ampsOperationAutheticateUser()
{
  Init();
}

ampsOperationAutheticateUser::ampsOperationAutheticateUser(const QWidget *parent) : QObject((QObject *)parent)
{
  Init();
  SetWidgetParent(parent);
}


ampsOperationAutheticateUser::~ampsOperationAutheticateUser()
{
  if(m_UserInfo != NULL) delete m_UserInfo;
}

void ampsOperationAutheticateUser::Init(void)
{
  m_IsLoggon = false;
  m_AMPSWebServicesPath = DEFINED_AMPSVar_WebServices_Path;
  m_WidgetAutheticateUser = new ampsWidgetAutheticateUser;
  m_ampsNetworkForAuth = NULL;
  m_Timeout = 55;
  m_UserInfo = NULL;

  InitConnect();
}

void ampsOperationAutheticateUser::InitConnect(void)
{
  connect( m_WidgetAutheticateUser, SIGNAL(SelectLogin()), this, SLOT(ExeLogin()) );
}

void ampsOperationAutheticateUser::SetWidgetParent(const QWidget *parent)
{
  Qt::WindowFlags f = m_WidgetAutheticateUser->windowFlags();
  m_WidgetAutheticateUser->setParent((QWidget *)parent);
  m_WidgetAutheticateUser->setWindowFlags(f);  
}

void ampsOperationAutheticateUser::CreateAndPostRequest(void)
{
  m_ampsNetworkForAuth = new AMPSNetwork(AMPSNetwork::API_authenticateUser,
                                                          m_AMPSWebServicesPath, m_Timeout);

  QUrlQuery param;
  param.addQueryItem("username", QString::fromStdString(m_UserInfo->m_Username));
  param.addQueryItem("password", QCryptographicHash::hash(QString::fromStdString(m_UserInfo->m_Password).toUtf8(),
                                                                      QCryptographicHash::Md5).toHex() );
  //param.addQueryItem("password", QString::fromStdString(m_User->m_Password));


  connect( m_ampsNetworkForAuth, SIGNAL(finished(AMPSNetwork *)), this, SLOT(AutheticateReply(AMPSNetwork *)) );

  m_ampsNetworkForAuth->postRequest(param, NULL);
}

void ampsOperationAutheticateUser::AutheticateReply(AMPSNetwork *ampsNetwork)
{
//QMessageBox mb1;
//mb1.setText("AutheticateFinished");
//mb1.exec();
printf("\n\nAutheticateFinished - %s\n\n", m_UserInfo->m_Username.c_str());
  m_WidgetAutheticateUser->HideUI();

  bool login_ok = false;
  AMPSNetworkReply *replyResult = m_ampsNetworkForAuth->GetReplyPackage();
  //AMPSNetworkReply *replyResult = ampsNetwork->GetReplyPackage();

    QString resultString="";
    int resultCode = -1;

    if(replyResult->errorFlags==0)
    {
        QJsonObject parseObject = replyResult->requestResult[0].toObject();

        resultCode = (int) (parseObject["error_code"].toDouble());
        switch(resultCode)
        {
                case 0 : resultString = "Login successfully !";
                         m_UserInfo->m_TokenID = parseObject["tokenid"].toString().toStdString();
                         m_UserInfo->m_UserID = (qint64)parseObject["userid"].toString().toLong();
                         //main->setValue("AMPSVar_Login_TokenID", parseObject["tokenid"].toString());
                         //main->setValue("AMPSVar_Login_UserID", (qint64)parseObject["userid"].toString().toLong());
//                         m_login_tokenID = parseObject["tokenid"].toString();
//                         m_login_userid = parseObject["userid"].toString().toInt();
                         m_UserInfo->m_IsLoggon = true;
                         login_ok = true;
                         break;
                case 2 : resultString ="Please input username and password."; break;
                case 3 : resultString ="Username/Password is wrong."; break;
        }
    }

    if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_JSON)
        resultString = replyResult->jsonErrorString;

    if(replyResult->errorFlags && AMPSNetwork::AMPS_ERROR_NETWORK)
        resultString = replyResult->networkErrorString;

  if(login_ok == true)
  {
    m_IsLoggon = true;
    emit Autheticated();
  }
  else
  {
    //m_IsLoggon = false; //
    emit LoginFailed();
  }

  disconnect( m_ampsNetworkForAuth, SIGNAL(finished(AMPSNetwork *)), this, SLOT(AutheticateReply(AMPSNetwork *)) );
  m_ampsNetworkForAuth->deleteLater();
}

void ampsOperationAutheticateUser::Exe(void)
{
  m_WidgetAutheticateUser->ShowUI();
}

void ampsOperationAutheticateUser::ExeAutoLogin(void)
{
  m_UserInfo = new ampsUserInfo;
  m_UserInfo->m_Username = "qck";
  m_UserInfo->m_Password = "magic";
  CreateAndPostRequest();
}

void ampsOperationAutheticateUser::ExeLogin(void)
{
  m_UserInfo = new ampsUserInfo;
  m_UserInfo->m_Username = m_WidgetAutheticateUser->m_Username;
  m_UserInfo->m_Password = m_WidgetAutheticateUser->m_Password;
  CreateAndPostRequest();
}
