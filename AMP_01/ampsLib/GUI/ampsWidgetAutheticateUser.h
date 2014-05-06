/*
  ampsWidgetAutheticateUser.h
*/

#ifndef AMPSWIDGETAUTHETICATEUSER_HH
#define AMPSWIDGETAUTHETICATEUSER_HH

#include <string>

#include "../General/MgWidget.h"

#include "../GeneratedFiles/ui_ampsWidgetAutheticateUser.h"

class ampsWidgetAutheticateUser : public MgWidget
{
  Q_OBJECT

  public:
    ampsWidgetAutheticateUser();
    virtual ~ampsWidgetAutheticateUser();

    void Init(void);
    void InitConnect(void);

    void ClearEntry(void);

  public slots:
    void ShowUI(void);
    void HideUI(void);
    void OkPressed(void);
    void CancelPressed(void);
    void EnableButtonAll(void);
    void DisableButtonAll(void);
    void EnableOkButton(void);
    void DisableOkButton(void);
    void EnableCancelButton(void);
    void DisableCancelButton(void);

  signals:
    void SelectLogin(void);
    void CancelLogin(void);

  public:
    Ui_Form_ampsWidgetAutheticateUser m_UI;

    std::string m_Username;
    std::string m_Password;

/*
//  Not needed now
  public slots:
    void UsernameTextChanged(void);
    void UsernameTextEdited(void);
    void PasswordTextChanged(void);
    void PasswordTextEdited(void);
*/
};


#endif
