/********************************************************************************
** Form generated from reading UI file 'guardianhome.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUARDIANHOME_H
#define UI_GUARDIANHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guardianhome
{
public:
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QLabel *label_6;
    QPushButton *pushButton_Post;
    QLabel *label_icon;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_sal;
    QLabel *label_gins;
    QLabel *label_gclass;
    QLabel *label_use_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_sub;
    QLabel *label_day;
    QLabel *label_addr;
    QLabel *label_ggroup;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_sub;
    QLineEdit *lineEdit_day;
    QLineEdit *lineEdit_addr;
    QLineEdit *lineEdit_ggroup;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_sal;
    QLineEdit *lineEdit_gins;
    QLineEdit *lineEdit_gclass;
    QLineEdit *lineEdit_apc;

    void setupUi(QDialog *guardianhome)
    {
        if (guardianhome->objectName().isEmpty())
            guardianhome->setObjectName(QString::fromUtf8("guardianhome"));
        guardianhome->resize(1101, 700);
        guardianhome->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/inside.jpg);}\n"
"QMessageBox{\n"
"    font: 87 10pt \"Segoe UI Black\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        layoutWidget_7 = new QWidget(guardianhome);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(640, 490, 252, 46));
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

        label = new QLabel(guardianhome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 170, 211, 61));
        label->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));
        pushButton_2 = new QPushButton(guardianhome);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 81, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/request.png);\n"
"\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label_2 = new QLabel(guardianhome);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        pushButton_3 = new QPushButton(guardianhome);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 0, 131, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/update.png);\n"
"\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label_4 = new QLabel(guardianhome);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 60, 131, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        pushButton_4 = new QPushButton(guardianhome);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1000, 10, 91, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/logout2.png);\n"
"\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label_5 = new QLabel(guardianhome);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1020, 70, 69, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        pushButton_5 = new QPushButton(guardianhome);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(810, 10, 131, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/report2.png);\n"
"\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label_6 = new QLabel(guardianhome);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(840, 70, 69, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        pushButton_Post = new QPushButton(guardianhome);
        pushButton_Post->setObjectName(QString::fromUtf8("pushButton_Post"));
        pushButton_Post->setGeometry(QRect(470, 560, 131, 51));
        pushButton_Post->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_icon = new QLabel(guardianhome);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(440, 0, 201, 111));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        layoutWidget = new QWidget(guardianhome);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 490, 610, 46));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(radioButton_4);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(radioButton_3);

        layoutWidget1 = new QWidget(guardianhome);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(491, 292, 172, 180));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_sal = new QLabel(layoutWidget1);
        label_sal->setObjectName(QString::fromUtf8("label_sal"));
        label_sal->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_2->addWidget(label_sal);

        label_gins = new QLabel(layoutWidget1);
        label_gins->setObjectName(QString::fromUtf8("label_gins"));
        label_gins->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_2->addWidget(label_gins);

        label_gclass = new QLabel(layoutWidget1);
        label_gclass->setObjectName(QString::fromUtf8("label_gclass"));
        label_gclass->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_2->addWidget(label_gclass);

        label_use_2 = new QLabel(layoutWidget1);
        label_use_2->setObjectName(QString::fromUtf8("label_use_2"));
        label_use_2->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout_2->addWidget(label_use_2);

        layoutWidget2 = new QWidget(guardianhome);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(2, 293, 126, 180));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_sub = new QLabel(layoutWidget2);
        label_sub->setObjectName(QString::fromUtf8("label_sub"));
        label_sub->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_sub);

        label_day = new QLabel(layoutWidget2);
        label_day->setObjectName(QString::fromUtf8("label_day"));
        label_day->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_day);

        label_addr = new QLabel(layoutWidget2);
        label_addr->setObjectName(QString::fromUtf8("label_addr"));
        label_addr->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_addr);

        label_ggroup = new QLabel(layoutWidget2);
        label_ggroup->setObjectName(QString::fromUtf8("label_ggroup"));
        label_ggroup->setStyleSheet(QString::fromUtf8("font: 87 15pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_ggroup);

        layoutWidget3 = new QWidget(guardianhome);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(152, 293, 329, 188));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_sub = new QLineEdit(layoutWidget3);
        lineEdit_sub->setObjectName(QString::fromUtf8("lineEdit_sub"));
        lineEdit_sub->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_3->addWidget(lineEdit_sub);

        lineEdit_day = new QLineEdit(layoutWidget3);
        lineEdit_day->setObjectName(QString::fromUtf8("lineEdit_day"));
        lineEdit_day->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}\n"
""));

        verticalLayout_3->addWidget(lineEdit_day);

        lineEdit_addr = new QLineEdit(layoutWidget3);
        lineEdit_addr->setObjectName(QString::fromUtf8("lineEdit_addr"));
        lineEdit_addr->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_3->addWidget(lineEdit_addr);

        lineEdit_ggroup = new QLineEdit(layoutWidget3);
        lineEdit_ggroup->setObjectName(QString::fromUtf8("lineEdit_ggroup"));
        lineEdit_ggroup->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_3->addWidget(lineEdit_ggroup);

        layoutWidget4 = new QWidget(guardianhome);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(671, 292, 329, 188));
        verticalLayout_4 = new QVBoxLayout(layoutWidget4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_sal = new QLineEdit(layoutWidget4);
        lineEdit_sal->setObjectName(QString::fromUtf8("lineEdit_sal"));
        lineEdit_sal->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_4->addWidget(lineEdit_sal);

        lineEdit_gins = new QLineEdit(layoutWidget4);
        lineEdit_gins->setObjectName(QString::fromUtf8("lineEdit_gins"));
        lineEdit_gins->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_4->addWidget(lineEdit_gins);

        lineEdit_gclass = new QLineEdit(layoutWidget4);
        lineEdit_gclass->setObjectName(QString::fromUtf8("lineEdit_gclass"));
        lineEdit_gclass->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_4->addWidget(lineEdit_gclass);

        lineEdit_apc = new QLineEdit(layoutWidget4);
        lineEdit_apc->setObjectName(QString::fromUtf8("lineEdit_apc"));
        lineEdit_apc->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));

        verticalLayout_4->addWidget(lineEdit_apc);


        retranslateUi(guardianhome);

        QMetaObject::connectSlotsByName(guardianhome);
    } // setupUi

    void retranslateUi(QDialog *guardianhome)
    {
        guardianhome->setWindowTitle(QCoreApplication::translate("guardianhome", "Guardian Home", nullptr));
        radioButton->setText(QCoreApplication::translate("guardianhome", "Male", nullptr));
        radioButton_2->setText(QCoreApplication::translate("guardianhome", "Female", nullptr));
        label->setText(QCoreApplication::translate("guardianhome", "Post a Tution", nullptr));
        pushButton_2->setText(QString());
        label_2->setText(QCoreApplication::translate("guardianhome", "Requests", nullptr));
        pushButton_3->setText(QString());
        label_4->setText(QCoreApplication::translate("guardianhome", "Update Profile", nullptr));
        pushButton_4->setText(QString());
        label_5->setText(QCoreApplication::translate("guardianhome", "Logout", nullptr));
        pushButton_5->setText(QString());
        label_6->setText(QCoreApplication::translate("guardianhome", "Report", nullptr));
        pushButton_Post->setText(QCoreApplication::translate("guardianhome", "Post", nullptr));
        label_icon->setText(QString());
        radioButton_4->setText(QCoreApplication::translate("guardianhome", "National Curriculum", nullptr));
        radioButton_3->setText(QCoreApplication::translate("guardianhome", "English Medium", nullptr));
        label_sal->setText(QCoreApplication::translate("guardianhome", "Salary", nullptr));
        label_gins->setText(QCoreApplication::translate("guardianhome", "Institution", nullptr));
        label_gclass->setText(QCoreApplication::translate("guardianhome", "Class/Dept.", nullptr));
        label_use_2->setText(QCoreApplication::translate("guardianhome", "Apply Code", nullptr));
        label_sub->setText(QCoreApplication::translate("guardianhome", "Subjects", nullptr));
        label_day->setText(QCoreApplication::translate("guardianhome", "Day", nullptr));
        label_addr->setText(QCoreApplication::translate("guardianhome", "Address", nullptr));
        label_ggroup->setText(QCoreApplication::translate("guardianhome", "Group", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guardianhome: public Ui_guardianhome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUARDIANHOME_H
