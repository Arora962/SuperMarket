#ifndef ITEMS_H
#define ITEMS_H

#include <QMainWindow>

namespace Ui {
class Items;
}

class Items : public QMainWindow
{
    Q_OBJECT

public:
    explicit Items(int cuser=0,QString iname="",QString fullname="",QWidget *parent = nullptr);
    ~Items();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Items *ui;
};

#endif // ITEMS_H
