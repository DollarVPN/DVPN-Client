#include "mainwindow.h"
#include <QApplication>
#include <QLockFile>
#include <QDir>
#include "log.h"

int main(int argc, char *argv[])
{
    QString tmpDir = QDir::tempPath();
    QLockFile lockFile(tmpDir + "/125.lock");
    QDir dir;
    dir.mkpath(QDir::homePath()+"/.DollarVPN");
    if(lockFile.tryLock(125)){
        QApplication a(argc, argv);
        MainWindow w;
        w.show();

        return a.exec();
    }
}
