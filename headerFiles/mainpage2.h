#ifndef MAINPAGE2_H
#define MAINPAGE2_H

#include <QMainWindow>

namespace Ui {
class MainPage2;
}

class MainPage2 : public QMainWindow
{
    friend class MainWindow;
    Q_OBJECT

public:
    explicit MainPage2(QWidget *parent = nullptr);
    ~MainPage2();

private slots:
    void sendMail();
    void mailSent(QString);

    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void register_user();

    void on_pushButton_4_clicked();

private:
    Ui::MainPage2 *ui;
};

class Cur_user
{
public:
    QString First_name;
    QString Last_name;
    QString email;
    QString pwd;
    int UID;
};
#endif // MAINPAGE2_H
