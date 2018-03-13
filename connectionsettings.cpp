#include "connectionsettings.h"
#include "ui_connectionsettings.h"



std::auto_ptr<ConnectionSettings> ConnectionSettings::mInstance;
ConnectionSettings * ConnectionSettings::instance()
{
    if (!mInstance.get())
        mInstance.reset(new ConnectionSettings());
    return mInstance.get();
}
ConnectionSettings::ConnectionSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectionSettings)
{
    ui->setupUi(this);
}

ConnectionSettings::~ConnectionSettings()
{
    delete ui;
}

void ConnectionSettings::on_save_clicked()
{
    emit closeevent();
}

void ConnectionSettings::on_cancel_clicked()
{
    emit closeevent();
}
