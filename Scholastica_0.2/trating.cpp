#include "trating.h"
#include "ui_trating.h"
#include <extra.h>
#include <qdebug.h>
#include<QtSql>
#include<QDebug>
#include<QSqlDatabase>
#include<QFileInfo>
#include<QMessageBox>
#include<QGridLayout>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
#include<QLabel>
#include<QFrame>
#include<QFileDialog>
#include<QPixmap>
#include<QSqlRecord>
#include<QHBoxLayout>
#include "guardianhome.h"
#include "deletepost.h"
#include <extra.h>
#include <bits/stdc++.h>
#include <qdebug.h>
#include "requests.h"

trating::trating(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::trating)
{
    ui->setupUi(this);
}

trating::~trating()
{
    delete ui;
}

void trating::on_pushButton_clicked()
{
    QString s,yo;
    double l,rs,cs,avg;
    s = ui->lineEdit_2->text();
    l = ui->spinBox->text().toDouble();

    connOpen();
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal1 = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();
    QSqlQueryModel *modal3 = new QSqlQueryModel();


    QSqlQuery *qry  = new QSqlQuery(mydb);
    QSqlQuery *qry1 = new QSqlQuery(mydb);
    QSqlQuery *qry2 = new QSqlQuery(mydb);
    QSqlQuery *qry3 = new QSqlQuery(mydb);

    qry->prepare("select  Username from Tutors");
    qry1->prepare("select Rating from Tutors");
    qry2->prepare("select NOC from Tutors");
    qry3->prepare("select SOR from Tutors");



    qry->exec();
    qry1->exec();
    qry2->exec();
    qry3->exec();


    modal->setQuery(*qry);
    modal1->setQuery(*qry1);
    modal2->setQuery(*qry2);
    modal3->setQuery(*qry3);


    for(int j=0;j<=modal->rowCount()-1;j++)
    {
        QString str = modal->record(j).value(0).toString();
        double r1 = modal1->record(j).value(0).toFloat();
        double r2 = modal2->record(j).value(0).toFloat();
        double r3 = modal3->record(j).value(0).toFloat();

        


        int x = QString::compare(s,str,Qt::CaseInsensitive);
        if(x!=0)
            continue;

            rs = l+r3;
            cs=r2;
            cs++;
            avg = rs/cs;


    QSqlQuery sqry;
    sqry.prepare("update Tutors set Rating = ?,SOR = ?, NOC = ? where Username='"+s+"'");
    sqry.addBindValue(avg);
    sqry.addBindValue(rs);
    sqry.addBindValue(cs);

          if(sqry.exec()){
            {QMessageBox::information(this,"Success","<font color=black>Rated Succsessfully");

                  QSqlQuery pqry;
                  pqry.prepare("insert into Notifications (Sender,Receiver,Rating) values (?,?,?)");
                  pqry.addBindValue(guser);
                  pqry.addBindValue(s);
                  pqry.addBindValue(l);
                  pqry.exec();

               ui->spinBox->clear();
                ui->lineEdit_2->clear();

            connClose();}
        }
        else{

            QMessageBox::critical(this,"Success","<font color=black>Invalid Username");
    }


    }
    connClose();



}

void trating::on_pushButton_2_clicked()
{
    hide();
    Requests rr;
    rr.setModal(true);
    rr.exec();

}
