#ifndef GUARDIANLOGIN_H
#define GUARDIANLOGIN_H
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
#include<guardianhome.h>



namespace Ui {
class guardianlogin;
}

class guardianlogin : public QDialog
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
    explicit guardianlogin(QWidget *parent = nullptr);
    ~guardianlogin();
private slots:
    void on_pushButton_login_clicked();
    void on_pushButton_signup_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::guardianlogin *ui;
    //guardianhome *gh;
};

#endif // GUARDIANLOGIN_H
