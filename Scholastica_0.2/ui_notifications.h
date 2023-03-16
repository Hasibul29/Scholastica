/********************************************************************************
** Form generated from reading UI file 'notifications.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONS_H
#define UI_NOTIFICATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notifications
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QLabel *label_pic;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *toolButton;

    void setupUi(QDialog *notifications)
    {
        if (notifications->objectName().isEmpty())
            notifications->setObjectName(QString::fromUtf8("notifications"));
        notifications->resize(1101, 700);
        notifications->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/inside.jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QScrollBar{background:black}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        scrollArea = new QScrollArea(notifications);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 240, 1081, 441));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 1079, 439));
        scrollArea->setWidget(scrollContents);
        label_pic = new QLabel(notifications);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(420, 0, 201, 141));
        label_pic->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        pushButton = new QPushButton(notifications);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1000, 10, 91, 61));
        pushButton->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label_2 = new QLabel(notifications);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 160, 241, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 18pt \"Segoe UI Black\";"));
        toolButton = new QPushButton(notifications);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(930, 190, 151, 41));
        toolButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:black;\n"
"color:white;\n"
"font: 87 13pt \"Segoe UI Black\";\n"
"border:black;\n"
"}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: maroon;\n"
"   border-radius:6px;\n"
"}"));

        retranslateUi(notifications);

        QMetaObject::connectSlotsByName(notifications);
    } // setupUi

    void retranslateUi(QDialog *notifications)
    {
        notifications->setWindowTitle(QCoreApplication::translate("notifications", "Notifications", nullptr));
        label_pic->setText(QString());
        pushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("notifications", "Notifications", nullptr));
        toolButton->setText(QCoreApplication::translate("notifications", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notifications: public Ui_notifications {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONS_H
