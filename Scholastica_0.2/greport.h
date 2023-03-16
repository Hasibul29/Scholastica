#ifndef GREPORT_H
#define GREPORT_H

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
class greport;
}

class greport : public QDialog
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
    explicit greport(QWidget *parent = nullptr);
    ~greport();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::greport *ui;
};

#endif // GREPORT_H
