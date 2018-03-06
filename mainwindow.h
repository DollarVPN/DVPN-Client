#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <stdint.h>
#include <memory>
#include <queue>
#include <QMainWindow>
#include <QMovie>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static MainWindow * instance();
    static bool IsExists()
    {
        return (mInstance.get() != NULL);
    }

private slots:
    void on_signin_clicked();
    void setButtonIcon(int frame);

    void on_upgrade_clicked();

private:
    Ui::MainWindow *ui;
    static std::auto_ptr<MainWindow> mInstance;

    QMovie *loading;
};

#endif // MAINWINDOW_H
