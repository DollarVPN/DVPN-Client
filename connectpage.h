#ifndef CONNECTPAGE_H
#define CONNECTPAGE_H

#include <QWidget>

#include <memory>
#include <queue>
#include <stdint.h>

#include "server.h"

#include <QWidget>
#include <QListWidget>
#include <QListWidgetItem>
#include <QVector>
#include <QDebug>


namespace Ui {
class ConnectPage;
}

class ConnectPage : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectPage(QWidget *parent = 0);
    static ConnectPage * instance();
    ~ConnectPage();
    QVector <Server*> itemVec;
    static bool IsExists()
    {
        return (mInstance.get() != NULL);
    }

private slots:

    void on_ToPort_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ConnectPage *ui;
    static std::auto_ptr<ConnectPage> mInstance;
    void init();
};

#endif // FIRSTPAGE_H
