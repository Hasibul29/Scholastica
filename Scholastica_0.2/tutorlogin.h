#ifndef TUTORLOGIN_H
#define TUTORLOGIN_H

#include <QDialog>
#include<QtSql>
#include<QDebug>
#include<QSqlDatabase>
#include<QFileInfo>
#include<tutorsignup.h>
#include<QMessageBox>
#include <QMainWindow>
#include<QSql>
#include<QSqlDatabase>
#include<qdebug.h>
#include<tutorhome.h>


QT_BEGIN_NAMESPACE
namespace Ui {
class tutorlogin;
}

class tutorlogin : public QDialog
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
    tutorlogin(QWidget *parent = nullptr);
    ~tutorlogin();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_signup_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::tutorlogin *ui;
    //tutorsignup *ts;
    //tutorhome *th;

};

#endif // TUTORLOGIN_H
