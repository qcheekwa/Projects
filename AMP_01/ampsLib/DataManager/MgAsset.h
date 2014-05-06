/*
  MgAsset.h
*/

#ifndef MGASSET_HH
#define MGASSET_HH

#include <string>
#include "JsonBox.h"

class MgAssetAttrib
{
  public:
    MgAssetAttrib();
    virtual ~MgAssetAttrib();

    virtual void FromJSON(const char *cdata){  };    // stub function
    virtual void FromJSON(const std::string str){  };  // stub function

};


class MgAsset
{
  public:
    MgAsset();
    virtual ~MgAsset();

};


#endif
