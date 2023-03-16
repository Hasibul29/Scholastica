/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_tutor;
    QLabel *label_icon;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QString::fromUtf8("home"));
        home->resize(1178, 661);
        home->setStyleSheet(QString::fromUtf8("*{background-image: url(:/img/img/1772226 (1).jpg);}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        centralwidget = new QWidget(home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 320, 311, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 215, 52);\n"
"	font: 20pt \"Comic Sans MS\";\n"
"}\n"
"QPushButton{\n"
"border:black;\n"
"backgroud:blue;\n"
"font-szie:30px;\n"
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
        pushButton_tutor = new QPushButton(centralwidget);
        pushButton_tutor->setObjectName(QString::fromUtf8("pushButton_tutor"));
        pushButton_tutor->setGeometry(QRect(200, 320, 311, 71));
        pushButton_tutor->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:rgb(255, 215, 52);\n"
"	font: 20pt \"Comic Sans MS\";\n"
"}\n"
"QPushButton{\n"
"border:black;\n"
"backgroud:blue;\n"
"font-szie:30px;\n"
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
        label_icon = new QLabel(centralwidget);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(470, 50, 231, 111));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(home);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1178, 30));
        home->setMenuBar(menubar);
        statusbar = new QStatusBar(home);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        home->setStatusBar(statusbar);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QMainWindow *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "Home", nullptr));
        pushButton_2->setText(QCoreApplication::translate("home", "Guardian", nullptr));
        pushButton_tutor->setText(QCoreApplication::translate("home", "Tutor", nullptr));
        label_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
