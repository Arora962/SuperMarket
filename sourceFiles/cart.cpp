#include "./headerFiles/cart.h"
#include "./uiHeaderFiles/ui_cart.h"
#include "./headerFiles/mainpage.h"
#include "./headerFiles/smtp.h"
#include <fstream>
#include <string>
#include <QSqlQuery>
#include<iostream>
#include <regex>
using namespace std;

int uidtopass=0,bill=0;
QString user_fullname="";

bool FileExists(const std::string& filename)
{
    ifstream file(filename.c_str());
    if (file)
        return true;
    else
        return false;
}

void Cart::bill_send()
{
    int tcount=0;

    QString sender="supermarketnoreply7@gmail.com";
    QString passwd="rclmapnajqpuqglh";
    QString server="smtp.gmail.com";
    QString subject="Bill";
    QString msg;
    QString Bill_Path="",Cart_Path="";

    string filepoint;

    QStringList A;

    QSqlQuery get_mail,get_tables;

    ofstream bill,cart;

    Smtp* smtp = new Smtp(sender, passwd, server, 465);
    get_mail.exec(QString("select Email from uinfo where UID =%1").arg(QString::number(uidtopass)));
    get_mail.next();
    get_tables.exec("show tables");
    get_tables.next();
    get_tables.next();

    msg=QString("Hi %1 ,\nThank you for shopping with us. Your bill is attached as follows. We hope to see you again. ").arg(user_fullname);
    Bill_Path=QString("../UserData/%1/Bill.txt").arg(QString::number(uidtopass));
    A.append(Bill_Path);
    smtp->sendMail_attach(sender, get_mail.value(0).toString() , subject,msg,A);

    QMessageBox::information(this,"Bill","Bill Sent successfully");

    for (tcount=0;tcount<8;tcount++)
    {
        Cart_Path=QString("../UserData/%1/%2_%3.txt").\
                    arg(QString::number(uidtopass),get_tables.value(0).toString(),QString::number(uidtopass));
        filepoint=Cart_Path.toStdString();
        if (FileExists(filepoint))
        {
            cart.open(Cart_Path.toStdString(),ios::trunc);
            cart.close();
        }
        get_tables.next();
    }

    bill.open(Bill_Path.toStdString(),ios::trunc);
    bill.close();
}
Cart::Cart(int current_user,QString fullname,QWidget *parent): QMainWindow(parent), ui(new Ui::Cart)
{
    bill=0;
    uidtopass=current_user;
    user_fullname=fullname;

    int i=0;

    string line;
    string filepoint;
    string bill_data_top="",bill_middle="",bill_bottom="";

    ifstream f;
    ofstream f2;

    ui->setupUi(this);
    ui->textBrowser->setReadOnly(1);

    QString get_tb;
    QSqlQuery get_table,get_price;
    QString Bill_Path="";

    Bill_Path=QString("../UserData/%1/Bill.txt").arg(QString::number(current_user));

    f2.open(Bill_Path.toStdString(),ios::trunc);
    bill_data_top="Hi "+fullname.toStdString()+",\n"+"Your bill is as follows:\n"+"Item Name";
    for (int space=0;space<24;space++)
        bill_data_top+=" ";
    bill_data_top+="Quantitiy\tPrice Per Item\tTotal\n";
    f2<<bill_data_top;
    f2.flush();

    get_table.exec("use SuperMarket");
    get_table.exec("show tables");
    get_table.next();

    while (get_table.next() && i<=7)
    {
        QString fp="",get_line="",cbody="";
        QString itemname="";

        int price=0,count=0;

        regex r("^[0-9]*[^\\d]+");
        regex r2("\\d+$");

        smatch m,m2;

        get_tb=get_table.value(0).toString();
        fp=QString("../UserData/%1/%2_%3.txt").arg(QString::number(current_user),get_tb,QString::number(current_user));
        if(f.is_open())
            f.close();
        filepoint=fp.toStdString();

        if (FileExists(filepoint))
        {
            f.open(filepoint,ios::in);
            while (!f.eof() && count<9)
            {
                getline(f,line);
                get_line=QString::fromStdString(line);
                cbody+=get_line+"\n";

                regex_search(line,m,r);
                regex_search(line,m2,r2);

                for (auto x : m)
                {
                    get_price.exec(QString("select name,price from %1 where name = '%2' ").arg(get_tb,QString::fromStdString(x.str()).trimmed()));
                    itemname=QString::fromStdString(x.str()).trimmed();
                    get_price.next();
                    price=get_price.value(1).toInt();
                    break;
                }
                bill_middle+=itemname.toStdString();
                for (int space=itemname.length();space<35;space++)
                    bill_middle+=" ";
                for(auto y: m2)
                {
                    int cp=QString::fromStdString(y.str()).toInt()*price;
                    bill+=QString::fromStdString(y.str()).toInt()*price;
                    QString item;
                    item=QString("%1\t\t%2\t\t%3\n").arg(QString::fromStdString(y.str()).trimmed(),QString::number(price),QString::number(cp));
                    if(price!=0)
                        bill_middle+=item.toStdString();
                    else
                        bill_middle+="\n";
                    f2<<bill_middle;
                    f2.flush();
                    bill_middle="";
                    break;
                }
                count++;
            }
            f2<<bill_middle;
            f2.flush();
            f.close();
            if(i==0)
                ui->textBrowser->setText(cbody);
            else if(i==1)
                ui->textBrowser_2->setText(cbody);
            else if(i==2)
                ui->textBrowser_3->setText(cbody);
            else if(i==3)
                ui->textBrowser_4->setText(cbody);
            else if(i==4)
                ui->textBrowser_5->setText(cbody);
            else if(i==5)
                ui->textBrowser_6->setText(cbody);
            else if(i==6)
                ui->textBrowser_7->setText(cbody);
            else if(i==7)
                ui->textBrowser_8->setText(cbody);
            i++;
            f2<<"\n";
            f2.flush();
        }
    }
    bill_bottom=QString("Subtotal[inclusive of taxes]:\t\t%1").arg(bill).toStdString();
    f2<<bill_bottom;
    f2.flush();
    f2.close();
    connect(ui->pushButton_2, SIGNAL(clicked()),this, SLOT(bill_send()));
}

Cart::~Cart()
{
    delete ui;
}

void Cart::on_pushButton_clicked()
{
    this->hide();
    MainPage *backlogin = new MainPage(uidtopass,user_fullname);
    backlogin->show();
}

void Cart::on_pushButton_2_clicked(){}

