/*
  ampsUserInfo.h
*/

#ifndef AMPSUSERINFO_HH
#define AMPSUSERINFO_HH

#include <string>

struct ampsUserInfo
{
  ampsUserInfo(){  };
  virtual ~ampsUserInfo(){  };

  std::string m_Username;
  std::string m_Password;

  bool m_IsLoggon;
  std::string m_TokenID;
  long m_UserID;
};

#endif
