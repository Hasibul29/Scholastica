#include "apply.h"
#include "ui_apply.h"
#include "tutorhome.h"
#include <extra.h>

apply::apply(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::apply)
{
    ui->setupUi(this);
    connOpen();
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();
    QSqlQueryModel *modal3 = new QSqlQueryModel();

    QSqlQuery *qry = new QSqlQuery(mydb);
    QSqlQuery *qry2 = new QSqlQuery(mydb);
    QSqlQuery *qry3 = new QSqlQuery(mydb);



    qry->prepare("select  Username from Tutors");
    qry2->prepare("select Rating from Tutors");
    qry3->prepare("select NOC from Tutors");


    qry->exec();
    qry2->exec();
    qry3->exec();


    modal->setQuery(*qry);
    modal2->setQuery(*qry2);
    modal3->setQuery(*qry3);



    for(int j=0;j<=modal->rowCount()-1;j++)
    {
        QString str = modal->record(j).value(0).toString();
        double str2 = modal2->record(j).value(0).toFloat();
        double str3 = modal3->record(j).value(0).toFloat();

        int x = QString::compare(tuser,str,Qt::CaseInsensitive);
        if(x!=0)
            continue;
       n = str2;
       s = str3;

    }

    connClose();
}

apply::~apply()
{
    delete ui;
}


void apply::on_pushButton_apply_clicked()
{
    apply conn;
    QString name,phone,cl,rad,group,inst,ac,rec;
    //double n = avgr;
         name=ui->lineEdit_name->text();
         phone=ui->lineEdit_phone->text();
         cl=ui->lineEdit_class->text();
         rad=ui->lineEdit_rad->text();
         group=ui->lineEdit_group->text();
         inst=ui->lineEdit_inst->text();
         rec=ui->lineEdit_rec->text();
         ac=ui->lineEdit_ac->text();
         if(!conn.connOpen())
         {
             qDebug()<<"Failed to open";
             return;
         }
         conn.connOpen();
         QSqlQuery qry;
     qry.prepare("insert into Requests(Name,Phone,Class,Address,Division,Institution,Recruiter,ac,Rating,NOC,Username) values (?,?,?,?,?,?,?,?,?,?,?)");
     qry.addBindValue(name);
     qry.addBindValue(phone);
     qry.addBindValue(cl);
     qry.addBindValue(rad);
     qry.addBindValue(group);
     qry.addBindValue(inst);
     qry.addBindValue(rec);
     qry.addBindValue(ac);
     qry.addBindValue(n);
     qry.addBindValue(s);
     qry.addBindValue(tuser);

    if(qry.exec()){
        QMessageBox::information(this,"Success","<font color=black>Applied Successfully");
        ui->lineEdit_name->clear();
        ui->lineEdit_phone->clear();
        ui->lineEdit_class->clear();
        ui->lineEdit_rad->clear();
        ui->lineEdit_group->clear();
        ui->lineEdit_inst->clear();
        ui->lineEdit_rec->clear();
        ui->lineEdit_ac->clear();
        ui->lineEdit_email->clear();
        conn.connClose();
    }
    else{

        QMessageBox::information(this,"Success","<font color=black>Apply Failed");
}
}

void apply::on_bbn_clicked()
{
    hide();
    tutorhome th;
    th.setModal(true);
    th.exec();
    connClose();
}
