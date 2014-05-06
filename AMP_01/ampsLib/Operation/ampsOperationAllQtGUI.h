/*
  ampsOperationAllQtGUI.h
*/

#ifndef AMPSOPERATIONALLQTGUI_HH
#define AMPSOPERATIONALLQTGUI_HH

#include <QDialog>
#include <QMdiArea>
#include <QFrame>
#include <QMainWindow>
#include <QMdiSubWindow>
//#include "ampsUserInfo.h"

#include "ampsDataDoc.h"
#include "ampsOperationProjInfo.h"
#include "ampsOperationAutheticateUser.h"

#include "../GUI/ampsViewContainerQtGUI.h"
#include "../GeneratedFiles/ui_ampsMainWindowOperationAllQtGUI.h"
#include "../GeneratedFiles/ui_ampsWidgetOperationAllQtGUI.h"

#include "../TestDragDrop/dropsitewindow.h"

class ampsOperationAllQtGUI : public QMainWindow, public ampsOperationBase
//class ampsOperationAllQtGUI : public QWidget//, public ampsOperationBase
{
  Q_OBJECT

  public:
    ampsOperationAllQtGUI();
    virtual ~ampsOperationAllQtGUI();

    void Init(void);
    void InitConnect(void);

  signals:

  public slots:

    void RetrieveProjectInfo(void);
    //void RetrieveFolderInfo(void);

    void ShowProjSelector(void);
    void ShowProjInfo(void);
    void ShowAssetInfo(void);

    void UpdateProjInfo(int status);

    void SelectDispProj(QListWidgetItem *sel_item);
    void DispProj(void);

    void RefreshFolderView(void);

  protected:
    virtual void dragEnterEvent(QDragEnterEvent *event);
    virtual void dropEvent(QDropEvent *event);
    virtual void dragMoveEvent(QDragMoveEvent *d_event);

  public:
    Ui_MainWindow_ampsOperationAllQtGUI m_UI;
    QMdiArea *m_MdiArea;
    QMdiSubWindow *m_subWindowProj;
    QMdiSubWindow *m_subWindowAsset;
    QMdiSubWindow *m_subWindowFolder;
    QMdiSubWindow *m_subWindowTest;

    ampsViewContainerQtGUI *m_ViewContainerQtGUI;
    ampsOperationAutheticateUser *m_OperationAutheticateUser;
    ampsOperationProjInfo *m_OperationProjInfo;

    ampsDataDoc *m_DataDoc;

    DropSiteWindow *m_TestDragDropWin;
};

#endif
