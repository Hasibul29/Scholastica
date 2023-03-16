#include "guardianlogin.h"
#include "ui_guardianlogin.h"
#include<QtSql>
#include<QDebug>
#include<QSqlDatabase>
#include<QFileInfo>
#include<QMessageBox>
#include<guradiansignup.h>
#include "tutorlogin.h"
#include<extra.h>
guardianlogin::guardianlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guardianlogin)
{
    ui->setupUi(this);
}

guardianlogin::~guardianlogin()
{
    delete ui;
}
void guardianlogin::on_pushButton_login_clicked()
{
    QString usn,password;
    usn=ui->lineEdit_phone->text();
    password=ui->lineEdit_pass->text();
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from guardian where Username='"+usn+"'and Password='"+password+"'");
    if(qry.exec()){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count==1){
            QMessageBox::information(this,"Success","<font color=black>Login Succesful");
            guser = usn;
            hide();
          guardianhome gh;
          gh.setModal(true);
          gh.exec();
           connClose();
        }

        if(count>1){
            QMessageBox::information(this,"Success","<font color=black>Duplicate information");
            connClose();
        }

        if(count<1){
            QMessageBox::critical(this,"Failed","<font color=black>Invalid Username or Password");
            connClose();
        }
    }
}

void guardianlogin::on_pushButton_signup_clicked()
{
    hide();
    guradiansignup gs;
    gs.setModal(true);
    gs.exec();

}

void guardianlogin::on_pushButton_3_clicked()
{
    hide();
    tutorlogin tl;
    tl.setModal(true);
    tl.exec();
    connClose();
}
