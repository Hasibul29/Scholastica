#include "guradiansignup.h"
#include "ui_guradiansignup.h"
#include<QMessageBox>
#include "guardianlogin.h"

guradiansignup::guradiansignup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guradiansignup)
{
    ui->setupUi(this);
}

guradiansignup::~guradiansignup()
{
    delete ui;
}

void guradiansignup::on_pushButton_signup_clicked()
{
     guardianlogin conn;
     QString name,phone,password,city,group,inst,un,cl;
         name=ui->lineEdit_name_2->text();
         phone=ui->lineEdit_phone_2->text();
         password=ui->lineEdit_pass_2->text();
         city=ui->lineEdit_city_2->text();
         group=ui->lineEdit_group_2->text();
         inst=ui->lineEdit_inst_2->text();
         un = ui->lineEdit_un->text();
         cl = ui->lineEdit_class_2->text();
         if(!conn.connOpen())
         {
             qDebug()<<"Failed to open";
             return;
         }
         conn.connOpen();
         QSqlQuery qry;
    if(qry.exec("insert into guardian (Name,Phone,Password,City,Division,Institution,Username,Class) values ('"+name+"','"+phone+"','"+password+"','"+city+"','"+group+"','"+inst+"','"+un+"','"+cl+"')")){
        QMessageBox::information(this,"Success","<font color=black>Signup Successfull");
        ui->lineEdit_name_2->clear();
        ui->lineEdit_phone_2->clear();
        ui->lineEdit_pass_2->clear();
        ui->lineEdit_city_2->clear();
        ui->lineEdit_group_2->clear();
        ui->lineEdit_inst_2->clear();
        ui->lineEdit_un->clear();
        ui->lineEdit_class_2->clear();
        conn.connClose();
    }
    else{

        QMessageBox::information(this,"Failed","<font color=black>Signup Failed");
}
}

void guradiansignup::on_pushButton_clicked()
{
    hide();
    guardianlogin ggl;
    ggl.setModal(true);
    ggl.exec();

}
