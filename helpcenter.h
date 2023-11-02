#ifndef HELPCENTER_H
#define HELPCENTER_H

#include <QMainWindow>

namespace Ui {
class helpcenter;
}

class helpcenter : public QMainWindow
{
    Q_OBJECT

public:
    explicit helpcenter(QWidget *parent = nullptr);
    ~helpcenter();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::helpcenter *ui;
};

#endif // HELPCENTER_H
