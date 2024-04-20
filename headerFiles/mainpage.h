#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>

namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    friend class MainWindow;
    Q_OBJECT

public:
    explicit MainPage(int user_id=0,QString a="",QWidget *parent = nullptr);
    ~MainPage();

private slots:
    void on_pushButton_clicked();
    void showhide();
    void hideshow();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_7_clicked();

    void on_radioButton_8_clicked();

private:
    Ui::MainPage *ui;
};

#endif // MAINPAGE_H
