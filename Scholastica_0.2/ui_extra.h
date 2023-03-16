/********************************************************************************
** Form generated from reading UI file 'extra.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRA_H
#define UI_EXTRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_extra
{
public:

    void setupUi(QDialog *extra)
    {
        if (extra->objectName().isEmpty())
            extra->setObjectName(QString::fromUtf8("extra"));
        extra->resize(400, 300);

        retranslateUi(extra);

        QMetaObject::connectSlotsByName(extra);
    } // setupUi

    void retranslateUi(QDialog *extra)
    {
        extra->setWindowTitle(QCoreApplication::translate("extra", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class extra: public Ui_extra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRA_H
