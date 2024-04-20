#include "./headerFiles/items.h"
#include "./uiHeaderFiles/ui_items.h"
#include "./headerFiles/mainpage.h"
#include <QSqlQuery>
#include <fstream>

using namespace std;

int uidpass=0;

QString userfullname="";
QString filepath="";

ofstream fout;

Items::Items(int cuser,QString iname,QString fullname,QWidget *parent): QMainWindow(parent), ui(new Ui::Items)
{
    QSqlQuery heading;

    uidpass=cuser;
    userfullname=fullname;

    ui->setupUi(this);
    ui->label_4->setText(iname);
    ui->label_11->hide();

    heading.exec(QString("Select name from %1").arg(iname));
    heading.next();
    ui->label->setText(heading.value(0).toString());
    heading.next();
    ui->label_2->setText(heading.value(0).toString());
    heading.next();
    ui->label_3->setText(heading.value(0).toString());
    heading.next();
    ui->label_5->setText(heading.value(0).toString());
    heading.next();
    ui->label_6->setText(heading.value(0).toString());
    heading.next();
    ui->label_7->setText(heading.value(0).toString());
    heading.next();
    ui->label_8->setText(heading.value(0).toString());
    heading.next();
    ui->label_9->setText(heading.value(0).toString());
    heading.next();
    ui->label_10->setText(heading.value(0).toString());

    filepath=QString("C:/Users/Kriar/Documents/Project_Kriti/UserData/%1/").arg(QString::number(cuser))+QString("%1_%2.txt").arg(iname,QString::number(cuser));

    fout.open(filepath.toStdString());
    fout.close();
}

Items::~Items()
{
    delete ui;
}

void Items::on_pushButton_clicked()
{
    this->hide();
    MainPage *backlogin = new MainPage(uidpass,userfullname);
    backlogin->show();
}

void Items::on_pushButton_2_clicked()
{
    fout.open(filepath.toStdString());

    if(ui->doubleSpinBox->value()!=0)fout<<ui->label->text().toStdString()<<" "<<ui->doubleSpinBox->value()<<endl;
    if(ui->doubleSpinBox_2->value()!=0)fout<<ui->label_2->text().toStdString()<<" "<<ui->doubleSpinBox_2->value()<<endl;
    if(ui->doubleSpinBox_3->value()!=0)fout<<ui->label_3->text().toStdString()<<" "<<ui->doubleSpinBox_3->value()<<endl;
    if(ui->doubleSpinBox_4->value()!=0)fout<<ui->label_5->text().toStdString()<<" "<<ui->doubleSpinBox_4->value()<<endl;
    if(ui->doubleSpinBox_5->value()!=0)fout<<ui->label_6->text().toStdString()<<" "<<ui->doubleSpinBox_5->value()<<endl;
    if(ui->doubleSpinBox_6->value()!=0)fout<<ui->label_7->text().toStdString()<<" "<<ui->doubleSpinBox_6->value()<<endl;
    if(ui->doubleSpinBox_7->value()!=0)fout<<ui->label_8->text().toStdString()<<" "<<ui->doubleSpinBox_7->value()<<endl;
    if(ui->doubleSpinBox_8->value()!=0)fout<<ui->label_9->text().toStdString()<<" "<<ui->doubleSpinBox_8->value()<<endl;
    if(ui->doubleSpinBox_9->value()!=0)fout<<ui->label_10->text().toStdString()<<" "<<ui->doubleSpinBox_9->value()<<endl;

    fout.close();

    filepath="";

    ui->doubleSpinBox->setReadOnly(1);
    ui->doubleSpinBox_2->setReadOnly(1);
    ui->doubleSpinBox_3->setReadOnly(1);
    ui->doubleSpinBox_4->setReadOnly(1);
    ui->doubleSpinBox_5->setReadOnly(1);
    ui->doubleSpinBox_6->setReadOnly(1);
    ui->doubleSpinBox_7->setReadOnly(1);
    ui->doubleSpinBox_8->setReadOnly(1);
    ui->doubleSpinBox_9->setReadOnly(1);
    ui->pushButton_2->hide();
    ui->label_11->show();
}

