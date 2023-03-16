#ifndef TUPDATE_H
#define TUPDATE_H

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
class tupdate;
}

class tupdate : public QDialog
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
    explicit tupdate(QWidget *parent = nullptr);
    ~tupdate();

private slots:
    void on_pushButton_update_clicked();

    void on_pushButton_clicked();

private:
    Ui::tupdate *ui;
};

#endif // TUPDATE_H
