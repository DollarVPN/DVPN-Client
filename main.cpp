#include "mainwindow.h"
#include <QApplication>
#include <QLockFile>
#include <QDir>

int main(int argc, char *argv[])
{
    QString tmpDir = QDir::tempPath();
    QLockFile lockFile(tmpDir + "/123.lock");

    if(lockFile.tryLock(123)){
        QApplication a(argc, argv);
        MainWindow w;
        w.show();

        return a.exec();
    }
}
