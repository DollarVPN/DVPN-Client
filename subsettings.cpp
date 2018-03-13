#include "subsettings.h"
#include "ui_subsettings.h"
#include <stdexcept>
#include <QDebug>
std::auto_ptr<SubSettings> SubSettings::mInstance;
SubSettings * SubSettings::instance()
{
    if (!mInstance.get())
        mInstance.reset(new SubSettings());
    return mInstance.get();
}
SubSettings::SubSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubSettings)
{
    ui->setupUi(this);
}

SubSettings::~SubSettings()
{
    delete ui;
}

void SubSettings::on_save_clicked()
{
    emit closeevent();
}


void SubSettings::on_cancel_clicked()
{
   emit closeevent();
}
