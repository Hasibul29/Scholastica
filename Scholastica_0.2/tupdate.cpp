#include "tupdate.h"
#include "ui_tupdate.h"
#include "tutorhome.h"
tupdate::tupdate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tupdate)
{
    ui->setupUi(this);
}

tupdate::~tupdate()
{
    delete ui;
}

void tupdate::on_pushButton_update_clicked()
{

    tupdate conn;
    QString name,phone,password,city,group,inst,un,cl,ou,op;
         name=ui->lineEdit_name_2->text();
         phone=ui->lineEdit_phone_2->text();
         password=ui->lineEdit_pass_2->text();
         city=ui->lineEdit_city_2->text();
         group=ui->lineEdit_group_2->text();
         inst=ui->lineEdit_inst_2->text();
         un = ui->lineEdit_un->text();
         cl = ui->lineEdit_class_2->text();
         ou = ui->lineEdit_ou->text();
         op = ui->lineEdit_op->text();
         if(!conn.connOpen())
         {
             qDebug()<<"Failed to open";
             return;
         }
         conn.connOpen();
         QSqlQuery qry;
    if(qry.exec("update Tutors set Name='"+name+"',Phone='"+phone+"',Password='"+password+"',City='"+city+"',Division='"+group+"',Institution='"+inst+"',Username='"+un+"',Class='"+cl+"'where Username='"+ou+"'")){
        {QMessageBox::information(this,"Success","<font color=black>Information Updated");
            ui->lineEdit_name_2->clear();
            ui->lineEdit_phone_2->clear();
            ui->lineEdit_pass_2->clear();
            ui->lineEdit_city_2->clear();
            ui->lineEdit_group_2->clear();
            ui->lineEdit_inst_2->clear();
           ui->lineEdit_un->clear();
           ui->lineEdit_class_2->clear();
          ui->lineEdit_ou->clear();
           ui->lineEdit_op->clear();
        conn.connClose();}
    }
    else{

        QMessageBox::information(this,"Success","<font color=black>Update Failed");
}
}


void tupdate::on_pushButton_clicked()
{
    hide();
    tutorhome th;
    th.setModal(true);
    th.exec();
    connClose();
}
