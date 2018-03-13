/********************************************************************************
** Form generated from reading UI file 'portforpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTFORPAGE_H
#define UI_PORTFORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PortforPage
{
public:
    QFrame *frame_2;
    QLabel *Logolabel;
    QLabel *connlabel;
    QLabel *portlabel;
    QLabel *dashlabel;
    QPushButton *pushButton_2;
    QPushButton *ToPort;
    QPushButton *pushButton_4;
    QFrame *frame_3;
    QLabel *facelabel;
    QLabel *welclabel;
    QFrame *frame;
    QLineEdit *password;
    QLineEdit *password_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QComboBox *locationcombo;
    QLabel *locationtxt;
    QLabel *porttxt;
    QLabel *iptxt;
    QComboBox *portcombo;

    void setupUi(QWidget *PortforPage)
    {
        if (PortforPage->objectName().isEmpty())
            PortforPage->setObjectName(QStringLiteral("PortforPage"));
        PortforPage->resize(1100, 700);
        frame_2 = new QFrame(PortforPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 211, 701));
        frame_2->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color:#1c1d25;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        Logolabel = new QLabel(frame_2);
        Logolabel->setObjectName(QStringLiteral("Logolabel"));
        Logolabel->setGeometry(QRect(56, 30, 101, 101));
        Logolabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"image: url(:/resources/img/logo.png);\n"
"}"));
        connlabel = new QLabel(frame_2);
        connlabel->setObjectName(QStringLiteral("connlabel"));
        connlabel->setGeometry(QRect(11, 214, 41, 29));
        connlabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"image: url(:/resources/img/conn1.PNG);\n"
"}"));
        portlabel = new QLabel(frame_2);
        portlabel->setObjectName(QStringLiteral("portlabel"));
        portlabel->setGeometry(QRect(10, 269, 41, 29));
        portlabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"image: url(:/resources/img/port2.PNG);\n"
"}"));
        dashlabel = new QLabel(frame_2);
        dashlabel->setObjectName(QStringLiteral("dashlabel"));
        dashlabel->setGeometry(QRect(12, 326, 41, 29));
        dashlabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"image: url(:/resources/img/dash1.PNG);\n"
"}"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 200, 211, 57));
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color:#445163;\n"
"border:0.5px solid #000000;\n"
"}"));
        ToPort = new QPushButton(frame_2);
        ToPort->setObjectName(QStringLiteral("ToPort"));
        ToPort->setGeometry(QRect(0, 256, 211, 57));
        QFont font1;
        font1.setPointSize(8);
        ToPort->setFont(font1);
        ToPort->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color:#ffb400;\n"
"border:0.5px solid #000000;\n"
"}"));
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 312, 211, 57));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color:#445163;\n"
"border:0.5px solid #000000;\n"
"}"));
        frame_3 = new QFrame(PortforPage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(210, 0, 891, 61));
        frame_3->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color:#1c1d25;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        facelabel = new QLabel(frame_3);
        facelabel->setObjectName(QStringLiteral("facelabel"));
        facelabel->setGeometry(QRect(830, 14, 31, 31));
        facelabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"image: url(:/resources/img/usermain.PNG);\n"
"}"));
        welclabel = new QLabel(frame_3);
        welclabel->setObjectName(QStringLiteral("welclabel"));
        welclabel->setGeometry(QRect(683, 13, 141, 31));
        QFont font2;
        font2.setPointSize(9);
        welclabel->setFont(font2);
        welclabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#445163;\n"
"\n"
"}"));
        frame = new QFrame(PortforPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(210, 60, 891, 641));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color:#242533;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        password = new QLineEdit(frame);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(100, 220, 231, 51));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        password->setFont(font3);
        password->setStyleSheet(QLatin1String("QLineEdit {\n"
"\n"
"background-color:#18191e;\n"
"border:#18191e;\n"
"color:#979696;\n"
"border-radius:10px;\n"
"padding-left:12px;\n"
"\n"
"}"));
        password->setEchoMode(QLineEdit::Normal);
        password->setCursorPosition(0);
        password->setReadOnly(false);
        password_2 = new QLineEdit(frame);
        password_2->setObjectName(QStringLiteral("password_2"));
        password_2->setGeometry(QRect(100, 290, 231, 51));
        password_2->setFont(font3);
        password_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"\n"
"background-color:#18191e;\n"
"border:#18191e;\n"
"color:#979696;\n"
"border-radius:10px;\n"
"padding-left:12px;\n"
"}"));
        password_2->setEchoMode(QLineEdit::Normal);
        password_2->setCursorPosition(0);
        password_2->setReadOnly(false);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(101, 370, 231, 51));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(false);
        font4.setWeight(50);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:#ffb400;\n"
"border-radius:10px;\n"
"color:#445163;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 440, 251, 71));
        QFont font5;
        font5.setPointSize(11);
        label->setFont(font5);
        label->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"background-color:#262836;\n"
"color:#53e207;\n"
"padding: 0 0 30 0px;\n"
"border-radius:10px;\n"
"\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 480, 61, 21));
        QFont font6;
        font6.setPointSize(17);
        label_2->setFont(font6);
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#ffffff;\n"
"background-color:#262836;\n"
"}"));
        locationcombo = new QComboBox(frame);
        locationcombo->setObjectName(QStringLiteral("locationcombo"));
        locationcombo->setGeometry(QRect(100, 150, 231, 51));
        locationcombo->setFont(font3);
        locationcombo->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background-color:#18191e;\n"
"border-radius:10px;\n"
"color:#979696;\n"
"padding-left:12px;\n"
"text-color:white;\n"
"border:#18191e;\n"
"}\n"
"QComboBox:editable {\n"
"    background: red;\n"
"    color: pink;\n"
"}\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 35px;\n"
"     color: #979696;\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 10px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
"     padding-left: 12px;\n"
" }\n"
"\n"
"QComboBox::down-arrow \n"
"{image: url(:/resources/img/combo2.PNG);\n"
" padding-right:25px;\n"
"}"));
        locationtxt = new QLabel(frame);
        locationtxt->setObjectName(QStringLiteral("locationtxt"));
        locationtxt->setGeometry(QRect(360, 160, 521, 31));
        porttxt = new QLabel(frame);
        porttxt->setObjectName(QStringLiteral("porttxt"));
        porttxt->setGeometry(QRect(363, 230, 521, 31));
        porttxt->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"\n"
"}"));
        iptxt = new QLabel(frame);
        iptxt->setObjectName(QStringLiteral("iptxt"));
        iptxt->setGeometry(QRect(365, 300, 521, 31));
        portcombo = new QComboBox(frame);
        portcombo->setObjectName(QStringLiteral("portcombo"));
        portcombo->setGeometry(QRect(146, 94, 131, 31));
        QFont font7;
        font7.setPointSize(8);
        font7.setBold(true);
        font7.setWeight(75);
        portcombo->setFont(font7);
        portcombo->setAutoFillBackground(false);
        portcombo->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background-color:#242533;\n"
"border-radius:15px;\n"
"color:#f0f0f1;\n"
"border:#242533;\n"
"border:0.8px solid #f0f0f1;\n"
"padding-left:30px;\n"
"\n"
"}\n"
"QComboBox::drop-down {border-width: 0px;}\n"
"QComboBox::down-arrow \n"
"{image: url(:/resources/img/combo1.PNG);\n"
" padding-right:20px;\n"
"}"));
        portcombo->setEditable(false);
        portcombo->setInsertPolicy(QComboBox::InsertAtBottom);
        portcombo->setIconSize(QSize(16, 16));
        portcombo->setDuplicatesEnabled(false);

        retranslateUi(PortforPage);

        QMetaObject::connectSlotsByName(PortforPage);
    } // setupUi

    void retranslateUi(QWidget *PortforPage)
    {
        PortforPage->setWindowTitle(QApplication::translate("PortforPage", "Form", Q_NULLPTR));
        Logolabel->setText(QString());
        connlabel->setText(QString());
        portlabel->setText(QString());
        dashlabel->setText(QString());
        pushButton_2->setText(QApplication::translate("PortforPage", "             CONNECT TO SERVER", Q_NULLPTR));
        ToPort->setText(QApplication::translate("PortforPage", "PORTFORWARD  ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("PortforPage", "   VPN DASHBOARD", Q_NULLPTR));
        facelabel->setText(QString());
        welclabel->setText(QApplication::translate("PortforPage", "Welcome back Vecious", Q_NULLPTR));
        password->setText(QString());
        password->setPlaceholderText(QApplication::translate("PortforPage", "Port..", Q_NULLPTR));
        password_2->setText(QString());
        password_2->setPlaceholderText(QApplication::translate("PortforPage", "Internal IP..", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PortforPage", "Port Forward", Q_NULLPTR));
        label->setText(QApplication::translate("PortforPage", "Portforwarded", Q_NULLPTR));
        label_2->setText(QApplication::translate("PortforPage", "4392", Q_NULLPTR));
        locationcombo->clear();
        locationcombo->insertItems(0, QStringList()
         << QApplication::translate("PortforPage", "Location", Q_NULLPTR)
         << QApplication::translate("PortforPage", "iouiouio", Q_NULLPTR)
         << QApplication::translate("PortforPage", "yio", Q_NULLPTR)
        );
        locationcombo->setCurrentText(QApplication::translate("PortforPage", "Location", Q_NULLPTR));
        locationtxt->setText(QString());
        porttxt->setText(QString());
        iptxt->setText(QString());
        portcombo->clear();
        portcombo->insertItems(0, QStringList()
         << QApplication::translate("PortforPage", "Open Port", Q_NULLPTR)
        );
        portcombo->setCurrentText(QApplication::translate("PortforPage", "Open Port", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PortforPage: public Ui_PortforPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTFORPAGE_H
