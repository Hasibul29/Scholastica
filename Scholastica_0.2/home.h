#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include<tutorlogin.h>
#include<guardianlogin.h>
#include<QSql>
#include<QSqlDatabase>
#include<qdebug.h>
#include <QDialog>
#include<QtSql>
#include<QDebug>
#include<QSqlDatabase>
#include<QFileInfo>

#include<QMessageBox>
#include <QMainWindow>
#include<QSql>
#include<QSqlDatabase>
#include<qdebug.h>

QT_BEGIN_NAMESPACE
namespace Ui { class home; }
QT_END_NAMESPACE

class home : public QMainWindow
{
    Q_OBJECT

public:
    home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_pushButton_tutor_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::home *ui;
    //tutorlogin *tl;
    //guardianlogin *gl;

};
#endif // HOME_H
