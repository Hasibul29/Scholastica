#ifndef TUTORSIGNUP_H
#define TUTORSIGNUP_H

#include <QDialog>
#include "tutorlogin.h"
namespace Ui {
class tutorsignup;
}

class tutorsignup : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase mydb;
    void connClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("F:/Qt Framework/Scholastica_0.1/Database/Scholastica.db");
        if(!mydb.open()){
            qDebug() << ("Failed");
            return false;
        }
        else{
            qDebug() << ("Connected");
            return true;
        }
    }

public:

    explicit tutorsignup(QWidget *parent = nullptr);
    ~tutorsignup();

private slots:
    void on_pushButton_signup_clicked();

    void on_pushButton_clicked();

private:
    Ui::tutorsignup *ui;
};

#endif // TUTORSIGNUP_H
