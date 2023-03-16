/********************************************************************************
** Form generated from reading UI file 'guardianlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUARDIANLOGIN_H
#define UI_GUARDIANLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guardianlogin
{
public:
    QLabel *label_pic;
    QPushButton *pushButton_login;
    QLabel *label_pass;
    QLineEdit *lineEdit_phone;
    QLabel *label_phone;
    QLineEdit *lineEdit_pass;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_ques;
    QPushButton *pushButton_signup;
    QPushButton *pushButton_3;

    void setupUi(QDialog *guardianlogin)
    {
        if (guardianlogin->objectName().isEmpty())
            guardianlogin->setObjectName(QString::fromUtf8("guardianlogin"));
        guardianlogin->resize(1178, 668);
        guardianlogin->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/1772226 (1).jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        label_pic = new QLabel(guardianlogin);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(500, 0, 201, 141));
        label_pic->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        pushButton_login = new QPushButton(guardianlogin);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(510, 460, 191, 71));
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 13pt \"Segoe UI Black\";\n"
"border:black;\n"
"}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(255, 170, 0);\n"
"   border-radius:6px;\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color:rgb(170, 0, 0);\n"
"   border-radius:6px;\n"
"}\n"
""));
        label_pass = new QLabel(guardianlogin);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setGeometry(QRect(190, 350, 201, 61));
        label_pass->setStyleSheet(QString::fromUtf8("font: 87 20pt \"Segoe UI Black\";"));
        lineEdit_phone = new QLineEdit(guardianlogin);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));
        lineEdit_phone->setGeometry(QRect(440, 280, 391, 51));
        lineEdit_phone->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        label_phone = new QLabel(guardianlogin);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));
        label_phone->setGeometry(QRect(190, 270, 201, 61));
        label_phone->setStyleSheet(QString::fromUtf8("font: 87 20pt \"Segoe UI Black\";"));
        lineEdit_pass = new QLineEdit(guardianlogin);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(440, 360, 391, 51));
        lineEdit_pass->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        layoutWidget_2 = new QWidget(guardianlogin);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(440, 550, 314, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_ques = new QLabel(layoutWidget_2);
        label_ques->setObjectName(QString::fromUtf8("label_ques"));
        label_ques->setStyleSheet(QString::fromUtf8("font: 87 10pt \"Segoe UI Black\";"));

        horizontalLayout_3->addWidget(label_ques);

        pushButton_signup = new QPushButton(layoutWidget_2);
        pushButton_signup->setObjectName(QString::fromUtf8("pushButton_signup"));
        pushButton_signup->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:transparent;\n"
"color:black;\n"
"text-decoration: underline;\n"
"font: 87 10pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_signup);

        pushButton_3 = new QPushButton(guardianlogin);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 0, 201, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:transparent;\n"
"color:black;\n"
"text-decoration: underline;\n"
"font: 87 10pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        retranslateUi(guardianlogin);

        QMetaObject::connectSlotsByName(guardianlogin);
    } // setupUi

    void retranslateUi(QDialog *guardianlogin)
    {
        guardianlogin->setWindowTitle(QCoreApplication::translate("guardianlogin", "Guardian Login", nullptr));
        label_pic->setText(QString());
        pushButton_login->setText(QCoreApplication::translate("guardianlogin", "Login", nullptr));
        label_pass->setText(QCoreApplication::translate("guardianlogin", "Password", nullptr));
        lineEdit_phone->setText(QString());
        label_phone->setText(QCoreApplication::translate("guardianlogin", "Username", nullptr));
        label_ques->setText(QCoreApplication::translate("guardianlogin", "Don't have an account?", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("guardianlogin", "Sign Up", nullptr));
        pushButton_3->setText(QCoreApplication::translate("guardianlogin", "Switch to Tutor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guardianlogin: public Ui_guardianlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUARDIANLOGIN_H
