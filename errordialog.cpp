#include "errordialog.h"
#include "ui_errordialog.h"



std::auto_ptr<ErrorDialog> ErrorDialog::mInstance;

ErrorDialog::ErrorDialog(const QString & msg, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorDialog)
{
    ui->setupUi(this);
    ui->error_txt_2->setText(msg);
}

ErrorDialog::~ErrorDialog()
{
    delete ui;
}
