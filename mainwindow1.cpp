#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include <QDateTime>
#include "mainwindow.h"
#include "setting.h"
#include "helpcenter.h"
#include "locator.h"
#include "home.h"
#include <QMessageBox>
MainWindow *login;
setting *setting1;
helpcenter *help;
locator *location;
home *h;
MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(run()));
    timer->start(1000);
}

MainWindow1::~MainWindow1()
{
    delete ui;
}
void MainWindow1::run(){
    QTime time=QTime::currentTime();
    QString timing=time.toString("hh : mm : ss");
    ui->timenow->setText(timing);
}

void MainWindow1::on_actionReturn_triggered()
{
    hide();
    login=new MainWindow(this);
    login->show();
}

void MainWindow1::on_settings_triggered()
{
    hide();
    setting1=new setting(this);
    setting1->show();
}

void MainWindow1::on_actionHighway_Mode_triggered()
{
    QMessageBox::information(this,"Info","Highway Mode Enabled");
}

void MainWindow1::on_actionTheft_Detection_triggered()
{
    QMessageBox::information(this,"Info","Theft Detection Enabled");
}

void MainWindow1::on_wi_fi_triggered()
{
    QMessageBox::information(this,"Info","Wi-Fi Is Turned On");
}


void MainWindow1::on_bluetooth_triggered()
{
    QMessageBox::information(this,"Info","Bluetooth Is Turned On");
}

void MainWindow1::on_help_center_triggered()
{
    hide();
    help=new helpcenter(this);
    help->show();
}

void MainWindow1::on_locator_triggered()
{
    hide();
    location=new locator(this);
    location->show();
}

void MainWindow1::on_home_triggered()
{
    hide();
    h=new home(this);
    h->show();
}

