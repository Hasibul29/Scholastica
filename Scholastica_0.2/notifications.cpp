#include "notifications.h"
#include "ui_notifications.h"
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

notifications::notifications(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notifications)
{
    ui->setupUi(this);

    connOpen();

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal1 = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();


    QSqlQuery *qry  = new QSqlQuery(mydb);
    QSqlQuery *qry1 = new QSqlQuery(mydb);
    QSqlQuery *qry2 = new QSqlQuery(mydb);


    qry->prepare("select  Sender from Notifications");
    qry1->prepare("select Receiver from Notifications");
    qry2->prepare("select Rating from Notifications");

    qry->exec();
    qry1->exec();
    qry2->exec();

    modal->setQuery(*qry);
    modal1->setQuery(*qry1);
    modal2->setQuery(*qry2);

    QGridLayout *lay= new QGridLayout(this);

    for(int j=0;j<=modal->rowCount()-1;j++)
    {
        QString str = modal->record(j).value(0).toString();
        QString str1 = modal1->record(j).value(0).toString();
        QString str2 = modal2->record(j).value(0).toString();


        int x = QString::compare(tuser,str1,Qt::CaseInsensitive);
        if(x!=0)
            continue;

        QLabel *lab = new QLabel(""+str+" Rated You "+str2+" Star");

        QFrame *line = new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet("background:black");

        lab->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");

        lay->addWidget(lab);
        lay->addWidget(line);
    }
    ui->scrollContents->setLayout(lay);
    connClose();

}


notifications::~notifications()
{
    delete ui;
}

void notifications::on_toolButton_clicked()
{
    connOpen();

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal1 = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();


    QSqlQuery *qry  = new QSqlQuery(mydb);
    QSqlQuery *qry1 = new QSqlQuery(mydb);
    QSqlQuery *qry2 = new QSqlQuery(mydb);


    qry->prepare("select  Sender from Notifications");
    qry1->prepare("select Receiver from Notifications");
    qry2->prepare("select Rating from Notifications");

    qry->exec();
    qry1->exec();
    qry2->exec();

    modal->setQuery(*qry);
    modal1->setQuery(*qry1);
    modal2->setQuery(*qry2);

    QGridLayout *lay= new QGridLayout(this);

    for(int j=0;j<=modal->rowCount()-1;j++)
    {
        QString str = modal->record(j).value(0).toString();
        QString str1 = modal1->record(j).value(0).toString();
        QString str2 = modal2->record(j).value(0).toString();


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

        QLabel *lab = new QLabel(""+str+" Rated You "+str2+" Star");

        QFrame *line = new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet("background:black");

        lab->setStyleSheet("font: 87 18pt Segoe UI Black;color:black;");

       // lay->addWidget(lab);
       // lay->addWidget(line);
    }
    ui->scrollContents->setLayout(lay);

    QSqlQuery xqry;
    xqry.exec("Delete from Notifications where Receiver='"+tuser+"'");
    connClose();

}

void notifications::on_pushButton_clicked()
{
    hide();
    tutorhome tt;
    tt.setModal(true);
    tt.exec();
}
