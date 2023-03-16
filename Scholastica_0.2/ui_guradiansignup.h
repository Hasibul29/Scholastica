/********************************************************************************
** Form generated from reading UI file 'guradiansignup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GURADIANSIGNUP_H
#define UI_GURADIANSIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guradiansignup
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_phone_2;
    QLineEdit *lineEdit_inst_2;
    QLineEdit *lineEdit_class_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDateEdit *dateEdit_2;
    QLabel *label;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_name_2;
    QLineEdit *lineEdit_city_2;
    QLineEdit *lineEdit_group_2;
    QLineEdit *lineEdit_pass_2;
    QPushButton *pushButton_signup;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_name_2;
    QLabel *label_city_2;
    QLabel *label_group_2;
    QLabel *label_pass_2;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_phone_2;
    QLabel *label_ins_2;
    QLabel *label_class_2;
    QLabel *label_4;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QLineEdit *lineEdit_un;
    QLabel *label_un;
    QPushButton *pushButton;

    void setupUi(QDialog *guradiansignup)
    {
        if (guradiansignup->objectName().isEmpty())
            guradiansignup->setObjectName(QString::fromUtf8("guradiansignup"));
        guradiansignup->resize(1105, 700);
        guradiansignup->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/1772226 (1).jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        layoutWidget = new QWidget(guradiansignup);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(730, 250, 329, 140));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_phone_2 = new QLineEdit(layoutWidget);
        lineEdit_phone_2->setObjectName(QString::fromUtf8("lineEdit_phone_2"));
        lineEdit_phone_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_5->addWidget(lineEdit_phone_2);

        lineEdit_inst_2 = new QLineEdit(layoutWidget);
        lineEdit_inst_2->setObjectName(QString::fromUtf8("lineEdit_inst_2"));
        lineEdit_inst_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_5->addWidget(lineEdit_inst_2);

        lineEdit_class_2 = new QLineEdit(layoutWidget);
        lineEdit_class_2->setObjectName(QString::fromUtf8("lineEdit_class_2"));
        lineEdit_class_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_5->addWidget(lineEdit_class_2);

        layoutWidget_2 = new QWidget(guradiansignup);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(550, 390, 341, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_4->addWidget(label_3);

        dateEdit_2 = new QDateEdit(layoutWidget_2);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setStyleSheet(QString::fromUtf8("background:black;\n"
"color:rgb(255, 215, 52);\n"
"font: 87 10pt \"Segoe UI Black\";"));

        horizontalLayout_4->addWidget(dateEdit_2);

        label = new QLabel(guradiansignup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 190, 331, 41));
        label->setStyleSheet(QString::fromUtf8("font: 87 10pt \"Segoe UI Black\";\n"
"text-decoration: underline;\n"
"font:87 15pt \"Segoe UI Black\";"));
        layoutWidget_3 = new QWidget(guradiansignup);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(50, 500, 608, 46));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        radioButton_5 = new QRadioButton(layoutWidget_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_5->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(layoutWidget_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_5->addWidget(radioButton_6);

        layoutWidget_4 = new QWidget(guradiansignup);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(211, 251, 329, 188));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_name_2 = new QLineEdit(layoutWidget_4);
        lineEdit_name_2->setObjectName(QString::fromUtf8("lineEdit_name_2"));
        lineEdit_name_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_6->addWidget(lineEdit_name_2);

        lineEdit_city_2 = new QLineEdit(layoutWidget_4);
        lineEdit_city_2->setObjectName(QString::fromUtf8("lineEdit_city_2"));
        lineEdit_city_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_6->addWidget(lineEdit_city_2);

        lineEdit_group_2 = new QLineEdit(layoutWidget_4);
        lineEdit_group_2->setObjectName(QString::fromUtf8("lineEdit_group_2"));
        lineEdit_group_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_6->addWidget(lineEdit_group_2);

        lineEdit_pass_2 = new QLineEdit(layoutWidget_4);
        lineEdit_pass_2->setObjectName(QString::fromUtf8("lineEdit_pass_2"));
        lineEdit_pass_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_6->addWidget(lineEdit_pass_2);

        pushButton_signup = new QPushButton(guradiansignup);
        pushButton_signup->setObjectName(QString::fromUtf8("pushButton_signup"));
        pushButton_signup->setGeometry(QRect(440, 580, 131, 51));
        pushButton_signup->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        layoutWidget_5 = new QWidget(guradiansignup);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(60, 251, 145, 180));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_name_2 = new QLabel(layoutWidget_5);
        label_name_2->setObjectName(QString::fromUtf8("label_name_2"));
        label_name_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_7->addWidget(label_name_2);

        label_city_2 = new QLabel(layoutWidget_5);
        label_city_2->setObjectName(QString::fromUtf8("label_city_2"));
        label_city_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_7->addWidget(label_city_2);

        label_group_2 = new QLabel(layoutWidget_5);
        label_group_2->setObjectName(QString::fromUtf8("label_group_2"));
        label_group_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_7->addWidget(label_group_2);

        label_pass_2 = new QLabel(layoutWidget_5);
        label_pass_2->setObjectName(QString::fromUtf8("label_pass_2"));
        label_pass_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_7->addWidget(label_pass_2);

        layoutWidget_6 = new QWidget(guradiansignup);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(550, 250, 172, 134));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_phone_2 = new QLabel(layoutWidget_6);
        label_phone_2->setObjectName(QString::fromUtf8("label_phone_2"));
        label_phone_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_8->addWidget(label_phone_2);

        label_ins_2 = new QLabel(layoutWidget_6);
        label_ins_2->setObjectName(QString::fromUtf8("label_ins_2"));
        label_ins_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_8->addWidget(label_ins_2);

        label_class_2 = new QLabel(layoutWidget_6);
        label_class_2->setObjectName(QString::fromUtf8("label_class_2"));
        label_class_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_8->addWidget(label_class_2);

        label_4 = new QLabel(guradiansignup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 10, 201, 101));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        layoutWidget_7 = new QWidget(guradiansignup);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(550, 450, 252, 46));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioButton_7 = new QRadioButton(layoutWidget_7);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_6->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(layoutWidget_7);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_6->addWidget(radioButton_8);

        lineEdit_un = new QLineEdit(guradiansignup);
        lineEdit_un->setObjectName(QString::fromUtf8("lineEdit_un"));
        lineEdit_un->setGeometry(QRect(210, 450, 327, 42));
        lineEdit_un->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        label_un = new QLabel(guradiansignup);
        label_un->setObjectName(QString::fromUtf8("label_un"));
        label_un->setGeometry(QRect(60, 440, 151, 40));
        label_un->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));
        pushButton = new QPushButton(guradiansignup);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(990, 10, 111, 81));
        pushButton->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"border:yellow}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(255, 170, 0);\n"
"   border-radius:6px;\n"
"}"));

        retranslateUi(guradiansignup);

        QMetaObject::connectSlotsByName(guradiansignup);
    } // setupUi

    void retranslateUi(QDialog *guradiansignup)
    {
        guradiansignup->setWindowTitle(QCoreApplication::translate("guradiansignup", "Signup", nullptr));
        label_3->setText(QCoreApplication::translate("guradiansignup", "Date of Birth", nullptr));
        label->setText(QCoreApplication::translate("guradiansignup", "Sign Up as a Guardian", nullptr));
        radioButton_5->setText(QCoreApplication::translate("guradiansignup", "National Curriculam", nullptr));
        radioButton_6->setText(QCoreApplication::translate("guradiansignup", "English Medium", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("guradiansignup", "Sign Up", nullptr));
        label_name_2->setText(QCoreApplication::translate("guradiansignup", "Name", nullptr));
        label_city_2->setText(QCoreApplication::translate("guradiansignup", "City", nullptr));
        label_group_2->setText(QCoreApplication::translate("guradiansignup", "Group", nullptr));
        label_pass_2->setText(QCoreApplication::translate("guradiansignup", "Password", nullptr));
        label_phone_2->setText(QCoreApplication::translate("guradiansignup", "Phone", nullptr));
        label_ins_2->setText(QCoreApplication::translate("guradiansignup", "Institution", nullptr));
        label_class_2->setText(QCoreApplication::translate("guradiansignup", "Class/Dept.", nullptr));
        label_4->setText(QString());
        radioButton_7->setText(QCoreApplication::translate("guradiansignup", "Male", nullptr));
        radioButton_8->setText(QCoreApplication::translate("guradiansignup", "Female", nullptr));
        label_un->setText(QCoreApplication::translate("guradiansignup", "Username", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class guradiansignup: public Ui_guradiansignup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GURADIANSIGNUP_H
