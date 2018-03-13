#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "firstpage.h"
#include "connectpage.h"
#include <QFontDatabase>
#include <QFont>
#include <QTimer>
#include "openvpnmanager.h"
#include "osspecific.h"
#include "setting.h"
#include "wndmanager.h"
#include "authmanager.h"
#include "log.h"
#include "trayiconmanager.h"
#include "errordialog.h"

std::auto_ptr<MainWindow> MainWindow::mInstance;
MainWindow * MainWindow::instance()
{
    if (!mInstance.get())
        mInstance.reset(new MainWindow());
    return mInstance.get();
}
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle(qApp->applicationName());
    loading=new QMovie(":/resources/img/loading.gif");
    QPixmap bkgnd(":/resources/img/background.png");
    bkgnd=bkgnd.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background,bkgnd);
    this->setPalette(palette);
    connect(loading,SIGNAL(frameChanged(int)),this,SLOT(setButtonIcon(int)));

    setFixedSize(this->size());


    QFontDatabase fontDB;
    fontDB.addApplicationFont(":/resources/img/fonts/SourceSansPro-Regular.ttf");
    int id = QFontDatabase::addApplicationFont(":/resources/img/fonts/SourceSansPro-Regular.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont sans(family);
    sans.setPointSize(13);
    ui->signin->setFont(sans);
    sans.setPointSize(8);
    ui->label_3->setFont(sans);
    ui->label_4->setFont(sans);
    ui->upgrade->setFont(sans);
    QTimer::singleShot(210, this, SLOT(Timer_Constructed()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setButtonIcon(int frame)
{
    ui->signin->setIcon(QIcon(loading->currentPixmap()));

}

void MainWindow::on_signin_clicked()
{
    if (loading->loopCount() != -1)
        connect(loading,SIGNAL(finished()),loading,SLOT(start()));

    loading->start();
    QString userid=ui->eLogin->text();
    AuthManager::instance()->login(userid);

}

void MainWindow::on_upgrade_clicked()
{
    QPixmap userpixmap(":/resources/img/check (3).png");
    this->ui->userlabel->setPixmap(userpixmap);
}

void MainWindow::Timer_Constructed()
{


//    Scr_Logs * l = Scr_Logs::Instance();

//    if (l->IsExists())		// force construction
//        if (OpenvpnManager::instance()->openvpnRunning())
//            OpenvpnManager::instance()->killRunningOpenvpn();

    AuthManager::instance()->getOldIP();
    connect(AuthManager::instance(), SIGNAL(loginCompleted()),
            this, SLOT(loggedIn()));
    connect(AuthManager::instance(), SIGNAL(loginError(QString)),
            this, SLOT(loginError(QString)));



    if (Setting::instance()->autoconnect()) {
        log::logt("autoconnect set so logging in automatically");
        _ConnectAfterLogin = true;
        on_signin_clicked();
    }

    if (Setting::instance()->detectInsecureWifi()) {
        log::logt("autodetect insecure wifi is on, so starting wifi watcher");
        startWifiWatcher();
    }
}




void MainWindow::closeEvent(QCloseEvent * event)
{
    event->ignore();
    WndManager::instance()->HideThis(this);
}



void MainWindow::Cleanup()
{
    std::auto_ptr<MainWindow> d(mInstance.release());
}

void MainWindow::ToScr_Primary()
{
    WndManager::instance()->ToPrimary();
}



void MainWindow::enableButtons(bool enabled)
{
    ui->signin->setVisible(enabled);
    ui->eLogin->setEnabled(enabled);
//    ui->ePsw->setEnabled(enabled);
}

//void SjMainWindow::Finished_EccxorName()
//{
//	QString errmsg;
//	bool ok = AuthManager::Instance()->ProcessXml_EccxorName(errmsg);
//	if (!ok)
//		log::logt(errmsg);
//}


void MainWindow::StatusConnecting()
{

    TrayIconManager::instance()->updateStateIcon(OpenvpnManager::ovsConnecting);
}

void MainWindow::StatusConnected()
{
    TrayIconManager::instance()->updateStateIcon(OpenvpnManager::ovsConnected);
}

void MainWindow::StatusDisconnected()
{
    TrayIconManager::instance()->updateStateIcon(OpenvpnManager::ovsDisconnected);
}


void MainWindow::startWifiWatcher()
{
    if (NULL == _timer_wifi.get()) {
        _wifi_processing = false;
        _timer_wifi.reset(new QTimer());
        connect(_timer_wifi.get(), SIGNAL(timeout()), this, SLOT(checkWifi()));
        _timer_wifi->start(5000);
    }
}

void MainWindow::stopWifiWatcher()
{
    if (NULL != _timer_wifi.get()) {
        QTimer * t = _timer_wifi.release();
        t->stop();
        t->deleteLater();
    }
}

void MainWindow::checkWifi()
{
    if (NULL != _timer_wifi.get() 		// if not terminating now
            && !_wifi_processing) {			// and not already in the body below
        _wifi_processing = true;
        log::logt("Checking wifi");
        bool stopped = false;
        if (!AuthManager::exists()) {
            log::logt("setting stopped because AuthManager doesn't exist");
            stopped = true;
        } else {
            if (!OpenvpnManager::exists()) {
                log::logt("setting stopped because OpenvpnManager doesn't exist");
                stopped = true;
            } else {
                if (OpenvpnManager::instance()->state() == OpenvpnManager::ovsDisconnected) {
                    log::logt("setting stopped because openvpnmanager is disconnected");
                    stopped = true;
                }
            }
        }

        if (stopped) {
            if (!AuthManager::instance()->loggedIn()) {
                if (Setting::instance()->autoconnect()) {	// log in only if checked Auto-connect when app starts
                    log::logt("Autoconnect is set, so logging in if hasInSecureWifi");
                    if (OsSpecific::instance()->hasInsecureWifi()) {
                        log::logt("Logging in because hasInsecureWifi");
                        _ConnectAfterLogin = true;
                        on_signin_clicked();
                    }
                }
            } else {
                if (OsSpecific::instance()->hasInsecureWifi())
                    OpenvpnManager::instance()->start();
            }
        }
        _wifi_processing = false;
    }
}

void MainWindow::detectInsecureWifiChanged()
{
    if (Setting::instance()->detectInsecureWifi())
        MainWindow::instance()->startWifiWatcher();
    else
        MainWindow::instance()->stopWifiWatcher();
}

void MainWindow::BlockOnDisconnect()
{
    // implementation is the same as in the old Safejumper
    bool doblock = false;
    if (Setting::instance()->blockOnDisconnect()) {
        if (AuthManager::exists()) {
            if (!AuthManager::instance()->loggedIn()) {
                doblock = true;
            } else {
                if (!OpenvpnManager::exists()) {
                    doblock = true;
                } else {
                    if (OpenvpnManager::instance()->state() == OpenvpnManager::ovsDisconnected)
                        doblock = true;
                    // otherwise unblocked and should be unblocked
                }
            }
        }
    }

    if (doblock) {
        OsSpecific::instance()->netDown();
    }
}

void MainWindow::loggedIn()
{
    log::logt("LoginWindow loggedIn called");
    ConnectPage::instance()->show();
    hide();

//    if (Setting::instance()->encryption() == ENCRYPTION_RSA)
//        Setting::instance()->loadServer();

//    // TODO: -0
////		{
////			SETTINGS_OBJ;
////			int ix = settings.value("dd_Protocol_ix", -1).toInt();
////			if (ix < 0)
////			{
////log::logt("sleeping 3");
////				QThread::sleep(3);		// if first run: wait for pings  - to get adequate jump
////			}
////		}
//    WndManager::instance()->ToPrimary();

//    if (_ConnectAfterLogin) {
//        log::logt("Connect after login set, so launching openvpn");
//        OpenvpnManager::instance()->start();
//    }
//    enableButtons(true);
//    _ConnectAfterLogin = false;
}

void MainWindow::loginError(QString message)
{

    if (!_CancelLogin) {
        WndManager::instance()->ToFront(this);
        log::logt("Login Error " + message);
        ErrorDialog dlg(message,this);
        dlg.exec();
    }
    enableButtons(true);
    _ConnectAfterLogin = false;
}
