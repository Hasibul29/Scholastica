#include "greport.h"
#include "ui_greport.h"
#include "guardianhome.h"

greport::greport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::greport)
{
    ui->setupUi(this);
}

greport::~greport()
{
    delete ui;
}

void greport::on_pushButton_2_clicked()
{
    hide();
    guardianhome ggh;
    ggh.setModal(true);
    ggh.exec();
}

void greport::on_pushButton_clicked()
{
    QMessageBox::information(this,"Success","<font color=black>Reported Successfully");
}
