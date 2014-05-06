/*
  ampsSortProxyItemViewModel.cpp
*/

#include "ampsSortProxyItemViewModel.h"

ampsSortProxyItemViewModel::ampsSortProxyItemViewModel()
{

}

ampsSortProxyItemViewModel::~ampsSortProxyItemViewModel()
{

}

bool ampsSortProxyItemViewModel::lessThan(const QModelIndex & left, const QModelIndex & right) const
{
  int which_col_to_sort = left.column();
/*
  if(left.column() != 1)
  {
    return QSortFilterProxyModel::lessThan(left, right);
  }
*/
  //printf("\ncol to sort==%d\n", which_col_to_sort);

  switch(which_col_to_sort)
  {
    case COL_ASSET_TYPE:
    {
      QString mydataL = sourceModel()->data(left, Qt::DisplayRole).toString();
      QString mydataR = sourceModel()->data(right, Qt::DisplayRole ).toString();

      if( (mydataL == "folder") && (mydataR!="folder") )
        return false;
      else if( (mydataL != "folder") && (mydataR=="folder") )
        return true;
      else if( (mydataL == "folder") && (mydataR=="folder") )
        return QSortFilterProxyModel::lessThan(left, right);
      else
        return QSortFilterProxyModel::lessThan(right, left);
    }
      break;

    case COL_ASSET_SIZE:
    {
      bool is_ok;
      long sizeL, sizeR;

      QString sL = sourceModel()->data(left, Qt::DisplayRole).toString();
      QString sR = sourceModel()->data(right, Qt::DisplayRole).toString();
      //long sizeL, sizeR;

      if(sL.contains("B", Qt::CaseInsensitive))
      {
        sL.chop(2);
        sizeL = (long)sourceModel()->data(left, Qt::UserRole).toLongLong();
      }
      else
        sizeL = -1;

      if(sR.contains("B", Qt::CaseInsensitive))
      {
        sR.chop(2);
        sizeR = (long)sourceModel()->data(right, Qt::UserRole).toLongLong();
      }
      else
        sizeR = -1;

      //sizeL = (long) (sL.toLongLong(&is_ok));
/*
      if(is_ok == false)
        sizeL = -1;

      //sizeR = (long) (sR.toLongLong(&is_ok));
      if(is_ok == false)
        sizeR = -1;
*/
      if(sizeL <= sizeR)
        return false;
      else
        return true;
    }
      break;

    default:
      return QSortFilterProxyModel::lessThan(left, right);
  }

  return QSortFilterProxyModel::lessThan(left, right);
}

/*
  if(mydataL.toString() == "folder" && mydataR.toString() != "folder")
  {

QVariant mydataL1 = sourceModel()->data(left, Qt::DisplayRole);
QVariant mydataL2 = sourceModel()->data(left, Qt::EditRole);
QVariant mydataL3 = sourceModel()->data(left, Qt::UserRole);

    printf("\ndiff\n");
  }


  filetypeDataLeft = sourceModel()->data(left).toList();
  filetypeDataRight = sourceModel()->data(right).toList();

printf("\nsizeL=%d sizeR=%d\n", filetypeDataLeft.size(), filetypeDataRight.size());

  if(filetypeDataLeft.size()<1 || filetypeDataRight.size()<1)
    return false;



  if(filetypeDataLeft[0].toInt() < filetypeDataRight[0].toInt())
  {
    return true;
  }
  else if(filetypeDataLeft[0].toInt() == filetypeDataRight[0].toInt())
  {
    if(filetypeDataLeft[1].toString() < filetypeDataRight[1].toString())
      return true;
    else
      return false;
  }
  else
  {
    if(filetypeDataLeft[1].toString() < filetypeDataRight[1].toString())
      return true;
    else
      return false;
  }
*/
