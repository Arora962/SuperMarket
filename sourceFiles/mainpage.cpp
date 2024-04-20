#include<QMessageBox>
#include "./headerFiles/mainpage.h"
#include "./uiHeaderFiles/ui_mainpage.h"
#include "./headerFiles/mainwindow.h"
#include "./headerFiles/cart.h"
#include "./headerFiles/items.h"

int cur_uid=0;
QString cur_name="";
QString choice="";

MainPage::MainPage(int user_id ,QString a,QWidget *parent): QMainWindow(parent), ui(new Ui::MainPage)
{
    cur_uid=user_id;
    cur_name=a;

    ui->setupUi(this);
    ui->label_3->setText("Hi ,"+a);
    ui->pushButton_3->hide();
    ui->pushButton_2->hide();
    ui->pushButton->hide();
    ui->label_2->hide();

    connect(ui->pushButton_4, SIGNAL(clicked()),this, SLOT(showhide()));
    connect(ui->pushButton_3, SIGNAL(clicked()),this, SLOT(hideshow()));
}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::showhide()
{
    ui->pushButton_4->hide();
    ui->pushButton_3->show();
    ui->pushButton_2->show();
    ui->pushButton->show();
    ui->label_2->show();
}

void MainPage::hideshow()
{
    ui->pushButton_4->show();
    ui->pushButton_3->hide();
    ui->pushButton_2->hide();
    ui->pushButton->hide();
    ui->label_2->hide();
}

void MainPage::on_pushButton_clicked()
{
    this->hide();
    MainWindow *newmainw = new MainWindow();
    newmainw->show();
}

void MainPage::on_pushButton_2_clicked()
{
    this->hide();
    Cart *newcart = new Cart(cur_uid,cur_name);
    newcart->show();
}

void MainPage::on_pushButton_5_clicked()
{
    if (choice=="")
        QMessageBox::warning( 0, tr( "choice" ), tr( "Please select an option" ) );
    else
    {
        this->hide();
        Items *newscreen = new Items(cur_uid,choice,cur_name);
        choice="";
        newscreen->show();
    }
}

void MainPage::on_radioButton_clicked(){choice="baby_products";}
void MainPage::on_radioButton_2_clicked(){choice="books";}
void MainPage::on_radioButton_3_clicked(){choice="cooking_supplements";}
void MainPage::on_radioButton_4_clicked(){choice="cosmetics";}
void MainPage::on_radioButton_5_clicked(){choice="food";}
void MainPage::on_radioButton_6_clicked(){choice="fruits_vegetables";}
void MainPage::on_radioButton_7_clicked(){choice="stationery";}
void MainPage::on_radioButton_8_clicked(){choice="toys";}

