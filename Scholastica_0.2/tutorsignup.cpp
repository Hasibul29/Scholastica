#include "tutorsignup.h"
#include "ui_tutorsignup.h"
#include<QMessageBox>
#include "tutorlogin.h"
tutorsignup::tutorsignup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tutorsignup)
{
    ui->setupUi(this);
    tutorlogin conn;


}

tutorsignup::~tutorsignup()
{
    delete ui;
}


 void tutorsignup::on_pushButton_signup_clicked()
 {
     tutorlogin conn;
     double d;
     QString name,phone,password,city,group,inst,un2,cl;
          name=ui->lineEdit_name->text();
          phone=ui->lineEdit_phone->text();
          password=ui->lineEdit_pass->text();
          city=ui->lineEdit_city->text();
          group=ui->lineEdit_group->text();
          inst=ui->lineEdit_inst->text();
          un2 = ui->lineEdit_un2->text();
          cl = ui->lineEdit_class->text();
          d=0.0;
          if(!conn.connOpen())
          {
              qDebug()<<"Failed to open";
              return;
          }
          connOpen();
          QSqlQueryModel *modal = new QSqlQueryModel();
          QSqlQuery *qry2  = new QSqlQuery(mydb);
          qry2->prepare("select Username from Tutors");
          qry2->exec();
           modal->setQuery(*qry2);
             int c=0;
           for(int j=0;j<=modal->rowCount()-1;j++)
           {
                QString str = modal->record(j).value(0).toString();
                int x = QString::compare(un2,str,Qt::CaseInsensitive);
                if(x==0)
                    c++;
                qDebug() << c;
           }


          conn.connOpen();
          QSqlQuery qry;
          qry.prepare("insert into Tutors (Name,Phone,Password,City,Division,Institution,Username,Class,Rating,NOC,SOR) values (?,?,?,?,?,?,?,?,?,?,?)");
          qry.addBindValue(name);
          qry.addBindValue(phone);
          qry.addBindValue(password);
          qry.addBindValue(city);
          qry.addBindValue(group);
          qry.addBindValue(inst);
          qry.addBindValue(un2);
          qry.addBindValue(cl);
         qry.addBindValue(d);
         qry.addBindValue(d);
         qry.addBindValue(d);
     if(c==0)
     {if(qry.exec()){
         QMessageBox::information(this,"Success","<font color=black>Signup Successfull");
         ui->lineEdit_name->clear();
         ui->lineEdit_phone->clear();
         ui->lineEdit_pass->clear();
         ui->lineEdit_city->clear();
         ui->lineEdit_group->clear();
         ui->lineEdit_inst->clear();
         ui->lineEdit_un2->clear();
         ui->lineEdit_class->clear();
         conn.connClose();
     }}
     else{

         QMessageBox::information(this,"Success","<font color=black>Signup Failed");
 }

 }


void tutorsignup::on_pushButton_clicked()
{
    hide();
    tutorlogin ttl;
    ttl.setModal(true);
    ttl.exec();
}
