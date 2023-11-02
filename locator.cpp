#include "locator.h"
#include "ui_locator.h"
#include "mainwindow1.h"
MainWindow1 *main1;
#include <QQuickItem>
locator::locator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::locator)
{
    ui->setupUi(this);
    ui->quickwidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
    ui->quickwidget->show();
}
locator::~locator()
{
    delete ui;
}

void locator::on_return_2_clicked()
{
    hide();
    main1=new MainWindow1(this);
    main1->show();
}

