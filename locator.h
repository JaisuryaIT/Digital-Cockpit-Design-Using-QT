#ifndef LOCATOR_H
#define LOCATOR_H

#include <QMainWindow>
#include <QVariant>
namespace Ui {
class locator;
}

class locator : public QMainWindow
{
    Q_OBJECT

public:
    explicit locator(QWidget *parent = nullptr);
    ~locator();

private slots:
    void on_return_2_clicked();

private:
    Ui::locator *ui;
};
#endif // LOCATOR_H
