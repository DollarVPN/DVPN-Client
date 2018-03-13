#ifndef ERRORDIALOG_H
#define ERRORDIALOG_H

#include <QDialog>
#include <memory>


namespace Ui {
class ErrorDialog;
}

class ErrorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ErrorDialog(const QString & msg,QWidget *parent = 0);
    static ErrorDialog * instance();
    ~ErrorDialog();

private:
    Ui::ErrorDialog *ui;
    static std::auto_ptr<ErrorDialog> mInstance;
};

#endif // ERRORDIALOG_H
