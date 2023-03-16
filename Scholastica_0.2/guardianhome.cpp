#include "guardianhome.h"
#include "ui_guardianhome.h"
#include<QtSql>
#include<QDebug>
#include<QSqlDatabase>
#include<QFileInfo>
#include<QMessageBox>
#include "requests.h"
#include "guardianlogin.h"
#include "greport.h"
#include "gupdate.h"
#include<extra.h>

guardianhome::guardianhome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guardianhome)
{
    ui->setupUi(this);
}

guardianhome::~guardianhome()
{
    delete ui;

}

void guardianhome::on_pushButton_Post_clicked()
{
    qDebug()<<"sdlk";
    guardianhome conn;
    QString sub,day,addr,ggroup,sal,gins,gclass,use,apc;
         sub=ui->lineEdit_sub->text();
         day=ui->lineEdit_day->text();
         addr=ui->lineEdit_addr->text();
         ggroup=ui->lineEdit_ggroup->text();
         use=guser;
         sal=ui->lineEdit_sal->text();
         gins=ui->lineEdit_gins->text();
         gclass=ui->lineEdit_gclass->text();
         apc=ui->lineEdit_apc->text();
         if(!conn.connOpen())
         {
             qDebug()<<"Failed to open";
             return;
         }
         conn.connOpen();

             QSqlQueryModel *modal = new QSqlQueryModel();
             QSqlQuery *qry2  = new QSqlQuery(mydb);
             qry2->prepare("select ac from Posts");
             qry2->exec();
              modal->setQuery(*qry2);
                int c=0;
              for(int j=0;j<=modal->rowCount()-1;j++)
              {
                   QString str = modal->record(j).value(0).toString();
                   int x = QString::compare(apc,str,Qt::CaseInsensitive);
                   if(x==0)
                       c++;
                   qDebug() << c;
              }

         QSqlQuery qry;
         //qry.prepare("insert into Posts (S,Phone,Password,City,Group,Institution) values ('"+name+"','"+phone+"','"+password+"','"+city+"','"+group+"','"+inst+"')");
    if(c==0)
    {
        qDebug()<<"here " <<c;
        qry.exec("insert into Posts (Subjects,Day,Address,Division,Salary,Institution,Class,Recruiter,ac) values ('"+sub+"','"+day+"','"+addr+"','"+ggroup+"','"+sal+"','"+gins+"','"+gclass+"','"+use+"','"+apc+"')");
        QMessageBox::information(this,"Success","<font color=black>Posted Succesfully");
        ui->lineEdit_sub->clear();
        ui->lineEdit_day->clear();
        ui->lineEdit_addr->clear();
        ui->lineEdit_ggroup->clear();
        ui->lineEdit_sal->clear();
        ui->lineEdit_gins->clear();
        ui->lineEdit_gclass->clear();
        ui->lineEdit_apc->clear();
        conn.connClose();
    }
    else{

        QMessageBox::information(this,"Failed","<font color=black>Failed to Post");
    }
}

void guardianhome::on_pushButton_2_clicked()
{
    hide();
    Requests rr;
    rr.setModal(true);
    rr.exec();
    connClose();

}

void guardianhome::on_pushButton_4_clicked()
{
    hide();
    guardianlogin gl;
    gl.setModal(true);
    gl.exec();
    connClose();
}

void guardianhome::on_pushButton_5_clicked()
{
    hide();
    greport gr;
    gr.setModal(true);
    gr.exec();
    connClose();
}

void guardianhome::on_pushButton_3_clicked()
{
  hide();
  gupdate gu;
  gu.setModal(true);
  gu.exec();
  connClose();
}
