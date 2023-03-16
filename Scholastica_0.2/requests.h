#ifndef REQUESTS_H
#define REQUESTS_H

#include <QDialog>
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
namespace Ui {
class Requests;
}

class Requests : public QDialog
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
    explicit Requests(QWidget *parent = nullptr);
    ~Requests();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Requests *ui;
};

#endif // REQUESTS_H
