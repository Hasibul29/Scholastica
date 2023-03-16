#ifndef DELETEPOST_H
#define DELETEPOST_H
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
class deletepost;
}

class deletepost : public QDialog
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
    explicit deletepost(QWidget *parent = nullptr);
    ~deletepost();

private slots:
    void on_pushButton_delete_clicked();

    void on_bbn_clicked();

private:
    Ui::deletepost *ui;
};

#endif // DELETEPOST_H
