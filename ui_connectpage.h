/********************************************************************************
** Form generated from reading UI file 'connectpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTPAGE_H
#define UI_CONNECTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectPage
{
public:
    QFrame *frame_3;
    QLabel *facelabel;
    QLabel *welclabel;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QComboBox *portcombo;
    QComboBox *portcombo_2;
    QComboBox *portcombo_3;
    QComboBox *portcombo_4;
    QComboBox *portcombo_5;
    QFrame *frame_2;
    QLabel *Logolabel;
    QLabel *connlabel;
    QLabel *portlabel;
    QLabel *dashlabel;
    QPushButton *pushButton_2;
    QPushButton *ToPort;
    QPushButton *pushButton_4;

    void setupUi(QWidget *ConnectPage)
    {
        if (ConnectPage->objectName().isEmpty())
            ConnectPage->setObjectName(QStringLiteral("ConnectPage"));
        ConnectPage->resize(1100, 700);
        frame_3 = new QFrame(ConnectPage);
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
        QFont font;
        font.setPointSize(9);
        welclabel->setFont(font);
        welclabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#445163;\n"
"\n"
"}"));
        frame = new QFrame(ConnectPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(210, 60, 891, 641));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color:#242533;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-10, 100, 901, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"background-color:#242533;\n"
"border:#242533;\n"
"}"));

        verticalLayout->addWidget(listWidget);

        portcombo = new QComboBox(frame);
        portcombo->setObjectName(QStringLiteral("portcombo"));
        portcombo->setGeometry(QRect(30, 20, 121, 31));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        portcombo->setFont(font1);
        portcombo->setAutoFillBackground(false);
        portcombo->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background-color:#242533;\n"
"\n"
"color:#f0f0f1;\n"
"border:#242533;\n"
"\n"
"\n"
"}\n"
"QComboBox::drop-down {border-width: 0px;}\n"
"QComboBox::down-arrow \n"
"{image: url(:/resources/img/combo1.PNG);\n"
" padding-right:10px;\n"
"}"));
        portcombo->setEditable(false);
        portcombo->setInsertPolicy(QComboBox::InsertAtBottom);
        portcombo->setIconSize(QSize(16, 16));
        portcombo->setDuplicatesEnabled(false);
        portcombo_2 = new QComboBox(frame);
        portcombo_2->setObjectName(QStringLiteral("portcombo_2"));
        portcombo_2->setGeometry(QRect(30, 60, 111, 31));
        portcombo_2->setFont(font1);
        portcombo_2->setAutoFillBackground(false);
        portcombo_2->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background-color:#242533;\n"
"color:#979696;\n"
"border:#242533;\n"
"\n"
"\n"
"\n"
"}\n"
"QComboBox::drop-down {border-width: 0px;}\n"
"QComboBox::down-arrow \n"
"{image: url(:/resources/img/listicon.PNG);\n"
" padding-right:2px;\n"
"}"));
        portcombo_2->setEditable(false);
        portcombo_2->setInsertPolicy(QComboBox::InsertAtBottom);
        portcombo_2->setIconSize(QSize(16, 16));
        portcombo_2->setDuplicatesEnabled(false);
        portcombo_3 = new QComboBox(frame);
        portcombo_3->setObjectName(QStringLiteral("portcombo_3"));
        portcombo_3->setGeometry(QRect(176, 60, 101, 31));
        portcombo_3->setFont(font1);
        portcombo_3->setAutoFillBackground(false);
        portcombo_3->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background-color:#242533;\n"
"color:#979696;\n"
"border:#242533;\n"
"\n"
"\n"
"}\n"
"QComboBox::drop-down {border-width: 0px;}\n"
"QComboBox::down-arrow \n"
"{image: url(:/resources/img/listicon.PNG);\n"
" padding-right:2px;\n"
"}"));
        portcombo_3->setEditable(false);
        portcombo_3->setInsertPolicy(QComboBox::InsertAtBottom);
        portcombo_3->setIconSize(QSize(16, 16));
        portcombo_3->setDuplicatesEnabled(false);
        portcombo_4 = new QComboBox(frame);
        portcombo_4->setObjectName(QStringLiteral("portcombo_4"));
        portcombo_4->setGeometry(QRect(313, 60, 121, 31));
        portcombo_4->setFont(font1);
        portcombo_4->setAutoFillBackground(false);
        portcombo_4->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background-color:#242533;\n"
"color:#979696;\n"
"border:#242533;\n"
"\n"
"\n"
"}\n"
"QComboBox::drop-down {border-width: 0px;}\n"
"QComboBox::down-arrow \n"
"{image: url(:/resources/img/listicon.PNG);\n"
" padding-right:0px;\n"
"}"));
        portcombo_4->setEditable(false);
        portcombo_4->setInsertPolicy(QComboBox::InsertAtBottom);
        portcombo_4->setIconSize(QSize(16, 16));
        portcombo_4->setDuplicatesEnabled(false);
        portcombo_5 = new QComboBox(frame);
        portcombo_5->setObjectName(QStringLiteral("portcombo_5"));
        portcombo_5->setGeometry(QRect(542, 65, 91, 21));
        portcombo_5->setFont(font1);
        portcombo_5->setAutoFillBackground(false);
        portcombo_5->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background-color:#242533;\n"
"color:#979696;\n"
"border:#242533;\n"
"\n"
"\n"
"}\n"
"QComboBox::drop-down {border-width: 0px;}\n"
"QComboBox::down-arrow \n"
"{image: url(:/resources/img/listicon.PNG);\n"
" padding-right:7px;\n"
"}"));
        portcombo_5->setEditable(false);
        portcombo_5->setInsertPolicy(QComboBox::InsertAtBottom);
        portcombo_5->setIconSize(QSize(16, 16));
        portcombo_5->setDuplicatesEnabled(false);
        frame_2 = new QFrame(ConnectPage);
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
"image: url(:/resources/img/logo1.png);\n"
"}"));
        connlabel = new QLabel(frame_2);
        connlabel->setObjectName(QStringLiteral("connlabel"));
        connlabel->setGeometry(QRect(11, 215, 41, 29));
        connlabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"image: url(:/resources/img/conn2.PNG);\n"
"}"));
        portlabel = new QLabel(frame_2);
        portlabel->setObjectName(QStringLiteral("portlabel"));
        portlabel->setGeometry(QRect(9, 270, 41, 29));
        portlabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"image: url(:/resources/img/port1.PNG);\n"
"}"));
        dashlabel = new QLabel(frame_2);
        dashlabel->setObjectName(QStringLiteral("dashlabel"));
        dashlabel->setGeometry(QRect(12, 327, 41, 29));
        dashlabel->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"image: url(:/resources/img/dash1.PNG);\n"
"}"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1, 200, 211, 57));
        QFont font2;
        font2.setPointSize(8);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color:#ffb400;\n"
"border:0px solid #000000;\n"
"}"));
        ToPort = new QPushButton(frame_2);
        ToPort->setObjectName(QStringLiteral("ToPort"));
        ToPort->setGeometry(QRect(1, 256, 211, 57));
        ToPort->setFont(font2);
        ToPort->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color:#445163;\n"
"border:0.1em solid #151515;\n"
"}"));
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1, 312, 211, 57));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color:#445163;\n"
"border:0px solid #000000;\n"
"}"));

        retranslateUi(ConnectPage);

        QMetaObject::connectSlotsByName(ConnectPage);
    } // setupUi

    void retranslateUi(QWidget *ConnectPage)
    {
        ConnectPage->setWindowTitle(QApplication::translate("ConnectPage", "Form", Q_NULLPTR));
        facelabel->setText(QString());
        welclabel->setText(QApplication::translate("ConnectPage", "Welcome back Vecious", Q_NULLPTR));
        portcombo->clear();
        portcombo->insertItems(0, QStringList()
         << QApplication::translate("ConnectPage", "All Servers (30)", Q_NULLPTR)
        );
        portcombo->setCurrentText(QApplication::translate("ConnectPage", "All Servers (30)", Q_NULLPTR));
        portcombo_2->clear();
        portcombo_2->insertItems(0, QStringList()
         << QApplication::translate("ConnectPage", "Server Country", Q_NULLPTR)
        );
        portcombo_2->setCurrentText(QApplication::translate("ConnectPage", "Server Country", Q_NULLPTR));
        portcombo_3->clear();
        portcombo_3->insertItems(0, QStringList()
         << QApplication::translate("ConnectPage", "Server Name", Q_NULLPTR)
        );
        portcombo_3->setCurrentText(QApplication::translate("ConnectPage", "Server Name", Q_NULLPTR));
        portcombo_4->clear();
        portcombo_4->insertItems(0, QStringList()
         << QApplication::translate("ConnectPage", "Server Encryption", Q_NULLPTR)
        );
        portcombo_4->setCurrentText(QApplication::translate("ConnectPage", "Server Encryption", Q_NULLPTR));
        portcombo_5->clear();
        portcombo_5->insertItems(0, QStringList()
         << QApplication::translate("ConnectPage", "Server Load", Q_NULLPTR)
        );
        portcombo_5->setCurrentText(QApplication::translate("ConnectPage", "Server Load", Q_NULLPTR));
        Logolabel->setText(QString());
        connlabel->setText(QString());
        portlabel->setText(QString());
        dashlabel->setText(QString());
        pushButton_2->setText(QApplication::translate("ConnectPage", "             CONNECT TO SERVER", Q_NULLPTR));
        ToPort->setText(QApplication::translate("ConnectPage", "PORTFORWARD  ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ConnectPage", "   VPN DASHBOARD", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectPage: public Ui_ConnectPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTPAGE_H
