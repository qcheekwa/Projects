/*
  ampsWidgetProjSelector.cpp
*/

#include "ampsWidgetProjSelector.h"

////////////////////////////////////////////////////////////////////////////////////////////
//
// 1. ampsWidgetProjSelector
//
////////////////////////////////////////////////////////////////////////////////////////////////

ampsWidgetProjSelector::ampsWidgetProjSelector(const QWidget *parent) : MgWidget((QWidget *)parent)
{
  m_UI.setupUi(this);
  setFocusPolicy(Qt::WheelFocus);
}

ampsWidgetProjSelector::~ampsWidgetProjSelector()
{

}

////////////////////////////////////////////////////////////////////////////////////////////
//
// 2. ampsScrollWidgetProjSelector
//
////////////////////////////////////////////////////////////////////////////////////////////////

ampsScrollWidgetProjSelector::ampsScrollWidgetProjSelector(const QWidget *parent) : MgScrollArea((QWidget *)parent)
{
  //m_WidgetProjSelector = new ampsWidgetProjSelector(this);
  //m_TableWidgetProjSelector = new QTableWidget(this);
  //setWidget(m_WidgetProjSelector);
  //setWidget(m_TableWidgetProjSelector);

  m_ListWidgetProjSelector = new QListWidget(this);
  setWidget(m_ListWidgetProjSelector);
  setFocusPolicy(Qt::WheelFocus);
}

ampsScrollWidgetProjSelector::~ampsScrollWidgetProjSelector()
{

}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// 3. ampsDockWidgetProjSelector
//
////////////////////////////////////////////////////////////////////////////////////////////////

ampsDockWidgetProjSelector::ampsDockWidgetProjSelector(const QWidget *parent) : ampsDockWidgetBase(parent)
{
  m_ScrollWidgetProjSelector = new ampsScrollWidgetProjSelector(this);
  setWidget(m_ScrollWidgetProjSelector);
  setFocusPolicy(Qt::WheelFocus);
  setFeatures(QDockWidget::AllDockWidgetFeatures);
  setWindowTitle("Proj Selector");
}

ampsDockWidgetProjSelector::~ampsDockWidgetProjSelector()
{

}

void ampsDockWidgetProjSelector::Init(void)
{
  QListWidget *lw; 
  lw = m_ScrollWidgetProjSelector->m_ListWidgetProjSelector;
}

void ampsDockWidgetProjSelector::UpdateDispData(const QJsonArray &proj_info)
{
  int i, num_proj;

  num_proj = proj_info.size();

  QListWidget *lw; 
  lw = m_ScrollWidgetProjSelector->m_ListWidgetProjSelector;
  lw->clear();

//printf("\nproj num = %d\n", num_proj);

  for(i=0; i<num_proj; i++)
  {
    //char *proj_id_txt = (char *) calloc(256, sizeof(char));
    //sprintf(proj_id_txt, "%d", i);

printf("\n%d - %s", i+1, proj_info[i].toObject()["name"].toString().toStdString().c_str());

    QListWidgetItem *witem = new QListWidgetItem;

    //witem->setText(proj_id_txt);
    witem->setText(proj_info[i].toObject()["name"].toString().toStdString().c_str());
    
    lw->addItem(witem);

    //free((void *)proj_id_txt);
  }
printf("\n");
}
