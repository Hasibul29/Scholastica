#include "home.h"
#include "ui_home.h"
#include "tutorlogin.h"
#include "guardianlogin.h"

home::home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}


void home::on_pushButton_tutor_clicked()
{
   hide();
   tutorlogin tl;
   tl.setModal(true);
   tl.exec();

}

void home::on_pushButton_2_clicked()
{

    hide();
    guardianlogin gl;
    gl.setModal(true);
    gl.exec();
}
