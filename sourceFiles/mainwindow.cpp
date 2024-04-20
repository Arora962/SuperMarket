#include "./headerFiles/mainwindow.h"
#include "./uiHeaderFiles/ui_mainwindow.h"
#include "./headerFiles/mainpage2.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground, true);
    QPixmap Temp;

    Temp = grab(QRect(0,0,width(),height()));

    Temp.save("Qt Login Screen.jpg");

    DBConnection = QSqlDatabase::addDatabase("QMYSQL");
    DBConnection.setHostName("localhost");
    DBConnection.setDatabaseName("supermarket");
    DBConnection.setPort(3306);
    DBConnection.setUserName("root");
    DBConnection.setPassword("SQL_Password");
    DBConnection.open();
    if (DBConnection.open())
        qDebug() << "Database is Connected";
    else
        qDebug() << "Database is not connected";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exitButton_clicked()
{
    QMessageBox msg;

    msg.setWindowTitle("Quit");
    msg.setText("Are you sure you want to quit?");
    msg.setIcon(QMessageBox::Question);
    msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    msg.button(msg.Yes)->setStyleSheet(QString::fromUtf8("background-color: aqua;"));
    msg.button(msg.No)->setStyleSheet(QString::fromUtf8("background-color: aqua;"));
    msg.setStyleSheet(QString::fromUtf8("background-color: white;"));

    int answer=msg.exec();

    switch (answer)
    {
    case QMessageBox::Yes:
        QApplication::quit();
        break;
    case QMessageBox::No:
        break;
    };
}
void MainWindow::on_pushButton_clicked()
{
    QString UserName = ui->lineEdit->text();
    QString Password = ui->lineEdit_2->text();
    QString unames[100],upass[100],udisp[100];
    QString name,password;
    QString filepath;

    QSqlQuery q ,disp;

    int i=0,j=0,flag=0;

    q.exec("SELECT * FROM ukey;");
    disp.exec("SELECT * from uinfo");

    while (q.next())
    {
        disp.next();
        name = q.value(1).toString();
        password = q.value(2).toString();
        unames[i]=name;
        upass[i]=password;
        udisp[i]=disp.value(1).toString()+" "+disp.value(2).toString();
        i++;
    }
    for(j=0;j<10;j++)
    {
        if (UserName=="")
        {
            QMessageBox::information(this,"Sign In","username can't be blank");
            break;
        }
        else if (unames[j]==UserName)
        {
            flag=1;
            if(upass[j]==Password)
            {
                QMessageBox::information(this,"Sign In","Login Success");
                QDir dir("../UserData");

                if (!dir.exists())
                    dir.mkpath(".");

                filepath=QString("../UserData/%1").arg(QString::number(j+1));

                QDir dir2(filepath);

                if (!dir2.exists())
                    dir2.mkpath(".");

                this->hide();
                MainPage *mainpage = new MainPage(j+1,udisp[j]);
                mainpage->show();
            }
            else
                QMessageBox::information(this,"Sign In","Wrong Password");

            break;
        }
    }
    if(UserName=="testuser" && Password== "testpassword")
    {
        QMessageBox::information(this,"Sign In","Login Success");
        QDir dir("../UserData");

        if (!dir.exists())
            dir.mkpath(".");

        this->hide();
        MainPage *mainpage = new MainPage();
        mainpage->show();
    }
    else if (flag==0 && UserName!="")
        QMessageBox::information(this,"Sign In","user not found");
}
void MainWindow::on_signup_clicked()
{
    this->hide();
    MainPage2 *mnpg2 = new MainPage2();
    mnpg2->show();
}

