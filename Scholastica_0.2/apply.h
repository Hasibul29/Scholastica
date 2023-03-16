#ifndef APPLY_H
#define APPLY_H

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
class apply;
}

class apply : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase mydb;
    double n;
    double s;
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
    explicit apply(QWidget *parent = nullptr);
    ~apply();

private slots:
    void on_pushButton_apply_clicked();
    void on_bbn_clicked();

private:
    Ui::apply *ui;
};

#endif // APPLY_H
