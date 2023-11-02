#include "helpcenter.h"
#include "ui_helpcenter.h"
#include <QMessageBox>
#include "mainwindow1.h"
MainWindow1 *main2;
helpcenter::helpcenter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::helpcenter)
{
    ui->setupUi(this);
    QPixmap p(":/res/img/help_center.png");
    ui->help_center->setPixmap(p.scaled(70,50));
}

helpcenter::~helpcenter()
{
    delete ui;
}

void helpcenter::on_pushButton_clicked()
{
    QMessageBox::aboutQt(this);
}


void helpcenter::on_pushButton_2_clicked()
{
    hide();
    main2=new MainWindow1(this);
    main2->show();
}

