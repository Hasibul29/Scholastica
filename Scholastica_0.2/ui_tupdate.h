/********************************************************************************
** Form generated from reading UI file 'tupdate.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUPDATE_H
#define UI_TUPDATE_H

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

class Ui_tupdate
{
public:
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QPushButton *pushButton;
    QLineEdit *lineEdit_un;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_name_2;
    QLineEdit *lineEdit_city_2;
    QLineEdit *lineEdit_group_2;
    QLineEdit *lineEdit_pass_2;
    QPushButton *pushButton_update;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_phone_2;
    QLineEdit *lineEdit_inst_2;
    QLineEdit *lineEdit_class_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_name_2;
    QLabel *label_city_2;
    QLabel *label_group_2;
    QLabel *label_pass_2;
    QLabel *label;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_phone_2;
    QLabel *label_ins_2;
    QLabel *label_class_2;
    QLabel *label_un;
    QLabel *label_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDateEdit *dateEdit_2;
    QLabel *label_pass_3;
    QLineEdit *lineEdit_ou;
    QLabel *label_pass_4;
    QLineEdit *lineEdit_op;

    void setupUi(QDialog *tupdate)
    {
        if (tupdate->objectName().isEmpty())
            tupdate->setObjectName(QString::fromUtf8("tupdate"));
        tupdate->resize(1114, 761);
        tupdate->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/inside.jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        layoutWidget_7 = new QWidget(tupdate);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(550, 500, 252, 46));
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

        pushButton = new QPushButton(tupdate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1000, 60, 101, 61));
        pushButton->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"border:yellow\n"
"}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        lineEdit_un = new QLineEdit(tupdate);
        lineEdit_un->setObjectName(QString::fromUtf8("lineEdit_un"));
        lineEdit_un->setGeometry(QRect(210, 500, 327, 42));
        lineEdit_un->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        layoutWidget_4 = new QWidget(tupdate);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(211, 301, 329, 188));
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

        pushButton_update = new QPushButton(tupdate);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setGeometry(QRect(440, 690, 181, 51));
        pushButton_update->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:black;\n"
"color:white;\n"
"font: 87 13pt \"Segoe UI Black\";\n"
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
        layoutWidget = new QWidget(tupdate);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(730, 300, 329, 140));
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

        layoutWidget_3 = new QWidget(tupdate);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(50, 550, 608, 46));
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

        layoutWidget_5 = new QWidget(tupdate);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(60, 301, 145, 180));
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

        label = new QLabel(tupdate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 240, 331, 41));
        label->setStyleSheet(QString::fromUtf8("font: 87 10pt \"Segoe UI Black\";\n"
"text-decoration: underline;\n"
"font:87 15pt \"Segoe UI Black\";"));
        layoutWidget_6 = new QWidget(tupdate);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(550, 300, 172, 134));
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

        label_un = new QLabel(tupdate);
        label_un->setObjectName(QString::fromUtf8("label_un"));
        label_un->setGeometry(QRect(60, 490, 151, 40));
        label_un->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));
        label_4 = new QLabel(tupdate);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 60, 201, 101));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        layoutWidget_2 = new QWidget(tupdate);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(550, 440, 341, 51));
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

        label_pass_3 = new QLabel(tupdate);
        label_pass_3->setObjectName(QString::fromUtf8("label_pass_3"));
        label_pass_3->setGeometry(QRect(20, 610, 211, 40));
        label_pass_3->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));
        lineEdit_ou = new QLineEdit(tupdate);
        lineEdit_ou->setObjectName(QString::fromUtf8("lineEdit_ou"));
        lineEdit_ou->setGeometry(QRect(230, 610, 327, 42));
        lineEdit_ou->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        label_pass_4 = new QLabel(tupdate);
        label_pass_4->setObjectName(QString::fromUtf8("label_pass_4"));
        label_pass_4->setGeometry(QRect(560, 610, 201, 40));
        label_pass_4->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));
        lineEdit_op = new QLineEdit(tupdate);
        lineEdit_op->setObjectName(QString::fromUtf8("lineEdit_op"));
        lineEdit_op->setGeometry(QRect(780, 610, 327, 42));
        lineEdit_op->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        retranslateUi(tupdate);

        QMetaObject::connectSlotsByName(tupdate);
    } // setupUi

    void retranslateUi(QDialog *tupdate)
    {
        tupdate->setWindowTitle(QCoreApplication::translate("tupdate", "Update", nullptr));
        radioButton_7->setText(QCoreApplication::translate("tupdate", "Male", nullptr));
        radioButton_8->setText(QCoreApplication::translate("tupdate", "Female", nullptr));
        pushButton->setText(QString());
        pushButton_update->setText(QCoreApplication::translate("tupdate", "Save Changes", nullptr));
        radioButton_5->setText(QCoreApplication::translate("tupdate", "National Curriculam", nullptr));
        radioButton_6->setText(QCoreApplication::translate("tupdate", "English Medium", nullptr));
        label_name_2->setText(QCoreApplication::translate("tupdate", "Name", nullptr));
        label_city_2->setText(QCoreApplication::translate("tupdate", "City", nullptr));
        label_group_2->setText(QCoreApplication::translate("tupdate", "Group", nullptr));
        label_pass_2->setText(QCoreApplication::translate("tupdate", "Password", nullptr));
        label->setText(QCoreApplication::translate("tupdate", "Update Information", nullptr));
        label_phone_2->setText(QCoreApplication::translate("tupdate", "Phone", nullptr));
        label_ins_2->setText(QCoreApplication::translate("tupdate", "Institution", nullptr));
        label_class_2->setText(QCoreApplication::translate("tupdate", "Class/Dept.", nullptr));
        label_un->setText(QCoreApplication::translate("tupdate", "Username", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("tupdate", "Date of Birth", nullptr));
        label_pass_3->setText(QCoreApplication::translate("tupdate", "Old Username", nullptr));
        label_pass_4->setText(QCoreApplication::translate("tupdate", "Old Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tupdate: public Ui_tupdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUPDATE_H
