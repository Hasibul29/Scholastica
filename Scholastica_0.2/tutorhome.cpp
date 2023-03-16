#include "tutorhome.h"
#include "ui_tutorhome.h"
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
#include "tutorlogin.h"
#include "treport.h"
#include "tupdate.h"
#include<extra.h>
#include "notifications.h"
#include <windows.h>

tutorhome::tutorhome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tutorhome)
{
    ui->setupUi(this);
    connOpen();

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal1 = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();
    QSqlQueryModel *modal3 = new QSqlQueryModel();
      QSqlQueryModel *modal4 = new QSqlQueryModel();
        QSqlQueryModel *modal5 = new QSqlQueryModel();
          QSqlQueryModel *modal6 = new QSqlQueryModel();
            QSqlQueryModel *modal7 = new QSqlQueryModel();

    QSqlQuery *qry = new QSqlQuery(mydb);
    QSqlQuery *qry1 = new QSqlQuery(mydb);
    QSqlQuery *qry2 = new QSqlQuery(mydb);
    QSqlQuery *qry3 = new QSqlQuery(mydb);
    QSqlQuery *qry4 = new QSqlQuery(mydb);
    QSqlQuery *qry5 = new QSqlQuery(mydb);
    QSqlQuery *qry6 = new QSqlQuery(mydb);
    QSqlQuery *qry7 = new QSqlQuery(mydb);


    qry->prepare("select Subjects from Posts");
    qry1->prepare("select Address from Posts");
    qry2->prepare("select Class from Posts");
    qry3->prepare("select Salary from Posts");
    qry4->prepare("select Division from Posts");
    qry5->prepare("select Day from Posts");
    qry6->prepare("select Recruiter from Posts");
    qry7->prepare("select ac from Posts");


    qry->exec();
    qry1->exec();
    qry2->exec();
    qry3->exec();
    qry4->exec();
    qry5->exec();
    qry6->exec();
    qry7->exec();

    modal->setQuery(*qry);
    modal1->setQuery(*qry1);
    modal2->setQuery(*qry2);
    modal3->setQuery(*qry3);
    modal4->setQuery(*qry4);
    modal5->setQuery(*qry5);
    modal6->setQuery(*qry6);
    modal7->setQuery(*qry7);

    QGridLayout *lay= new QGridLayout(this);

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

        QLabel *lab = new QLabel("Sujects: "+str+"");
        QLabel *lab1 = new QLabel("Day: "+str5+"");
        QLabel *lab2 = new QLabel("Class: "+str2+"");
        QLabel *lab3 = new QLabel("Division: "+str4+"");
        QLabel *lab4 = new QLabel("Address: "+str1+"");
        QLabel *lab5 = new QLabel("Salary: "+str3+"");
        QLabel *lab6 = new QLabel("Recruiter: "+str6+"");
        QLabel *lab7 = new QLabel("Apply Code: "+str7+"");



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


        lay->addWidget(lab);
        lay->addWidget(lab1);
        lay->addWidget(lab2);
        lay->addWidget(lab3);
        lay->addWidget(lab4);
        lay->addWidget(lab5);
        lay->addWidget(lab6);
        lay->addWidget(lab7);
        lay->addWidget(line);
    }
    ui->scrollContents->setLayout(lay);
    connClose();

}

tutorhome::~tutorhome()
{
    delete ui;
}

void tutorhome::on_pushButton_clicked()
{
    hide();
    apply ap;
    ap.setModal(true);
    ap.exec();
    connClose();
}

void tutorhome::on_pushButton_4_clicked()
{
    tuser="";
    hide();
    tutorlogin tal;
    tal.setModal(true);
    tal.exec();
   connClose();
}

void tutorhome::on_pushButton_5_clicked()
{
   hide();
  treport tr;
  tr.setModal(true);
  tr.exec();
  connClose();
}

void tutorhome::on_pushButton_3_clicked()
{
    hide();
    tupdate tu;
    tu.setModal(true);
    tu.exec();
    connClose();
}


void tutorhome::on_sbutton_clicked()
{
     connOpen();
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal1 = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();
    QSqlQueryModel *modal3 = new QSqlQueryModel();
      QSqlQueryModel *modal4 = new QSqlQueryModel();
        QSqlQueryModel *modal5 = new QSqlQueryModel();
          QSqlQueryModel *modal6 = new QSqlQueryModel();
            QSqlQueryModel *modal7 = new QSqlQueryModel();

    QSqlQuery *qry = new QSqlQuery(mydb);
    QSqlQuery *qry1 = new QSqlQuery(mydb);
    QSqlQuery *qry2 = new QSqlQuery(mydb);
    QSqlQuery *qry3 = new QSqlQuery(mydb);
    QSqlQuery *qry4 = new QSqlQuery(mydb);
    QSqlQuery *qry5 = new QSqlQuery(mydb);
    QSqlQuery *qry6 = new QSqlQuery(mydb);
    QSqlQuery *qry7 = new QSqlQuery(mydb);


    qry->prepare("select Subjects from Posts");
    qry1->prepare("select Address from Posts");
    qry2->prepare("select Class from Posts");
    qry3->prepare("select Salary from Posts");
    qry4->prepare("select Division from Posts");
    qry5->prepare("select Day from Posts");
    qry6->prepare("select Recruiter from Posts");
    qry7->prepare("select ac from Posts");


    qry->exec();
    qry1->exec();
    qry2->exec();
    qry3->exec();
    qry4->exec();
    qry5->exec();
    qry6->exec();
    qry7->exec();

    modal->setQuery(*qry);
    modal1->setQuery(*qry1);
    modal2->setQuery(*qry2);
    modal3->setQuery(*qry3);
    modal4->setQuery(*qry4);
    modal5->setQuery(*qry5);
    modal6->setQuery(*qry6);
    modal7->setQuery(*qry7);

    QGridLayout *lay= new QGridLayout(this);
     QString s = ui->lineEdit->text();
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

          int a = QString::compare(s,str,Qt::CaseInsensitive);
            int b = QString::compare(s,str1,Qt::CaseInsensitive);
              int c = QString::compare(s,str2,Qt::CaseInsensitive);
             int d = QString::compare(s,str3,Qt::CaseInsensitive);
               int e = QString::compare(s,str4,Qt::CaseInsensitive);
                 int f = QString::compare(s,str5,Qt::CaseInsensitive);
                   int g = QString::compare(s,str6,Qt::CaseInsensitive);
                     int h = QString::compare(s,str7,Qt::CaseInsensitive);

                     if(ui->scrollContents->layout()!=NULL)
                        {
                         QLayoutItem *item;
                         while((item=ui->scrollContents->layout()->takeAt(0))!=NULL)
                         {
                             delete item->widget();
                             delete item;
                         }
                         delete ui->scrollContents->layout();
                     }
        if(a!=0&&h!=0&&g!=0&&f!=0&&e!=0&&d!=0&&c!=0&&b!=0)
            continue;
        QLabel *lab = new QLabel("Sujects: "+str+"");
        QLabel *lab1 = new QLabel("Day: "+str5+"");
        QLabel *lab2 = new QLabel("Class: "+str2+"");
        QLabel *lab3 = new QLabel("Division: "+str4+"");
        QLabel *lab4 = new QLabel("Address: "+str1+"");
        QLabel *lab5 = new QLabel("Salary: "+str3+"");
        QLabel *lab6 = new QLabel("Recruiter: "+str6+"");
        QLabel *lab7 = new QLabel("Apply Code: "+str7+"");



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


        lay->addWidget(lab);
        lay->addWidget(lab1);
        lay->addWidget(lab2);
        lay->addWidget(lab3);
        lay->addWidget(lab4);
        lay->addWidget(lab5);
        lay->addWidget(lab6);
        lay->addWidget(lab7);
        lay->addWidget(line);
    }
    ui->scrollContents->setLayout(lay);
    connClose();
}

void tutorhome::on_toolButton_clicked()
{

    connOpen();

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal1 = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();
    QSqlQueryModel *modal3 = new QSqlQueryModel();
      QSqlQueryModel *modal4 = new QSqlQueryModel();
        QSqlQueryModel *modal5 = new QSqlQueryModel();
          QSqlQueryModel *modal6 = new QSqlQueryModel();
            QSqlQueryModel *modal7 = new QSqlQueryModel();

    QSqlQuery *qry = new QSqlQuery(mydb);
    QSqlQuery *qry1 = new QSqlQuery(mydb);
    QSqlQuery *qry2 = new QSqlQuery(mydb);
    QSqlQuery *qry3 = new QSqlQuery(mydb);
    QSqlQuery *qry4 = new QSqlQuery(mydb);
    QSqlQuery *qry5 = new QSqlQuery(mydb);
    QSqlQuery *qry6 = new QSqlQuery(mydb);
    QSqlQuery *qry7 = new QSqlQuery(mydb);


    qry->prepare("select Subjects from Posts");
    qry1->prepare("select Address from Posts");
    qry2->prepare("select Class from Posts");
    qry3->prepare("select Salary from Posts");
    qry4->prepare("select Division from Posts");
    qry5->prepare("select Day from Posts");
    qry6->prepare("select Recruiter from Posts");
    qry7->prepare("select ac from Posts");


    qry->exec();
    qry1->exec();
    qry2->exec();
    qry3->exec();
    qry4->exec();
    qry5->exec();
    qry6->exec();
    qry7->exec();

    modal->setQuery(*qry);
    modal1->setQuery(*qry1);
    modal2->setQuery(*qry2);
    modal3->setQuery(*qry3);
    modal4->setQuery(*qry4);
    modal5->setQuery(*qry5);
    modal6->setQuery(*qry6);
    modal7->setQuery(*qry7);

    QGridLayout *lay= new QGridLayout(this);

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

        if(ui->scrollContents->layout()!=NULL)
           {
            QLayoutItem *item;
            while((item=ui->scrollContents->layout()->takeAt(0))!=NULL)
            {
                delete item->widget();
                delete item;
            }
            delete ui->scrollContents->layout();
        }
        QLabel *lab = new QLabel("Sujects: "+str+"");
        QLabel *lab1 = new QLabel("Day: "+str5+"");
        QLabel *lab2 = new QLabel("Class: "+str2+"");
        QLabel *lab3 = new QLabel("Division: "+str4+"");
        QLabel *lab4 = new QLabel("Address: "+str1+"");
        QLabel *lab5 = new QLabel("Salary: "+str3+"");
        QLabel *lab6 = new QLabel("Recruiter: "+str6+"");
        QLabel *lab7 = new QLabel("Apply Code: "+str7+"");



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


        lay->addWidget(lab);
        lay->addWidget(lab1);
        lay->addWidget(lab2);
        lay->addWidget(lab3);
        lay->addWidget(lab4);
        lay->addWidget(lab5);
        lay->addWidget(lab6);
        lay->addWidget(lab7);
        lay->addWidget(line);
    }
    ui->scrollContents->setLayout(lay);
    connClose();

}

void tutorhome::on_pushButton_2_clicked()
{
    hide();
    notifications nn;
    nn.setModal(true);
    nn.exec();
}
