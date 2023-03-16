#ifndef GURADIANSIGNUP_H
#define GURADIANSIGNUP_H

#include <QDialog>
#include "guardianlogin.h"

namespace Ui {
class guradiansignup;
}

class guradiansignup : public QDialog
{
    Q_OBJECT

public:
    explicit guradiansignup(QWidget *parent = nullptr);
    ~guradiansignup();

private slots:
    void on_pushButton_signup_clicked();

    void on_pushButton_clicked();

private:
    Ui::guradiansignup *ui;
};

#endif // GURADIANSIGNUP_H
