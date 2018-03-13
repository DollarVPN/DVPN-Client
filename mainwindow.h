#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <stdint.h>
#include <memory>
#include <queue>
#include <QMainWindow>
#include <QMovie>
#include <QWidget>
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
    static void Cleanup();
    void loginuser(const QString & name, const QString & password);
    void StatusConnecting();
    void StatusConnected();
    void StatusDisconnected();

    void startWifiWatcher();
    void stopWifiWatcher();
    void BlockOnDisconnect();

public slots:

    void loginError(QString message);

    void loggedIn();

//	void Finished_EccxorName();

    // connect or login Src depending on auth status
    void ToScr_Primary();

private slots:
    void on_signin_clicked();
    void setButtonIcon(int frame);

    void on_upgrade_clicked();
    void Timer_Constructed();
    void checkWifi();

    void detectInsecureWifiChanged();

protected:
    virtual void closeEvent(QCloseEvent * event);

private:
    Ui::MainWindow *ui;
    static std::auto_ptr<MainWindow> mInstance;
    bool _CancelLogin;
    QMovie *loading;
    bool _ConnectAfterLogin;
    void enableButtons(bool enabled);

    unsigned int _activatedcount;
    std::auto_ptr<QTimer> _timer_icon;
    void DisconnectIconWatcher();

    std::auto_ptr<QTimer> _timer_wifi;
    bool _wifi_processing;
    bool mQuitConfirmed;
};

#endif // MAINWINDOW_H
