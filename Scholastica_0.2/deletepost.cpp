#include "deletepost.h"
#include "ui_deletepost.h"
#include "guardianhome.h"

deletepost::deletepost(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletepost)
{
    ui->setupUi(this);

}

deletepost::~deletepost()
{
    delete ui;
}

void deletepost::on_pushButton_delete_clicked()
{
    deletepost conn;
    QString ac,un,pass;
         un=ui->lineEdit_un->text();
         ac=ui->lineEdit_ac->text();
         pass=ui->lineEdit_pass->text();
         if(!conn.connOpen())
         {
             qDebug()<<"Failed to open";
             return;
         }
         conn.connOpen();
         QSqlQuery qry,qry2;
         int C=0;
         if(qry.exec("Delete from Posts where ac='"+ac+"'"))
             C++;
         if(qry2.exec("Delete from Requests where ac='"+ac+"'"))
             C++;
         qDebug() << C ;
    if(C==2){
        {QMessageBox::information(this,"Success","<font color=black>Deleted Successfully");
            ui->lineEdit_un->clear();
            ui->lineEdit_ac->clear();
            ui->lineEdit_pass->clear();
        conn.connClose();}
    }
    else{

        QMessageBox::critical(this,"Failed","<font color=black>Operation Failed");
}
}

void deletepost::on_bbn_clicked()
{
    hide();
    guardianhome gh;
    gh.setModal(true);
    gh.exec();
    connClose();
}
