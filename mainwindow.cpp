#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_enter_button_clicked()
{
    QString user= ui->user->text();
    QString password= ui->password->text();
    if(user=="jai" && password=="Jai"){
        hide();
        main1=new MainWindow1(this);
        main1->show();
    }
    else{
        QMessageBox::warning(this,"Incorrect","The User and Password You entered is incorrect!");
    }
}

