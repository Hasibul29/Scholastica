#include "requests.h"
#include "ui_requests.h"
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
#include<extra.h>
#include<trating.h>

Requests::Requests(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Requests)
{
    ui->setupUi(this);
    connOpen();

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQueryModel *model2 = new QSqlQueryModel();



    QSqlQuery *qr  = new QSqlQuery(mydb);
    QSqlQuery *qr1 = new QSqlQuery(mydb);
    QSqlQuery *qr2 = new QSqlQuery(mydb);




    qr->prepare("select  Username from Tutors");
    qr1->prepare("select Rating from Tutors");
    qr2->prepare("select NOC from Tutors");


    qr->exec();
    qr1->exec();
    qr2->exec();


    model->setQuery(*qr);
    model1->setQuery(*qr1);
    model2->setQuery(*qr2);


   // QString s = ui->lineEdit->text();

    for(int j=0;j<=model->rowCount()-1;j++)
    {
        QString str = model->record(j).value(0).toString();
        double str1 = model1->record(j).value(0).toFloat();
        double str2 = model2->record(j).value(0).toFloat();

      QSqlQuery sqr;

     sqr.prepare("update Requests set Rating = ?, NOC = ? where Username='"+str+"'");
     sqr.addBindValue(str1);
     sqr.addBindValue(str2);
     sqr.exec();

    }

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal1 = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();
    QSqlQueryModel *modal3 = new QSqlQueryModel();
    QSqlQueryModel *modal4 = new QSqlQueryModel();
    QSqlQueryModel *modal5 = new QSqlQueryModel();
    QSqlQueryModel *modal6 = new QSqlQueryModel();
    QSqlQueryModel *modal7 = new QSqlQueryModel();
    QSqlQueryModel *modal8 = new QSqlQueryModel();
     QSqlQueryModel *modal9 = new QSqlQueryModel();
     QSqlQueryModel *modalx = new QSqlQueryModel();


    QSqlQuery *qry  = new QSqlQuery(mydb);
    QSqlQuery *qry1 = new QSqlQuery(mydb);
    QSqlQuery *qry2 = new QSqlQuery(mydb);
    QSqlQuery *qry3 = new QSqlQuery(mydb);
    QSqlQuery *qry4 = new QSqlQuery(mydb);
    QSqlQuery *qry5 = new QSqlQuery(mydb);
    QSqlQuery *qry6 = new QSqlQuery(mydb);
    QSqlQuery *qry7 = new QSqlQuery(mydb);
    QSqlQuery *qry8 = new QSqlQuery(mydb);
    QSqlQuery *qry9 = new QSqlQuery(mydb);
    QSqlQuery *qryx = new QSqlQuery(mydb);

    qry->prepare("select  Name from Requests");
    qry1->prepare("select Phone from Requests");
    qry2->prepare("select Class from Requests");
    qry3->prepare("select Address from Requests");
    qry4->prepare("select Division from Requests");
    qry5->prepare("select Institution from Requests");
    qry6->prepare("select Recruiter from Requests");
    qry7->prepare("select ac from Requests");
    qry8->prepare("select Rating from Requests");
    qry9->prepare("select NOC from Requests");
    qryx->prepare("select Username from Requests");


    qry->exec();
    qry1->exec();
    qry2->exec();
    qry3->exec();
    qry4->exec();
    qry5->exec();
    qry6->exec();
    qry7->exec();
    qry8->exec();
    qry9->exec();
    qryx->exec();

    modal->setQuery(*qry);
    modal1->setQuery(*qry1);
    modal2->setQuery(*qry2);
    modal3->setQuery(*qry3);
    modal4->setQuery(*qry4);
    modal5->setQuery(*qry5);
    modal6->setQuery(*qry6);
    modal7->setQuery(*qry7);
    modal8->setQuery(*qry8);
    modal9->setQuery(*qry9);
    modalx->setQuery(*qryx);

    QGridLayout *lay= new QGridLayout(this);
   // QString s = ui->lineEdit->text();

    for(int j=0;j<=modal->rowCount()-1;j++)
    {
        QString str = modal->record(j).value(0).toString();
        QString str1 = modal1->record(j).value(0).toString();
        QString str2 = modal2->record(j).value(0).toString();
        QString str3 = modal3->record(j).value(0).toString();
        QString str4 = modal4->record(j).value(0).toString();
        QString str5 = modal5->record(j).value(0).toString();
        QString str6 = modal6->record(j).value(0).toString();
        QString str7 = modal7->record(j).value(0).toString();
        QString str8 = modal8->record(j).value(0).toString();
        QString str9 = modal9->record(j).value(0).toString();
        QString strx = modalx->record(j).value(0).toString();


        int x = QString::compare(guser,str6,Qt::CaseInsensitive);
        if(x!=0)
            continue;

        QLabel *lab = new QLabel("Name: "+str+"");
        QLabel *lab1 = new QLabel("Phone: "+str1+"");
        QLabel *lab2 = new QLabel("Class: "+str2+"");
        QLabel *lab3 = new QLabel("Address: "+str3+"");
        QLabel *lab4 = new QLabel("Division: "+str4+"");
        QLabel *lab5 = new QLabel("Institution: "+str5+"");
        QLabel *lab6 = new QLabel("Username: "+strx+"");
        QLabel *lab7 = new QLabel("Apply Code: "+str7+"");
        QLabel *lab8 = new QLabel("Average Rating: "+str8+" From "+str9+" Guardians");
        QLabel *lab9 = new QLabel("Unrated");






        QFrame *line = new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet("background:black");

        lab->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");
        lab1->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");
        lab2->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");
        lab3->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");
        lab4->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");
        lab5->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");
        lab6->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");
        lab7->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");
        lab8->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");
        lab9->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");

         int y = QString::compare("0",str8,Qt::CaseInsensitive);

        lay->addWidget(lab);
        lay->addWidget(lab1);
        lay->addWidget(lab2);
        lay->addWidget(lab3);
        lay->addWidget(lab4);
        lay->addWidget(lab5);
        lay->addWidget(lab6);
        lay->addWidget(lab7);
        if(y!=0)
        lay->addWidget(lab8);
        else
            lay->addWidget(lab9);
        lay->addWidget(line);
    }
    ui->scrollContents->setLayout(lay);
    connClose();

}

Requests::~Requests()
{
    delete ui;
}

void Requests::on_pushButton_clicked()
{
    hide();
    guardianhome gh;
    gh.setModal(true);
    gh.exec();
    connClose();
}

void Requests::on_pushButton_2_clicked()
{
    hide();
    deletepost dl;
    dl.setModal(true);
    dl.exec();

}

void Requests::on_pushButton_3_clicked()
{
    hide();
    trating tt;
    tt.setModal(true);
    tt.exec();

}
