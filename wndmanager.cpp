#include "dashboardpage.h"
#include "mainwindow.h"
#include "portforpage.h"
#include "wndmanager.h"



#include "connectpage.h"




std::auto_ptr<WndManager> WndManager::mInstance;
WndManager * WndManager::instance()
{
    if (!mInstance.get())
        mInstance.reset(new WndManager());
    return mInstance.get();
}
WndManager::WndManager(QObject *parent) : QObject(parent)
{

}


QWidget * WndManager::ScrVisible()
{
    QWidget * w = NULL;
    int visible = 0;

    if (MainWindow::IsExists())
        if (MainWindow::instance()->isVisible()) {
            w = MainWindow::instance();
            ++visible;
        }


    //assert(visible < 2);
    return w;
}

void WndManager::ToConn()
{
    QWidget *from=ScrVisible();
    if (ConnectPage::instance() != from) {
        trans(from, ConnectPage::instance());
    }
    else {
        ToFront(ConnectPage::instance());
    }

}
void WndManager::ToDash()
{
    QWidget * from = ScrVisibleDialog();
    if (DashBoardPage::instance() != from) {
        trans(from, DashBoardPage::instance());
    } else {
        ToFront(DashBoardPage::instance());		// activate it
    }
}
void WndManager::ToPort()
{
    QWidget * from = ScrVisibleDialog();
    if (PortforPage::instance() != from) {
        trans(from, PortforPage::instance());
    } else {
        ToFront(PortforPage::instance());		// activate it
    }
}


QWidget * WndManager::ScrVisibleDialog()
{
    QWidget* w = NULL;
    int visible = 0;

    if (MainWindow::IsExists())
        if (MainWindow::instance()->isVisible()) {
            w = MainWindow::instance();
            ++visible;
        }
    if (ConnectPage::IsExists())
        if (ConnectPage::instance()->isVisible()) {
            w = ConnectPage::instance();
            ++visible;
        }
    if (DashBoardPage::IsExists())
        if (DashBoardPage::instance()->isVisible()) {
            w = DashBoardPage::instance();
            ++visible;
        }
    if (PortforPage::IsExists())
        if (PortforPage::instance()->isVisible()) {
            w = PortforPage::instance();
            ++visible;
        }

    //assert(visible < 2);
    return w;
}

void WndManager::trans(QWidget * from, QWidget * to)
{
    if (from) {
        if (from != to)
            SaveAndHide(from);
    } else
        CloseAll();
    DoTrans(to);
}

void WndManager::trans(const QPoint & newpos, QWidget * to)
{
    _x = newpos.x();
    _y = newpos.y();
    DoTrans(to);
}

void WndManager::SaveAndHide(QWidget * from)
{
    currentWidget=from;
    SaveCoords(from);
    from->hide();
}
void WndManager::CloseAll()
{
    int visible = 0;

    if (MainWindow::IsExists())
        if (MainWindow::instance()->isVisible()) {
            SaveAndHide(MainWindow::instance());
            ++visible;
        }
    if (ConnectPage::IsExists())
        if (ConnectPage::instance()->isVisible()) {
            SaveAndHide(ConnectPage::instance());
            ++visible;
        }
    if (DashBoardPage::IsExists())
        if (DashBoardPage::instance()->isVisible()) {
            SaveAndHide(DashBoardPage::instance());
            ++visible;
        }
    if (PortforPage::IsExists())
        if (PortforPage::instance()->isVisible()) {
            SaveAndHide(PortforPage::instance());
            ++visible;
        }



    //assert(visible < 2);
}
void WndManager::SaveCoords(QWidget * from)
{
    if (!from)
        return;
    if (!from->isVisible())
        return;
//    int tw = from->width();
    //assert(tw > 0);
    int px = from->x() + (from->width() / 2);
    _x = px - 187;  // 187 int = width of primary / 2
    _y = from->y();
}
void WndManager::DoTrans(QWidget * to)
{
    ApplyCoords(to);
    ToFront(to);
}

void WndManager::ApplyCoords(QWidget * to)
{
//    int tw = to->width();
    //assert(tw > 0);
    int nx = _x + 187 - (to->width() / 2);

//log::logt(QString().sprintf("ApplyCoords(): moving to (%d,%d)", nx, _y));
    to->move(nx, _y);
}
void WndManager::ToFront(QWidget * w)
{
    if (w) {

        w->show();
        w->raise();
        w->activateWindow();
    }
}
