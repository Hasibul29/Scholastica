#ifndef GUPDATE_H
#define GUPDATE_H

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

namespace Ui {
class gupdate;
}

class gupdate : public QDialog
{
    Q_OBJECT
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
    explicit gupdate(QWidget *parent = nullptr);
    ~gupdate();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_update_clicked();

private:
    Ui::gupdate *ui;
};

#endif // GUPDATE_H
