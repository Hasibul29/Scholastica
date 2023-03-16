/********************************************************************************
** Form generated from reading UI file 'trating.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRATING_H
#define UI_TRATING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_trating
{
public:
    QPushButton *pushButton;
    QLabel *label_pic;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *trating)
    {
        if (trating->objectName().isEmpty())
            trating->setObjectName(QString::fromUtf8("trating"));
        trating->resize(1101, 700);
        trating->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/inside.jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}\n"
"QSpinBox{\n"
"	\n"
"	alternate-background-color: rgb(85, 255, 0);\n"
"}"));
        pushButton = new QPushButton(trating);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 470, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	background-color: grey;\n"
"   border-radius:6px;\n"
"}"));
        label_pic = new QLabel(trating);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(420, 0, 201, 141));
        label_pic->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        pushButton_2 = new QPushButton(trating);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1010, 0, 91, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        lineEdit_2 = new QLineEdit(trating);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(450, 300, 327, 42));
        lineEdit_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        label = new QLabel(trating);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 290, 241, 51));
        label->setStyleSheet(QString::fromUtf8("font: 87 13pt \"Segoe UI Black\";"));
        spinBox = new QSpinBox(trating);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(450, 350, 91, 51));
        spinBox->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"	image: url(:/img/img/star - logo.png);\n"
"background:black;\n"
"color:white;\n"
"font: 87 22pt \"Segoe UI Black\";\n"
"border:black;\n"
"}\n"
"QSpinBox::up-arrow{background:white;\n"
"}\n"
"QSpinBox::up-arrow::hover{background:rgb(255, 170, 0);\n"
"}\n"
"QSpinBox::down-arrow{background:white;}\n"
"QSpinBox::down-arrow::hover{background:rgb(255, 170, 0);\n"
"}"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(5);
        label_2 = new QLabel(trating);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 350, 91, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 13pt \"Segoe UI Black\";"));
        label_3 = new QLabel(trating);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 150, 251, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 87 18pt \"Segoe UI Black\";"));

        retranslateUi(trating);

        QMetaObject::connectSlotsByName(trating);
    } // setupUi

    void retranslateUi(QDialog *trating)
    {
        trating->setWindowTitle(QCoreApplication::translate("trating", "Rate", nullptr));
        pushButton->setText(QCoreApplication::translate("trating", "Rate", nullptr));
        label_pic->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QCoreApplication::translate("trating", "Tutor's Username", nullptr));
        label_2->setText(QCoreApplication::translate("trating", "Rating", nullptr));
        label_3->setText(QCoreApplication::translate("trating", "Rate a  Tutor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class trating: public Ui_trating {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRATING_H
