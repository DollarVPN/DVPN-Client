#include "server.h"
#include "ui_server.h"

#include <QFontDatabase>
#include <QFont>

std::auto_ptr<Server> Server::mInstance;
Server * Server::instance()
{
    if (!mInstance.get())
        mInstance.reset(new Server());
    return mInstance.get();
}
Server::Server(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
    QPixmap upgradepixmap(":/resources/img/minus.PNG");
    QIcon buttonicon(upgradepixmap);
    this->ui->disconn->setIcon(buttonicon);
    QPixmap flagpixmap(":/resources/img/flags/NL.png");
    this->ui->flagid->setPixmap(flagpixmap);
    QFontDatabase fontDB;
    fontDB.addApplicationFont(":/resources/img/fonts/open-sans.bold.ttf");
    int id = QFontDatabase::addApplicationFont(":/resources/img/fonts/open-sans.bold.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont sans(family);
    sans.setPointSize(8);
    ui->country_name->setFont(sans);
    ui->label->setFont(sans);
    ui->label_2->setFont(sans);
    ui->progressBar->setFont(sans);
    fontDB.addApplicationFont(":/resources/img/fonts/open-sans.semibold.ttf");
    id = QFontDatabase::addApplicationFont(":/resources/img/fonts/open-sans.semibold.ttf");
    family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont semisans(family);
    semisans.setPointSize(7);
    ui->location->setFont(semisans);
    semisans.setPointSize(9);
    ui->disconn->setFont(semisans);
}

Server::~Server()
{
    delete ui;
}
