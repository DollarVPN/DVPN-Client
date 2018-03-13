/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *signin;
    QLineEdit *eLogin;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *upgrade;
    QLabel *userlabel;
    QLabel *logolabel;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 700);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        signin = new QPushButton(centralWidget);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(384, 442, 281, 65));
        QFont font;
        font.setFamily(QStringLiteral("Yu Gothic UI"));
        font.setPointSize(13);
        font.setBold(false);
        font.setWeight(50);
        signin->setFont(font);
        signin->setCursor(QCursor(Qt::PointingHandCursor));
        signin->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:#f9ce3b;\n"
"border-radius:31px;\n"
"color:#32353e;\n"
"padding-bottom:5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:#ffb400;\n"
"}"));
        eLogin = new QLineEdit(centralWidget);
        eLogin->setObjectName(QStringLiteral("eLogin"));
        eLogin->setGeometry(QRect(400, 300, 251, 43));
        QFont font1;
        font1.setPointSize(12);
        eLogin->setFont(font1);
        eLogin->setStyleSheet(QLatin1String("QLineEdit {\n"
"\n"
"background-color:#ffffff;\n"
"border:#18191e;\n"
"color:#000000;\n"
"padding-left:25px;\n"
"border-radius:10px;\n"
"\n"
"}"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 545, 141, 20));
        QFont font2;
        font2.setPointSize(7);
        label_3->setFont(font2);
        label_3->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#ffffff;\n"
"}"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 359, 101, 20));
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#f9ce3b;\n"
"}"));
        upgrade = new QPushButton(centralWidget);
        upgrade->setObjectName(QStringLiteral("upgrade"));
        upgrade->setGeometry(QRect(550, 540, 111, 30));
        QFont font3;
        font3.setPointSize(7);
        font3.setStrikeOut(false);
        upgrade->setFont(font3);
        upgrade->setCursor(QCursor(Qt::PointingHandCursor));
        upgrade->setLayoutDirection(Qt::RightToLeft);
        upgrade->setAutoFillBackground(false);
        upgrade->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:#191a1f;\n"
"border-radius:12px;\n"
"border-style:solid;\n"
"color:#c4c5c9;\n"
"border:1px solid #ffb400;\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"\n"
"}"));
        userlabel = new QLabel(centralWidget);
        userlabel->setObjectName(QStringLiteral("userlabel"));
        userlabel->setGeometry(QRect(610, 350, 40, 40));
        userlabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"background-color:#191a1f;\n"
"\n"
"image: url(:/resources/img/uncheck.png);\n"
"\n"
"\n"
"}"));
        logolabel = new QLabel(centralWidget);
        logolabel->setObjectName(QStringLiteral("logolabel"));
        logolabel->setGeometry(QRect(450, 60, 141, 171));
        logolabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"image: url(:/resources/img/logo.png);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        signin->setText(QApplication::translate("MainWindow", "LOGIN  TO  THE  SOFTWARE", Q_NULLPTR));
        eLogin->setText(QString());
        eLogin->setPlaceholderText(QApplication::translate("MainWindow", "Account ID...", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "I LOST MY ACCOUNT NUMBER", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Remember Account ID", Q_NULLPTR));
        upgrade->setText(QApplication::translate("MainWindow", "CREATE ACCOUNT", Q_NULLPTR));
        userlabel->setText(QString());
        logolabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
