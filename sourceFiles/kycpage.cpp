#include "./headerFiles/kycpage.h"
#include "./uiHeaderFiles/ui_kycpage.h"
#include "./headerFiles/mainwindow.h"
#include "./headerFiles/smtp.h"
#include <QMessageBox>


kycpage::kycpage(QWidget *parent): QMainWindow(parent), ui(new Ui::kycpage)
{
    ui->setupUi(this);
    connect(ui->pushButton_3, SIGNAL(clicked()),this, SLOT(save_user()));
}

int uid=0;

void e_verify()
{
    qDebug()<<"Am I here";
    QString sender="supermarketnoreply7@gmail.com";
    QString passwd="rclmapnajqpuqglh";
    QString server="smtp.gmail.com";
    QString subject="Registration Successfull";
    QString msg;

    QSqlQuery get_mail,get_details;

    Smtp* smtp = new Smtp(sender, passwd, server, 465);

    get_mail.exec(QString("select Email from uinfo where UID =%1").arg(QString::number(uid)));
    get_mail.next();
    get_details.exec(QString("select username,password from ukey where UID = %1").arg(QString::number(uid)));
    get_details.next();

    msg="Thank you for registering. Your username is "+get_details.value(0).toString()+"\n Password is "+get_details.value(1).toString();

    smtp->sendMail(sender, get_mail.value(0).toString() , subject,msg);
}
void kycpage::save_user()
{
    QSqlQuery chk_info,get_count,save,enter_info;

    QString iquery,phone,username,get_dob;

    QDate dob;

    int check_count=0,flag=0;

    phone=ui->lineEdit_4->text();
    username=ui->lineEdit_5->text();
    dob=ui->dateEdit->date();
    get_dob=dob.toString("yyyy-MM-dd");

    if(phone=="")
        QMessageBox::warning( 0, tr( "Phone" ), tr( "Phone can't be empty" ) );
    else
        check_count+=1;
    if(username=="")
        QMessageBox::warning( 0, tr( "username" ), tr( "User Name can't be empty" ) );
    else
        check_count+=1;

    chk_info.exec("select username from ukey");
    get_count.exec("Select count(*) from uinfo");

    while (get_count.next())
    {
        uid = get_count.value(0).toInt();
        qDebug()<<uid;
    }
    while (chk_info.next())
    {
        if(username==chk_info.value(0))
        {
            qDebug()<<"username"<<username<<"chk_info"<<chk_info.value(0);
            flag=1;
            break;
        }
    }
    if(flag==1)
        QMessageBox::warning( 0, tr( "username" ), tr( "User Name already exists." ) );
    else
        check_count+=1;

    if(flag==0 && check_count==3)
    {
        iquery=QString("update ukey SET username = '%1' where UID=%2").arg(username,QString::number(uid));
        enter_info.exec(iquery);
        iquery=QString("update uinfo set DOB= '%1',Phone = %2 Where UID = %3").arg(get_dob,phone,QString::number(uid));
        enter_info.exec(iquery);
        save.exec("commit");

        qDebug()<<"hello";
        e_verify();

        this->hide();
        MainWindow *login_proceed = new MainWindow();
        login_proceed->show();
    }
}

kycpage::~kycpage()
{
    delete ui;
}


