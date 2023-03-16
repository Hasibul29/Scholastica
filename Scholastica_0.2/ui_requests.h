/********************************************************************************
** Form generated from reading UI file 'requests.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTS_H
#define UI_REQUESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Requests
{
public:
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QLabel *label_pic;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QLabel *label_3;

    void setupUi(QDialog *Requests)
    {
        if (Requests->objectName().isEmpty())
            Requests->setObjectName(QString::fromUtf8("Requests"));
        Requests->resize(1101, 700);
        Requests->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/inside.jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QScrollBar{background:black}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        label_2 = new QLabel(Requests);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(470, 150, 161, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 18pt \"Segoe UI Black\";"));
        scrollArea = new QScrollArea(Requests);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 200, 1081, 491));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 1079, 489));
        scrollArea->setWidget(scrollContents);
        label_pic = new QLabel(Requests);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(450, 0, 201, 141));
        label_pic->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        pushButton = new QPushButton(Requests);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1010, 0, 91, 61));
        pushButton->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        pushButton_2 = new QPushButton(Requests);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(-10, 0, 141, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{\n"
"image: url(:/img/img/pngflow.com.png);\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label = new QLabel(Requests);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 71, 20));
        label->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        pushButton_3 = new QPushButton(Requests);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 0, 91, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("*{\n"
"image: url(:/img/img/meaw.png);\n"
"border:white;}\n"
""));
        label_3 = new QLabel(Requests);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 60, 71, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        retranslateUi(Requests);

        QMetaObject::connectSlotsByName(Requests);
    } // setupUi

    void retranslateUi(QDialog *Requests)
    {
        Requests->setWindowTitle(QCoreApplication::translate("Requests", "Requests", nullptr));
        label_2->setText(QCoreApplication::translate("Requests", "Requests", nullptr));
        label_pic->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QCoreApplication::translate("Requests", "Manage", nullptr));
        pushButton_3->setText(QString());
        label_3->setText(QCoreApplication::translate("Requests", "Review", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Requests: public Ui_Requests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTS_H
