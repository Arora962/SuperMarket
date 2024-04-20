#ifndef CART_H
#define CART_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class Cart;
}

class Cart : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cart(int current_user=0,QString fullname="",QWidget *parent = nullptr);
    ~Cart();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void bill_send();

private:
    Ui::Cart *ui;
};

#endif // CART_H
