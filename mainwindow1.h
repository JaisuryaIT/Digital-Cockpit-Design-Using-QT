#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>
#include <QTimer>
namespace Ui {
class MainWindow1;
}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();
public slots:
    void run();
private slots:
    void on_actionReturn_triggered();

    void on_settings_triggered();

    void on_actionHighway_Mode_triggered();

    void on_actionTheft_Detection_triggered();

    void on_wi_fi_triggered();

    void on_bluetooth_triggered();

    void on_help_center_triggered();

    void on_locator_triggered();

    void on_home_triggered();

private:
    Ui::MainWindow1 *ui;
    QTimer *timer;
};

#endif // MAINWINDOW1_H
