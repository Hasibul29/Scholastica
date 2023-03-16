/********************************************************************************
** Form generated from reading UI file 'greport.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GREPORT_H
#define UI_GREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_greport
{
public:
    QLabel *label_icon;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;

    void setupUi(QDialog *greport)
    {
        if (greport->objectName().isEmpty())
            greport->setObjectName(QString::fromUtf8("greport"));
        greport->resize(1104, 700);
        greport->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/inside.jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        label_icon = new QLabel(greport);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(420, 0, 231, 111));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        label = new QLabel(greport);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 140, 541, 51));
        label->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));
        pushButton = new QPushButton(greport);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 590, 181, 41));
        pushButton->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: grey;\n"
"   border-radius:6px;\n"
"}"));
        pushButton_2 = new QPushButton(greport);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1000, 0, 101, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        textEdit = new QTextEdit(greport);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 240, 1081, 261));
        textEdit->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        retranslateUi(greport);

        QMetaObject::connectSlotsByName(greport);
    } // setupUi

    void retranslateUi(QDialog *greport)
    {
        greport->setWindowTitle(QCoreApplication::translate("greport", "Report", nullptr));
        label_icon->setText(QString());
        label->setText(QCoreApplication::translate("greport", "Give Feedback or Report Somethong", nullptr));
        pushButton->setText(QCoreApplication::translate("greport", "Submit", nullptr));
        pushButton_2->setText(QString());
        textEdit->setPlaceholderText(QCoreApplication::translate("greport", "Write Something", nullptr));
    } // retranslateUi

};

namespace Ui {
    class greport: public Ui_greport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GREPORT_H
