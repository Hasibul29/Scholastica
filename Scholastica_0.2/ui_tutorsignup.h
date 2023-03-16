/********************************************************************************
** Form generated from reading UI file 'tutorsignup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORSIGNUP_H
#define UI_TUTORSIGNUP_H

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

class Ui_tutorsignup
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_inst;
    QLineEdit *lineEdit_class;
    QPushButton *pushButton_signup;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_phone;
    QLabel *label_ins;
    QLabel *label_class;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_city;
    QLineEdit *lineEdit_group;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_un2;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_name;
    QLabel *label_city;
    QLabel *label_group;
    QLabel *label_pass;
    QLabel *label_un2;
    QPushButton *pushButton;

    void setupUi(QDialog *tutorsignup)
    {
        if (tutorsignup->objectName().isEmpty())
            tutorsignup->setObjectName(QString::fromUtf8("tutorsignup"));
        tutorsignup->resize(1107, 702);
        tutorsignup->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/1772226 (1).jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        label = new QLabel(tutorsignup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 150, 281, 41));
        label->setStyleSheet(QString::fromUtf8("font: 87 10pt \"Segoe UI Black\";\n"
"text-decoration: underline;\n"
"font:87 15pt \"Segoe UI Black\";"));
        layoutWidget = new QWidget(tutorsignup);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(730, 270, 329, 140));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_phone = new QLineEdit(layoutWidget);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));
        lineEdit_phone->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_2->addWidget(lineEdit_phone);

        lineEdit_inst = new QLineEdit(layoutWidget);
        lineEdit_inst->setObjectName(QString::fromUtf8("lineEdit_inst"));
        lineEdit_inst->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_2->addWidget(lineEdit_inst);

        lineEdit_class = new QLineEdit(layoutWidget);
        lineEdit_class->setObjectName(QString::fromUtf8("lineEdit_class"));
        lineEdit_class->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_2->addWidget(lineEdit_class);

        pushButton_signup = new QPushButton(tutorsignup);
        pushButton_signup->setObjectName(QString::fromUtf8("pushButton_signup"));
        pushButton_signup->setGeometry(QRect(480, 600, 131, 51));
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
        label_3 = new QLabel(tutorsignup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 10, 201, 101));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        layoutWidget1 = new QWidget(tutorsignup);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(550, 270, 172, 134));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_phone = new QLabel(layoutWidget1);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));
        label_phone->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_3->addWidget(label_phone);

        label_ins = new QLabel(layoutWidget1);
        label_ins->setObjectName(QString::fromUtf8("label_ins"));
        label_ins->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_3->addWidget(label_ins);

        label_class = new QLabel(layoutWidget1);
        label_class->setObjectName(QString::fromUtf8("label_class"));
        label_class->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_3->addWidget(label_class);

        layoutWidget2 = new QWidget(tutorsignup);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(550, 470, 252, 46));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(radioButton_2);

        layoutWidget3 = new QWidget(tutorsignup);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(550, 410, 341, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(label_2);

        dateEdit = new QDateEdit(layoutWidget3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setStyleSheet(QString::fromUtf8("background:black;\n"
"color:rgb(255, 215, 52);\n"
"font: 87 10pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(dateEdit);

        layoutWidget4 = new QWidget(tutorsignup);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(60, 520, 608, 46));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_4 = new QRadioButton(layoutWidget4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_3->addWidget(radioButton_4);

        radioButton_3 = new QRadioButton(layoutWidget4);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_3->addWidget(radioButton_3);

        layoutWidget5 = new QWidget(tutorsignup);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(210, 271, 331, 238));
        verticalLayout_5 = new QVBoxLayout(layoutWidget5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_name = new QLineEdit(layoutWidget5);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_city = new QLineEdit(layoutWidget5);
        lineEdit_city->setObjectName(QString::fromUtf8("lineEdit_city"));
        lineEdit_city->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_city);

        lineEdit_group = new QLineEdit(layoutWidget5);
        lineEdit_group->setObjectName(QString::fromUtf8("lineEdit_group"));
        lineEdit_group->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_group);

        lineEdit_pass = new QLineEdit(layoutWidget5);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_pass);


        verticalLayout_5->addLayout(verticalLayout);

        lineEdit_un2 = new QLineEdit(layoutWidget5);
        lineEdit_un2->setObjectName(QString::fromUtf8("lineEdit_un2"));
        lineEdit_un2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 197, 20);\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_5->addWidget(lineEdit_un2);

        layoutWidget6 = new QWidget(tutorsignup);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(60, 271, 150, 228));
        verticalLayout_6 = new QVBoxLayout(layoutWidget6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_name = new QLabel(layoutWidget6);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_4->addWidget(label_name);

        label_city = new QLabel(layoutWidget6);
        label_city->setObjectName(QString::fromUtf8("label_city"));
        label_city->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_4->addWidget(label_city);

        label_group = new QLabel(layoutWidget6);
        label_group->setObjectName(QString::fromUtf8("label_group"));
        label_group->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_4->addWidget(label_group);

        label_pass = new QLabel(layoutWidget6);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_4->addWidget(label_pass);


        verticalLayout_6->addLayout(verticalLayout_4);

        label_un2 = new QLabel(layoutWidget6);
        label_un2->setObjectName(QString::fromUtf8("label_un2"));
        label_un2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_6->addWidget(label_un2);

        pushButton = new QPushButton(tutorsignup);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(960, 10, 131, 81));
        pushButton->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"border:yellow}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(255, 170, 0);\n"
"   border-radius:6px;\n"
"}"));

        retranslateUi(tutorsignup);

        QMetaObject::connectSlotsByName(tutorsignup);
    } // setupUi

    void retranslateUi(QDialog *tutorsignup)
    {
        tutorsignup->setWindowTitle(QCoreApplication::translate("tutorsignup", "Signup", nullptr));
        label->setText(QCoreApplication::translate("tutorsignup", "Sign Up as a Tutor", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("tutorsignup", "Sign Up", nullptr));
        label_3->setText(QString());
        label_phone->setText(QCoreApplication::translate("tutorsignup", "Phone", nullptr));
        label_ins->setText(QCoreApplication::translate("tutorsignup", "Institution", nullptr));
        label_class->setText(QCoreApplication::translate("tutorsignup", "Class/Dept.", nullptr));
        radioButton->setText(QCoreApplication::translate("tutorsignup", "Male", nullptr));
        radioButton_2->setText(QCoreApplication::translate("tutorsignup", "Female", nullptr));
        label_2->setText(QCoreApplication::translate("tutorsignup", "Date of Birth", nullptr));
        radioButton_4->setText(QCoreApplication::translate("tutorsignup", "National Curriculam", nullptr));
        radioButton_3->setText(QCoreApplication::translate("tutorsignup", "English Medium", nullptr));
        label_name->setText(QCoreApplication::translate("tutorsignup", "Name", nullptr));
        label_city->setText(QCoreApplication::translate("tutorsignup", "City", nullptr));
        label_group->setText(QCoreApplication::translate("tutorsignup", "Group", nullptr));
        label_pass->setText(QCoreApplication::translate("tutorsignup", "Password", nullptr));
        label_un2->setText(QCoreApplication::translate("tutorsignup", "Username", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tutorsignup: public Ui_tutorsignup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORSIGNUP_H
