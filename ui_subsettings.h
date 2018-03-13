/********************************************************************************
** Form generated from reading UI file 'subsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSETTINGS_H
#define UI_SUBSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *cancel;
    QPushButton *save;

    void setupUi(QWidget *SubSettings)
    {
        if (SubSettings->objectName().isEmpty())
            SubSettings->setObjectName(QStringLiteral("SubSettings"));
        SubSettings->resize(638, 197);
        verticalLayout = new QVBoxLayout(SubSettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(SubSettings);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color:#1b1d25;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 171, 16));
        QFont font;
        font.setPointSize(7);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#8497a8;\n"
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 60, 181, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#8497a8;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 16, 201, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#8497a8;\n"
"}"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 58, 171, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#8497a8;\n"
"}"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(41, 97, 181, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#8497a8;\n"
"}"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(351, 96, 171, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#8497a8;\n"
"}"));
        cancel = new QPushButton(frame);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(190, 145, 101, 35));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        cancel->setFont(font1);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        cancel->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:#1b1d25;\n"
"border-radius:17px;\n"
"border-style:solid;\n"
"color:#c4c5c9;\n"
"border:1px solid #374150;\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"\n"
"}"));
        save = new QPushButton(frame);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(330, 145, 101, 35));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        save->setFont(font2);
        save->setCursor(QCursor(Qt::PointingHandCursor));
        save->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:#1b1d25;\n"
"border-radius:17px;\n"
"border-style:solid;\n"
"color:#c4c5c9;\n"
"border:1px solid #ffb400;\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"\n"
"}"));

        horizontalLayout->addWidget(frame);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SubSettings);

        QMetaObject::connectSlotsByName(SubSettings);
    } // setupUi

    void retranslateUi(QWidget *SubSettings)
    {
        SubSettings->setWindowTitle(QApplication::translate("SubSettings", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SubSettings", "Auto-Lanuch Software on Startup", Q_NULLPTR));
        label_2->setText(QApplication::translate("SubSettings", "Auto-Connect when Software starts", Q_NULLPTR));
        label_3->setText(QApplication::translate("SubSettings", "Auto-Connect when using a Unsecured WIFI ", Q_NULLPTR));
        label_4->setText(QApplication::translate("SubSettings", "Auto-Lanuch Software on Startup", Q_NULLPTR));
        label_5->setText(QApplication::translate("SubSettings", "Re-Connect when connection drops", Q_NULLPTR));
        label_6->setText(QApplication::translate("SubSettings", "Auto-Lanuch Software on Startup", Q_NULLPTR));
        cancel->setText(QApplication::translate("SubSettings", "Cancel", Q_NULLPTR));
        save->setText(QApplication::translate("SubSettings", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubSettings: public Ui_SubSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSETTINGS_H
