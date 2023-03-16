/********************************************************************************
** Form generated from reading UI file 'gupdate.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUPDATE_H
#define UI_GUPDATE_H

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

class Ui_gupdate
{
public:
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_phone_2;
    QLineEdit *lineEdit_inst_2;
    QLineEdit *lineEdit_class_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDateEdit *dateEdit_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_name_2;
    QLineEdit *lineEdit_city_2;
    QLineEdit *lineEdit_group_2;
    QLineEdit *lineEdit_pass_2;
    QLabel *label;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_name_2;
    QLabel *label_city_2;
    QLabel *label_group_2;
    QLabel *label_pass_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *label_un;
    QPushButton *pushButton_update;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QLineEdit *lineEdit_un;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_phone_2;
    QLabel *label_ins_2;
    QLabel *label_class_2;
    QPushButton *pushButton;
    QLabel *label_pass_3;
    QLineEdit *lineEdit_ou;
    QLineEdit *lineEdit_op;
    QLabel *label_pass_4;

    void setupUi(QDialog *gupdate)
    {
        if (gupdate->objectName().isEmpty())
            gupdate->setObjectName(QString::fromUtf8("gupdate"));
        gupdate->resize(1111, 743);
        gupdate->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/inside.jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        label_4 = new QLabel(gupdate);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 10, 201, 101));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        layoutWidget = new QWidget(gupdate);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(730, 250, 329, 140));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_phone_2 = new QLineEdit(layoutWidget);
        lineEdit_phone_2->setObjectName(QString::fromUtf8("lineEdit_phone_2"));
        lineEdit_phone_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_5->addWidget(lineEdit_phone_2);

        lineEdit_inst_2 = new QLineEdit(layoutWidget);
        lineEdit_inst_2->setObjectName(QString::fromUtf8("lineEdit_inst_2"));
        lineEdit_inst_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_5->addWidget(lineEdit_inst_2);

        lineEdit_class_2 = new QLineEdit(layoutWidget);
        lineEdit_class_2->setObjectName(QString::fromUtf8("lineEdit_class_2"));
        lineEdit_class_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_5->addWidget(lineEdit_class_2);

        layoutWidget_2 = new QWidget(gupdate);
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
"color:white;\n"
"font: 87 10pt \"Segoe UI Black\";"));

        horizontalLayout_4->addWidget(dateEdit_2);

        layoutWidget_4 = new QWidget(gupdate);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(211, 251, 329, 188));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_name_2 = new QLineEdit(layoutWidget_4);
        lineEdit_name_2->setObjectName(QString::fromUtf8("lineEdit_name_2"));
        lineEdit_name_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_6->addWidget(lineEdit_name_2);

        lineEdit_city_2 = new QLineEdit(layoutWidget_4);
        lineEdit_city_2->setObjectName(QString::fromUtf8("lineEdit_city_2"));
        lineEdit_city_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_6->addWidget(lineEdit_city_2);

        lineEdit_group_2 = new QLineEdit(layoutWidget_4);
        lineEdit_group_2->setObjectName(QString::fromUtf8("lineEdit_group_2"));
        lineEdit_group_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_6->addWidget(lineEdit_group_2);

        lineEdit_pass_2 = new QLineEdit(layoutWidget_4);
        lineEdit_pass_2->setObjectName(QString::fromUtf8("lineEdit_pass_2"));
        lineEdit_pass_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_6->addWidget(lineEdit_pass_2);

        label = new QLabel(gupdate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 190, 331, 41));
        label->setStyleSheet(QString::fromUtf8("font: 87 10pt \"Segoe UI Black\";\n"
"text-decoration: underline;\n"
"font:87 15pt \"Segoe UI Black\";"));
        layoutWidget_5 = new QWidget(gupdate);
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

        layoutWidget_3 = new QWidget(gupdate);
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

        label_un = new QLabel(gupdate);
        label_un->setObjectName(QString::fromUtf8("label_un"));
        label_un->setGeometry(QRect(60, 440, 151, 40));
        label_un->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));
        pushButton_update = new QPushButton(gupdate);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setGeometry(QRect(460, 660, 181, 51));
        pushButton_update->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        layoutWidget_7 = new QWidget(gupdate);
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

        lineEdit_un = new QLineEdit(gupdate);
        lineEdit_un->setObjectName(QString::fromUtf8("lineEdit_un"));
        lineEdit_un->setGeometry(QRect(210, 450, 327, 42));
        lineEdit_un->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        layoutWidget_6 = new QWidget(gupdate);
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

        pushButton = new QPushButton(gupdate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1000, 10, 101, 61));
        pushButton->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label_pass_3 = new QLabel(gupdate);
        label_pass_3->setObjectName(QString::fromUtf8("label_pass_3"));
        label_pass_3->setGeometry(QRect(20, 580, 211, 40));
        label_pass_3->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));
        lineEdit_ou = new QLineEdit(gupdate);
        lineEdit_ou->setObjectName(QString::fromUtf8("lineEdit_ou"));
        lineEdit_ou->setGeometry(QRect(230, 580, 327, 42));
        lineEdit_ou->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        lineEdit_op = new QLineEdit(gupdate);
        lineEdit_op->setObjectName(QString::fromUtf8("lineEdit_op"));
        lineEdit_op->setGeometry(QRect(780, 580, 327, 42));
        lineEdit_op->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        label_pass_4 = new QLabel(gupdate);
        label_pass_4->setObjectName(QString::fromUtf8("label_pass_4"));
        label_pass_4->setGeometry(QRect(560, 580, 201, 40));
        label_pass_4->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        retranslateUi(gupdate);

        QMetaObject::connectSlotsByName(gupdate);
    } // setupUi

    void retranslateUi(QDialog *gupdate)
    {
        gupdate->setWindowTitle(QCoreApplication::translate("gupdate", "Update", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("gupdate", "Date of Birth", nullptr));
        label->setText(QCoreApplication::translate("gupdate", "Update Information", nullptr));
        label_name_2->setText(QCoreApplication::translate("gupdate", "Name", nullptr));
        label_city_2->setText(QCoreApplication::translate("gupdate", "City", nullptr));
        label_group_2->setText(QCoreApplication::translate("gupdate", "Group", nullptr));
        label_pass_2->setText(QCoreApplication::translate("gupdate", "Password", nullptr));
        radioButton_5->setText(QCoreApplication::translate("gupdate", "National Curriculam", nullptr));
        radioButton_6->setText(QCoreApplication::translate("gupdate", "English Medium", nullptr));
        label_un->setText(QCoreApplication::translate("gupdate", "Username", nullptr));
        pushButton_update->setText(QCoreApplication::translate("gupdate", "Save Changes", nullptr));
        radioButton_7->setText(QCoreApplication::translate("gupdate", "Male", nullptr));
        radioButton_8->setText(QCoreApplication::translate("gupdate", "Female", nullptr));
        label_phone_2->setText(QCoreApplication::translate("gupdate", "Phone", nullptr));
        label_ins_2->setText(QCoreApplication::translate("gupdate", "Institution", nullptr));
        label_class_2->setText(QCoreApplication::translate("gupdate", "Class/Dept.", nullptr));
        pushButton->setText(QString());
        label_pass_3->setText(QCoreApplication::translate("gupdate", "Old Username", nullptr));
        label_pass_4->setText(QCoreApplication::translate("gupdate", "Old Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gupdate: public Ui_gupdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUPDATE_H
