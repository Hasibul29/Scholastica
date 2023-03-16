#include "tutorlogin.h"
#include "ui_tutorlogin.h"
#include<QtSql>
#include<QDebug>
#include<QSqlDatabase>
#include<QFileInfo>
#include<QMessageBox>
#include<tutorsignup.h>
#include "guardianlogin.h"
#include <extra.h>

tutorlogin::tutorlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tutorlogin)
{
    ui->setupUi(this);
}
tutorlogin::~tutorlogin()
{
    delete ui;
}

void tutorlogin::on_pushButton_login_clicked()
{
    QString un2,password;
    un2=ui->lineEdit_un2->text();
    password=ui->lineEdit_pass->text();
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from Tutors where Username='"+un2+"'and Password='"+password+"'");
    if(qry.exec()){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count==1){
            QMessageBox::information(this,"Success","Login Succesful");
            tuser = un2;


            hide();
            tutorhome th;
           th.setModal(true);
           th.exec();
            connClose();
        }

        if(count>1){
            QMessageBox::information(this,"Success","Duplicate information");
            connClose();
        }

        if(count<1){
            QMessageBox::critical(this,"Success","<font color=black>Invalid Username or Password");
            connClose();
        }
    }

}

void tutorlogin::on_pushButton_signup_clicked()
{
   hide();
   tutorsignup tn;
   tn.setModal(true);
   tn.exec();
}

void tutorlogin::on_pushButton_3_clicked()
{
    hide();
    guardianlogin gl;
    gl.setModal(true);
    gl.exec();
    connClose();
}
