/********************************************************************************
** Form generated from reading UI file 'apply.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLY_H
#define UI_APPLY_H

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

class Ui_apply
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLabel *label;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_apply;
    QLabel *label_3;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_rad;
    QLineEdit *lineEdit_group;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_rec;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_name;
    QLabel *label_rad;
    QLabel *label_group;
    QLabel *label_email;
    QLabel *label_rec;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_inst;
    QLineEdit *lineEdit_class;
    QLineEdit *lineEdit_ac;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_phone;
    QLabel *label_ins;
    QLabel *label_class;
    QLabel *label_ac;
    QPushButton *bbn;

    void setupUi(QDialog *apply)
    {
        if (apply->objectName().isEmpty())
            apply->setObjectName(QString::fromUtf8("apply"));
        apply->resize(1101, 700);
        apply->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/inside.jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        layoutWidget_2 = new QWidget(apply);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 510, 341, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(label_2);

        dateEdit = new QDateEdit(layoutWidget_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setStyleSheet(QString::fromUtf8("background:black;\n"
"color:white;\n"
"font: 87 10pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(dateEdit);

        label = new QLabel(apply);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 180, 281, 41));
        label->setStyleSheet(QString::fromUtf8("font: 87 10pt \"Segoe UI Black\";\n"
"text-decoration: underline;\n"
"font:87 15pt \"Segoe UI Black\";"));
        layoutWidget_3 = new QWidget(apply);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(490, 460, 608, 46));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_3 = new QRadioButton(layoutWidget_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_3->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_3->addWidget(radioButton_4);

        pushButton_apply = new QPushButton(apply);
        pushButton_apply->setObjectName(QString::fromUtf8("pushButton_apply"));
        pushButton_apply->setGeometry(QRect(430, 610, 131, 51));
        pushButton_apply->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_3 = new QLabel(apply);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 10, 201, 101));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        layoutWidget_7 = new QWidget(apply);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(490, 510, 339, 46));
        horizontalLayout = new QHBoxLayout(layoutWidget_7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget_7);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget_7);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(radioButton_2);

        layoutWidget = new QWidget(apply);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 270, 331, 238));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_rad = new QLineEdit(layoutWidget);
        lineEdit_rad->setObjectName(QString::fromUtf8("lineEdit_rad"));
        lineEdit_rad->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_rad);

        lineEdit_group = new QLineEdit(layoutWidget);
        lineEdit_group->setObjectName(QString::fromUtf8("lineEdit_group"));
        lineEdit_group->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_group);

        lineEdit_email = new QLineEdit(layoutWidget);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_email);


        verticalLayout_5->addLayout(verticalLayout);

        lineEdit_rec = new QLineEdit(layoutWidget);
        lineEdit_rec->setObjectName(QString::fromUtf8("lineEdit_rec"));
        lineEdit_rec->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_5->addWidget(lineEdit_rec);

        layoutWidget1 = new QWidget(apply);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 270, 138, 228));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_name = new QLabel(layoutWidget1);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_4->addWidget(label_name);

        label_rad = new QLabel(layoutWidget1);
        label_rad->setObjectName(QString::fromUtf8("label_rad"));
        label_rad->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_4->addWidget(label_rad);

        label_group = new QLabel(layoutWidget1);
        label_group->setObjectName(QString::fromUtf8("label_group"));
        label_group->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_4->addWidget(label_group);

        label_email = new QLabel(layoutWidget1);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_4->addWidget(label_email);


        verticalLayout_6->addLayout(verticalLayout_4);

        label_rec = new QLabel(layoutWidget1);
        label_rec->setObjectName(QString::fromUtf8("label_rec"));
        label_rec->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_6->addWidget(label_rec);

        layoutWidget2 = new QWidget(apply);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(670, 270, 331, 190));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_phone = new QLineEdit(layoutWidget2);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));
        lineEdit_phone->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_2->addWidget(lineEdit_phone);

        lineEdit_inst = new QLineEdit(layoutWidget2);
        lineEdit_inst->setObjectName(QString::fromUtf8("lineEdit_inst"));
        lineEdit_inst->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_2->addWidget(lineEdit_inst);

        lineEdit_class = new QLineEdit(layoutWidget2);
        lineEdit_class->setObjectName(QString::fromUtf8("lineEdit_class"));
        lineEdit_class->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_2->addWidget(lineEdit_class);


        verticalLayout_7->addLayout(verticalLayout_2);

        lineEdit_ac = new QLineEdit(layoutWidget2);
        lineEdit_ac->setObjectName(QString::fromUtf8("lineEdit_ac"));
        lineEdit_ac->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_7->addWidget(lineEdit_ac);

        layoutWidget3 = new QWidget(apply);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(490, 270, 174, 182));
        verticalLayout_8 = new QVBoxLayout(layoutWidget3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_phone = new QLabel(layoutWidget3);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));
        label_phone->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_3->addWidget(label_phone);

        label_ins = new QLabel(layoutWidget3);
        label_ins->setObjectName(QString::fromUtf8("label_ins"));
        label_ins->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_3->addWidget(label_ins);

        label_class = new QLabel(layoutWidget3);
        label_class->setObjectName(QString::fromUtf8("label_class"));
        label_class->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_3->addWidget(label_class);


        verticalLayout_8->addLayout(verticalLayout_3);

        label_ac = new QLabel(layoutWidget3);
        label_ac->setObjectName(QString::fromUtf8("label_ac"));
        label_ac->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_8->addWidget(label_ac);

        bbn = new QPushButton(apply);
        bbn->setObjectName(QString::fromUtf8("bbn"));
        bbn->setGeometry(QRect(990, 0, 111, 61));
        bbn->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));

        retranslateUi(apply);

        QMetaObject::connectSlotsByName(apply);
    } // setupUi

    void retranslateUi(QDialog *apply)
    {
        apply->setWindowTitle(QCoreApplication::translate("apply", "Apply", nullptr));
        label_2->setText(QCoreApplication::translate("apply", "Date of Birth", nullptr));
        label->setText(QCoreApplication::translate("apply", "Apply for a Tution", nullptr));
        radioButton_3->setText(QCoreApplication::translate("apply", "English Medium", nullptr));
        radioButton_4->setText(QCoreApplication::translate("apply", "National Curriculam", nullptr));
        pushButton_apply->setText(QCoreApplication::translate("apply", "Apply", nullptr));
        label_3->setText(QString());
        radioButton->setText(QCoreApplication::translate("apply", "Male", nullptr));
        radioButton_2->setText(QCoreApplication::translate("apply", "Female", nullptr));
        label_name->setText(QCoreApplication::translate("apply", "Name", nullptr));
        label_rad->setText(QCoreApplication::translate("apply", "Address", nullptr));
        label_group->setText(QCoreApplication::translate("apply", "Group", nullptr));
        label_email->setText(QCoreApplication::translate("apply", "Email", nullptr));
        label_rec->setText(QCoreApplication::translate("apply", "Recruiter", nullptr));
        label_phone->setText(QCoreApplication::translate("apply", "Phone", nullptr));
        label_ins->setText(QCoreApplication::translate("apply", "Institution", nullptr));
        label_class->setText(QCoreApplication::translate("apply", "Class/Dept.", nullptr));
        label_ac->setText(QCoreApplication::translate("apply", "Apply Code", nullptr));
        bbn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class apply: public Ui_apply {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLY_H
