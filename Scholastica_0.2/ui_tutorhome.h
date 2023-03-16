/********************************************************************************
** Form generated from reading UI file 'tutorhome.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORHOME_H
#define UI_TUTORHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tutorhome
{
public:
    QLabel *label_icon;
    QPushButton *pushButton_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QPushButton *toolButton;
    QPushButton *sbutton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLabel *label_3;

    void setupUi(QDialog *tutorhome)
    {
        if (tutorhome->objectName().isEmpty())
            tutorhome->setObjectName(QString::fromUtf8("tutorhome"));
        tutorhome->resize(1101, 800);
        tutorhome->setStyleSheet(QString::fromUtf8("QScrollBar{background:black}\n"
"*{background-image: url(:/img/img/inside.jpg);}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 212, 39);\n"
"   border-radius:6px;\n"
"}"));
        label_icon = new QLabel(tutorhome);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(450, 0, 231, 111));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icon.png")));
        pushButton_5 = new QPushButton(tutorhome);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 680, 111, 71));
        pushButton_5->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/report2.png);\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label_6 = new QLabel(tutorhome);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 760, 69, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        pushButton = new QPushButton(tutorhome);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 310, 112, 71));
        pushButton->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/apply.png);\n"
"\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label = new QLabel(tutorhome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 380, 69, 20));
        label->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        label_2 = new QLabel(tutorhome);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 130, 241, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 18pt \"Segoe UI Black\";"));
        layoutWidget = new QWidget(tutorhome);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 300, 951, 491));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(layoutWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("border-color: rgb(6, 19, 200);"));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 947, 487));
        scrollContents->setStyleSheet(QString::fromUtf8("color:rgb(255, 85, 0)"));
        scrollArea->setWidget(scrollContents);

        horizontalLayout->addWidget(scrollArea);

        label_4 = new QLabel(tutorhome);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 620, 131, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        pushButton_3 = new QPushButton(tutorhome);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 530, 101, 81));
        pushButton_3->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/update.png);\n"
"\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        toolButton = new QPushButton(tutorhome);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(930, 190, 151, 41));
        toolButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	background-color: maroon;\n"
"   border-radius:6px;\n"
"}"));
        sbutton = new QPushButton(tutorhome);
        sbutton->setObjectName(QString::fromUtf8("sbutton"));
        sbutton->setGeometry(QRect(860, 240, 221, 51));
        sbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lineEdit = new QLineEdit(tutorhome);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(600, 250, 251, 41));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("*{\n"
"background:black;\n"
"color:white;\n"
"font: 87 15pt \"Segoe UI Black\";\n"
"border:black;\n"
"}"));
        pushButton_2 = new QPushButton(tutorhome);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 420, 81, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/imageonline-co-transparentimage (3).png);}\n"
"*{border:white;}"));
        pushButton_4 = new QPushButton(tutorhome);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(990, 0, 111, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("*{image: url(:/img/img/logout2.png);\n"
"border:white}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(182, 11, 42);\n"
"   border-radius:6px;\n"
"}"));
        label_5 = new QLabel(tutorhome);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1010, 60, 69, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        label_3 = new QLabel(tutorhome);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 490, 111, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        retranslateUi(tutorhome);

        QMetaObject::connectSlotsByName(tutorhome);
    } // setupUi

    void retranslateUi(QDialog *tutorhome)
    {
        tutorhome->setWindowTitle(QCoreApplication::translate("tutorhome", "Tutor Home", nullptr));
        label_icon->setText(QString());
        pushButton_5->setText(QString());
        label_6->setText(QCoreApplication::translate("tutorhome", "Report", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("tutorhome", "Apply", nullptr));
        label_2->setText(QCoreApplication::translate("tutorhome", "Find a Tution", nullptr));
        label_4->setText(QCoreApplication::translate("tutorhome", "Update Profile", nullptr));
        pushButton_3->setText(QString());
        toolButton->setText(QCoreApplication::translate("tutorhome", "Clear", nullptr));
        sbutton->setText(QCoreApplication::translate("tutorhome", "Search", nullptr));
#if QT_CONFIG(accessibility)
        lineEdit->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        lineEdit->setPlaceholderText(QCoreApplication::translate("tutorhome", "Enter Keyword", nullptr));
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        label_5->setText(QCoreApplication::translate("tutorhome", "Logout", nullptr));
        label_3->setText(QCoreApplication::translate("tutorhome", "Notifications", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tutorhome: public Ui_tutorhome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORHOME_H
