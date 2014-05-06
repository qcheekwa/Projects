/*
  ampsOperationAutheticateUser.h
*/

#ifndef AMPSOPERATIONAUTHETICATEUSER_HH
#define AMPSOPERATIONAUTHETICATEUSER_HH

#include <QCryptographicHash>

#include "ampsOperationBase.h"
#include "ampsUserInfo.h"
#include "../Comm/ampsNetwork.h"
#include "../GUI/ampsWidgetAutheticateUser.h"

class ampsOperationAutheticateUser : public QObject, public ampsOperationBase
{
  Q_OBJECT

  public:
    ampsOperationAutheticateUser();
    ampsOperationAutheticateUser(const QWidget *parent);
    virtual ~ampsOperationAutheticateUser();

    void SetWidgetParent(const QWidget *parent);

    void Init(void);
    void InitConnect(void);

    inline ampsUserInfo * GetUserInfo(void){  return m_UserInfo;  }

    void CreateAndPostRequest(void);
    void DeleteRequest(void);
    void DeleteNetwork(void);
    inline bool IsLogin(void){ return m_IsLoggon;  }

  public slots:
    void Exe(void);
    void ExeLogin(void);
    void ExeAutoLogin(void);
    void AutheticateReply(AMPSNetwork *ampsNetwork);

  signals:
    void Autheticated(void);
    void LoginFailed(void);

  public:
    ampsWidgetAutheticateUser *m_WidgetAutheticateUser;
    AMPSNetwork *m_ampsNetworkForAuth;
    QString m_AMPSWebServicesPath;
    int m_Timeout;
    bool m_IsLoggon;

    ampsUserInfo *m_UserInfo;

    //std::string m_Username;
    //std::string m_Password;

};

#endif
