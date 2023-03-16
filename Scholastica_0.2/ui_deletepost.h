/********************************************************************************
** Form generated from reading UI file 'deletepost.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPOST_H
#define UI_DELETEPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletepost
{
public:
    QLabel *label;
    QPushButton *pushButton_delete;
    QLabel *label_3;
    QPushButton *bbn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_ac;
    QLineEdit *lineEdit_un;
    QLineEdit *lineEdit_pass;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_name;
    QLabel *label_name_3;
    QLabel *label_name_2;

    void setupUi(QDialog *deletepost)
    {
        if (deletepost->objectName().isEmpty())
            deletepost->setObjectName(QString::fromUtf8("deletepost"));
        deletepost->resize(1107, 496);
        deletepost->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/inside.jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        label = new QLabel(deletepost);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 120, 381, 61));
        label->setStyleSheet(QString::fromUtf8("font: 87 10pt \"Segoe UI Black\";\n"
"text-decoration: underline;\n"
"font:87 15pt \"Segoe UI Black\";"));
        pushButton_delete = new QPushButton(deletepost);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(470, 430, 131, 51));
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_3 = new QLabel(deletepost);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 0, 201, 101));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        bbn = new QPushButton(deletepost);
        bbn->setObjectName(QString::fromUtf8("bbn"));
        bbn->setGeometry(QRect(1010, 0, 91, 61));
        bbn->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/backbutoonyblack.jpg);\n"
"\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        layoutWidget = new QWidget(deletepost);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(470, 240, 329, 140));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_ac = new QLineEdit(layoutWidget);
        lineEdit_ac->setObjectName(QString::fromUtf8("lineEdit_ac"));
        lineEdit_ac->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_ac);

        lineEdit_un = new QLineEdit(layoutWidget);
        lineEdit_un->setObjectName(QString::fromUtf8("lineEdit_un"));
        lineEdit_un->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_un);

        lineEdit_pass = new QLineEdit(layoutWidget);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout->addWidget(lineEdit_pass);

        layoutWidget1 = new QWidget(deletepost);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 240, 255, 134));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(layoutWidget1);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_2->addWidget(label_name);

        label_name_3 = new QLabel(layoutWidget1);
        label_name_3->setObjectName(QString::fromUtf8("label_name_3"));
        label_name_3->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_2->addWidget(label_name_3);

        label_name_2 = new QLabel(layoutWidget1);
        label_name_2->setObjectName(QString::fromUtf8("label_name_2"));
        label_name_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_2->addWidget(label_name_2);


        retranslateUi(deletepost);

        QMetaObject::connectSlotsByName(deletepost);
    } // setupUi

    void retranslateUi(QDialog *deletepost)
    {
        deletepost->setWindowTitle(QCoreApplication::translate("deletepost", "Manage", nullptr));
        label->setText(QCoreApplication::translate("deletepost", "Delete Post and Requests", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("deletepost", "Delete", nullptr));
        label_3->setText(QString());
        bbn->setText(QString());
        label_name->setText(QCoreApplication::translate("deletepost", "Apply Code", nullptr));
        label_name_3->setText(QCoreApplication::translate("deletepost", "Username", nullptr));
        label_name_2->setText(QCoreApplication::translate("deletepost", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletepost: public Ui_deletepost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPOST_H
