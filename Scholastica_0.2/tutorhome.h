#ifndef TUTORHOME_H
#define TUTORHOME_H

#include <QDialog>
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
#include<apply.h>
#include "home.h"


namespace Ui {
class tutorhome;
}

class tutorhome : public QDialog
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
    explicit tutorhome(QWidget *parent = nullptr);
    ~tutorhome();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_sbutton_clicked();

    void on_toolButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::tutorhome *ui;
    //home*hh;
};

#endif // TUTORHOME_H
