#include "portforpage.h"
#include "ui_portforpage.h"


#include "wndmanager.h"

#include <QStandardItemModel>
#include <QFontDatabase>
#include <QFont>


std::auto_ptr<PortforPage> PortforPage::mInstance;
PortforPage * PortforPage::instance()
{
    if (!mInstance.get())
        mInstance.reset(new PortforPage());
    return mInstance.get();
}
PortforPage::PortforPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PortforPage)
{
    ui->setupUi(this);
    setFixedSize(this->size());
    setWindowTitle(qApp->applicationName());


    QPixmap logopixmap(":/resources/img/logo1.png");
    this->ui->Logolabel->setPixmap(logopixmap);
    QPixmap portpixmap(":/resources/img/port2.PNG");
    this->ui->portlabel->setPixmap(portpixmap);
    QPixmap facepixmap(":/resources/img/usermain.PNG");
    this->ui->facelabel->setPixmap(facepixmap);
    QPixmap connpixmap(":/resources/img/conn1.PNG");
    this->ui->connlabel->setPixmap(connpixmap);
    QPixmap dashpixmap(":/resources/img/dash1.PNG");
    this->ui->dashlabel->setPixmap(dashpixmap);
    QPixmap locpixmap(":/resources/img/locationtxt.PNG");
    this->ui->locationtxt->setPixmap(locpixmap);
    QPixmap porttxtpixmap(":/resources/img/porttxt.PNG");
    this->ui->porttxt->setPixmap(porttxtpixmap);
    QPixmap ippixmap(":/resources/img/iptxt.PNG");
    this->ui->iptxt->setPixmap(ippixmap);
    QFontDatabase fontDB;
    fontDB.addApplicationFont(":/resources/img/fonts/SourceSansPro-Regular.ttf");
    int id = QFontDatabase::addApplicationFont(":/resources/img/fonts/SourceSansPro-Regular.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont sans(family);
    sans.setPointSize(9);
    ui->pushButton_2->setFont(sans);
    ui->ToPort->setFont(sans);
    ui->pushButton_4->setFont(sans);
}

PortforPage::~PortforPage()
{
    delete ui;
}

void PortforPage::on_pushButton_2_clicked()
{
    WndManager::instance()->ToConn();
}

void PortforPage::on_ToDash_clicked()
{
    WndManager::instance()->ToDash();
}
