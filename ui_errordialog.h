/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ErrorDialog
{
public:
    QFrame *frame;
    QLabel *error_txt_2;
    QPushButton *Ok_button_2;
    QLabel *label_2;

    void setupUi(QDialog *ErrorDialog)
    {
        if (ErrorDialog->objectName().isEmpty())
            ErrorDialog->setObjectName(QStringLiteral("ErrorDialog"));
        ErrorDialog->resize(361, 171);
        frame = new QFrame(ErrorDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 361, 171));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color:#1c1d25;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        error_txt_2 = new QLabel(frame);
        error_txt_2->setObjectName(QStringLiteral("error_txt_2"));
        error_txt_2->setGeometry(QRect(60, 50, 251, 71));
        QFont font;
        font.setPointSize(9);
        error_txt_2->setFont(font);
        error_txt_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#ffb400;\n"
"}"));
        Ok_button_2 = new QPushButton(frame);
        Ok_button_2->setObjectName(QStringLiteral("Ok_button_2"));
        Ok_button_2->setGeometry(QRect(240, 130, 75, 23));
        Ok_button_2->setFont(font);
        Ok_button_2->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"background-color:#ffb400;\n"
"border-radius:5px;\n"
"color:#000000;\n"
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 10, 101, 21));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#ff0000;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(ErrorDialog);

        QMetaObject::connectSlotsByName(ErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorDialog)
    {
        ErrorDialog->setWindowTitle(QApplication::translate("ErrorDialog", "Dialog", Q_NULLPTR));
        error_txt_2->setText(QApplication::translate("ErrorDialog", "OpenVPN can't be connected", Q_NULLPTR));
        Ok_button_2->setText(QApplication::translate("ErrorDialog", "OK", Q_NULLPTR));
        label_2->setText(QApplication::translate("ErrorDialog", "Error", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ErrorDialog: public Ui_ErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
