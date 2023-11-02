#include "home.h"
#include "ui_home.h"
#include "mainwindow1.h"
MainWindow1 *main3;
home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}

void home::on_pushButton_clicked()
{
    hide();
    main3=new MainWindow1(this);
    main3->show();
}

