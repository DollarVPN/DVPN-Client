#include "connectpage.h"
#include "ui_connectpage.h"



#include "common.h"
#include "wndmanager.h"


#include <QFontDatabase>


std::auto_ptr<ConnectPage> ConnectPage::mInstance;
ConnectPage * ConnectPage::instance()
{
    if (!mInstance.get())
        mInstance.reset(new ConnectPage());
    return mInstance.get();
}
ConnectPage::ConnectPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectPage)
{
    ui->setupUi(this);
    setFixedSize(this->size());
    setWindowTitle(qApp->applicationName());
    QPixmap logopixmap(":/resources/img/logo1.png");
    this->ui->Logolabel->setPixmap(logopixmap);
    QPixmap connpixmap(":/resources/img/conn2.PNG");
    this->ui->connlabel->setPixmap(connpixmap);
    QPixmap portpixmap(":/resources/img/port1.PNG");
    this->ui->portlabel->setPixmap(portpixmap);
    QPixmap dashpixmap(":/resources/img/dash1.PNG");
    this->ui->dashlabel->setPixmap(dashpixmap);
    QPixmap facepixmap(":/resources/img/usermain.PNG");
    this->ui->facelabel->setPixmap(facepixmap);
    init();
    QFontDatabase fontDB;
    fontDB.addApplicationFont(":/resources/img/fonts/SourceSansPro-Regular.ttf");
    int id = QFontDatabase::addApplicationFont(":/resources/img/fonts/SourceSansPro-Regular.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont sans(family);
    sans.setPointSize(9);
    ui->pushButton_2->setFont(sans);
    ui->ToPort->setFont(sans);
    ui->pushButton_4->setFont(sans);

    fontDB.addApplicationFont(":/resources/img/fonts/open-sans.semibold.ttf");
    id = QFontDatabase::addApplicationFont(":/resources/img/fonts/open-sans.semibold.ttf");
    family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont open(family);
    open.setPointSize(8);
    ui->portcombo->setFont(open);

    fontDB.addApplicationFont(":/resources/img/fonts/open-sans.semibold.ttf");
    id = QFontDatabase::addApplicationFont(":/resources/img/fonts/open-sans.semibold.ttf");
    family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont opensemi(family);
    opensemi.setPointSize(7);
    ui->portcombo_2->setFont(open);
    ui->portcombo_3->setFont(open);
    ui->portcombo_4->setFont(open);
    ui->portcombo_5->setFont(open);

}

ConnectPage::~ConnectPage()
{
    delete ui;
}

void ConnectPage::init()
{
    QListWidgetItem *listWidgetItem=new QListWidgetItem(ui->listWidget);
    ui->listWidget->addItem(listWidgetItem);
    Server *server=new Server;
//    listWidgetItem->setSizeHint(server->sizeHint());


    ui->listWidget->setItemWidget(listWidgetItem,server);
    ui->listWidget->setItemWidget(listWidgetItem,server);
    ui->listWidget->setItemWidget(listWidgetItem,server);
    ui->listWidget->setItemWidget(listWidgetItem,server);




}

void ConnectPage::on_ToPort_clicked()
{
    WndManager::instance()->ToPort();
}

void ConnectPage::on_pushButton_4_clicked()
{
//    WndManager::instance()->ToDash();
   Server::instance()->show();
}

void ConnectPage::on_pushButton_2_clicked()
{

}
