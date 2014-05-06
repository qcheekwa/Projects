/*
  ampsSortProxyItemViewModel.h
*/

#ifndef AMPSSORTPROXYITEMVIEW_HH
#define AMPSSORTPROXYITEMVIEW_HH

#include <QSortFilterProxyModel>

#define COL_ASSET_NAME   0
#define COL_ASSET_TYPE   1
#define COL_ASSET_SIZE   2

class ampsSortProxyItemViewModel  : public QSortFilterProxyModel
{
  public:
    ampsSortProxyItemViewModel();
    virtual ~ampsSortProxyItemViewModel();

  protected:
    virtual bool lessThan(const QModelIndex & left, const QModelIndex & right) const;

};

#endif
