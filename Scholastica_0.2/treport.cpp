#include "treport.h"
#include "ui_treport.h"
#include "tutorhome.h"

treport::treport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::treport)
{
    ui->setupUi(this);
}

treport::~treport()
{
    delete ui;
}

void treport::on_pushButton_2_clicked()
{
    hide();
    tutorhome tth;
    tth.setModal(true);
    tth.exec();
}

void treport::on_pushButton_clicked()
{
     QMessageBox::information(this,"Success","<font color=black>Reported Successfully");
}
