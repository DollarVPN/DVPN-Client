#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "firstpage.h"
#include "connectpage.h"
#include <QFontDatabase>
#include <QFont>


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
    QPixmap userpixmap(":/resources/img/uncheck.png");
    this->ui->userlabel->setPixmap(userpixmap);

//    QPixmap passpixmap(":/resources/img/psw.PNG");
//    this->ui->passlabel->setPixmap(passpixmap);

    QPixmap logopixmap(":/resources/img/logo.png");
    this->ui->logolabel->setPixmap(logopixmap);

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
    ConnectPage::instance()->show();

    hide();
}

void MainWindow::on_upgrade_clicked()
{
    QPixmap userpixmap(":/resources/img/check (3).png");
    this->ui->userlabel->setPixmap(userpixmap);
}
