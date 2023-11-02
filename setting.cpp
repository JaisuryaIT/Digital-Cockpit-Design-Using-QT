#include "setting.h"
#include "ui_setting.h"
#include "mainwindow1.h"
MainWindow1 *main4;

setting::setting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
    QPixmap p(":/res/img/wifi.png");
    ui->wifi->setPixmap(p.scaled(55,52));
    QPixmap p1(":/res/img/bluetooth.png");
    ui->bluetooth->setPixmap(p1.scaled(55,51));
    QPixmap p2(":/res/img/theft_detection.png");
    ui->theft_detection->setPixmap(p2.scaled(55,52));
    QPixmap p3(":/res/img/highway_mode.png");
    ui->highway_mode->setPixmap(p3.scaled(55,51));
}

setting::~setting()
{
    delete ui;
}

void setting::on_pushButton_clicked()
{
    hide();
    main4=new MainWindow1(this);
    main4->show();
}

