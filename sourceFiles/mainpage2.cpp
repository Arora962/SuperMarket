#include <QTextFormat>
#include "./headerFiles/mainpage2.h"
#include "./uiHeaderFiles/ui_mainpage2.h"
#include <QtCore>
#include <QCoreApplication>
#include <QSqlQuery>
#include "./headerFiles/smtp.h"
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include "./headerFiles/mainwindow.h"
#include "./headerFiles/kycpage.h"

using namespace std;
QString msg,fname="",lname="",otp="";

QString generateOTP()
{
    const QString characters = "0123456789";
    const int length = 6;
    QString body;

    for (int i = 0; i < length; ++i)
        otp += characters[rand() % characters.length()];

    body="Hi "+fname+" "+lname+","+"\n"+"Your OTP is "+otp+"\n Do Not Share with anyone."+"\n\nThanks & Regards,\nSuperMarket";
    return body;
}

MainPage2::MainPage2(QWidget *parent): QMainWindow(parent), ui(new Ui::MainPage2)
{
    ui->setupUi(this);
    ui->pushButton_4->hide();

    connect(ui->pushButton, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->pushButton_3, SIGNAL(clicked()),this, SLOT(register_user()));
}
void MainPage2::register_user()
{
    QSqlQuery enter_info,get_count,save;

    QString iquery,em,o4tp,p5ass,re6pass;

    int uid=0,check_count=0;

    fname=ui->lineEdit->text();
    lname=ui->lineEdit_2->text();

    em=ui->lineEdit_3->text();
    o4tp=ui->lineEdit_4->text();
    p5ass=ui->lineEdit_5->text();
    re6pass=ui->lineEdit_6->text();

    if(fname=="")
        QMessageBox::warning( 0, tr( "First Name" ), tr( "First Name can't be empty" ) );
    else
        check_count+=1;

    if(lname=="")
        QMessageBox::warning( 0, tr( "Last Name" ), tr( "Last Name can't be empty" ) );
    else
        check_count+=1;

    if(em=="")
        QMessageBox::warning( 0, tr( "Email" ), tr( "Email can't be empty" ) );
    else
        check_count+=1;

    if(o4tp=="")
        QMessageBox::warning( 0, tr( "Otp" ), tr( "Otp can't be empty" ) );
    else
        check_count+=1;

    if(p5ass=="")
        QMessageBox::warning( 0, tr( "Password" ), tr( "Password can't be empty" ) );
    else
        check_count+=1;

    if(p5ass!=re6pass)
        QMessageBox::warning( 0, tr( "Password" ), tr( "Passwords don't match" ) );
    else
        check_count+=1;

    if(ui->lineEdit_4->text()==otp && check_count==6)
    {
        get_count.exec("Select count(*) from uinfo");
        while (get_count.next())
            uid = get_count.value(0).toInt()+1;

        iquery=QString("Insert into ukey(UID,password) Values(%1,'%2')").arg(QString::number(uid),p5ass);
        enter_info.exec(iquery);
        iquery=QString("Insert into uinfo(UID,First_Name,Last_Name,Email) Values(%1,'%2','%3','%4')").arg(QString::number(uid),fname,lname,em);
        enter_info.exec(iquery);
        save.exec("commit");

        QMessageBox::information(this,"Create account","user registered successfully");

        ui->pushButton_2->hide();
        ui->pushButton_3->hide();
        ui->pushButton->hide();
        ui->pushButton_4->show();
        ui->lineEdit->setReadOnly(1);
        ui->lineEdit_2->setReadOnly(1);
        ui->lineEdit_3->setReadOnly(1);
        ui->lineEdit_4->setReadOnly(1);
        ui->lineEdit_5->setReadOnly(1);
        ui->lineEdit_6->setReadOnly(1);
    }
    else if(ui->lineEdit_4->text()!=otp)
        QMessageBox::warning( 0, tr( "Otp" ), tr( "Wrong Otp" ) );
}
void MainPage2::sendMail()
{
    QString uname="supermarketnoreply7@gmail.com";
    QString passwd="rclmapnajqpuqglh";
    QString server="smtp.gmail.com";
    QString subject="OTP";

    QSqlQuery q ;

    Smtp* smtp = new Smtp(uname, passwd, server, 465);

    msg=generateOTP();

    smtp->sendMail(uname, ui->lineEdit_3->text() , subject,msg);
}

void MainPage2::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}
MainPage2::~MainPage2()
{
    delete ui;
}

void MainPage2::on_pushButton_2_clicked()
{
    this->hide();
    MainWindow *newmainw = new MainWindow();
    newmainw->show();
}

void MainPage2::on_pushButton_3_clicked(){}

void MainPage2::on_pushButton_4_clicked()
{
    this->hide();
    kycpage *newwin = new kycpage();
    newwin->show();
}

