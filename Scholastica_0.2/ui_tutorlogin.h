/********************************************************************************
** Form generated from reading UI file 'tutorlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORLOGIN_H
#define UI_TUTORLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tutorlogin
{
public:
    QLabel *label_pass;
    QLabel *label_un2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_un2;
    QLabel *label_pic;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_ques;
    QPushButton *pushButton_signup;
    QPushButton *pushButton_login;
    QPushButton *pushButton_3;

    void setupUi(QDialog *tutorlogin)
    {
        if (tutorlogin->objectName().isEmpty())
            tutorlogin->setObjectName(QString::fromUtf8("tutorlogin"));
        tutorlogin->resize(1178, 661);
        tutorlogin->setStyleSheet(QString::fromUtf8("QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"*{background-image: url(:/img/img/1772226 (1).jpg);}\n"
"\n"
""));
        label_pass = new QLabel(tutorlogin);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setGeometry(QRect(170, 360, 201, 61));
        label_pass->setStyleSheet(QString::fromUtf8("font: 87 20pt \"Segoe UI Black\";"));
        label_un2 = new QLabel(tutorlogin);
        label_un2->setObjectName(QString::fromUtf8("label_un2"));
        label_un2->setGeometry(QRect(170, 280, 201, 61));
        label_un2->setStyleSheet(QString::fromUtf8("font: 87 20pt \"Segoe UI Black\";"));
        layoutWidget = new QWidget(tutorlogin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(700, 850, 314, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 87 10pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(label);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:transparent;\n"
"color:black;\n"
"text-decoration: underline;\n"
"font: 87 10pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        lineEdit_pass = new QLineEdit(tutorlogin);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(420, 370, 391, 51));
        lineEdit_pass->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        lineEdit_un2 = new QLineEdit(tutorlogin);
        lineEdit_un2->setObjectName(QString::fromUtf8("lineEdit_un2"));
        lineEdit_un2->setGeometry(QRect(420, 290, 391, 51));
        lineEdit_un2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        label_pic = new QLabel(tutorlogin);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(490, 10, 201, 141));
        label_pic->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        layoutWidget_2 = new QWidget(tutorlogin);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(430, 590, 314, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_ques = new QLabel(tutorlogin);
        label_ques->setObjectName(QString::fromUtf8("label_ques"));
        label_ques->setGeometry(QRect(430, 590, 229, 27));
        label_ques->setStyleSheet(QString::fromUtf8("font: 87 10pt \"Segoe UI Black\";"));
        pushButton_signup = new QPushButton(tutorlogin);
        pushButton_signup->setObjectName(QString::fromUtf8("pushButton_signup"));
        pushButton_signup->setGeometry(QRect(550, 590, 312, 27));
        pushButton_signup->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:transparent;\n"
"color:black;\n"
"text-decoration: underline;\n"
"font: 87 10pt \"Segoe UI Black\";\n"
"border:black;\n"
"}\n"
""));
        pushButton_login = new QPushButton(tutorlogin);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(490, 470, 191, 71));
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
        pushButton_3 = new QPushButton(tutorlogin);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 10, 201, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:transparent;\n"
"color:black;\n"
"text-decoration: underline;\n"
"font: 87 10pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        retranslateUi(tutorlogin);

        QMetaObject::connectSlotsByName(tutorlogin);
    } // setupUi

    void retranslateUi(QDialog *tutorlogin)
    {
        tutorlogin->setWindowTitle(QCoreApplication::translate("tutorlogin", "Tutor Login", nullptr));
        label_pass->setText(QCoreApplication::translate("tutorlogin", "Password", nullptr));
        label_un2->setText(QCoreApplication::translate("tutorlogin", "Username", nullptr));
        label->setText(QCoreApplication::translate("tutorlogin", "Don't have an account?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tutorlogin", "Sign Up", nullptr));
        lineEdit_un2->setText(QString());
        label_pic->setText(QString());
        label_ques->setText(QCoreApplication::translate("tutorlogin", "Don't have an account?", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("tutorlogin", "Sign Up", nullptr));
        pushButton_login->setText(QCoreApplication::translate("tutorlogin", "Login", nullptr));
        pushButton_3->setText(QCoreApplication::translate("tutorlogin", "Switch to Guardian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tutorlogin: public Ui_tutorlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORLOGIN_H
