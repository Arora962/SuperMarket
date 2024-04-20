/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_Main_Window;
    QLabel *label_2;
    QLabel *label_Image;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_5;
    QCheckBox *checkBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_Main_Window = new QGroupBox(centralwidget);
        groupBox_Main_Window->setObjectName("groupBox_Main_Window");
        groupBox_Main_Window->setGeometry(QRect(0, 0, 900, 600));
        groupBox_Main_Window->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	background-color:white;\n"
"	border:2px solid black;\n"
"	border-radius:40px;\n"
"}"));
        label_2 = new QLabel(groupBox_Main_Window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 10, 200, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Palatino Linotype")});
        font.setPointSize(35);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_Image = new QLabel(groupBox_Main_Window);
        label_Image->setObjectName("label_Image");
        label_Image->setGeometry(QRect(20, 100, 400, 350));
        label_Image->setPixmap(QPixmap(QString::fromUtf8("1.png")));
        label_Image->setScaledContents(true);
        lineEdit = new QLineEdit(groupBox_Main_Window);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(460, 180, 400, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: none;\n"
"  	border-bottom: 3px solid rgb(241,92,34);\n"
"    background-color: Transparent;\n"
"	color:black;\n"
"	padding:5px 5px 5px 5px;\n"
"}\n"
"QLineEdit:Focus\n"
"{\n"
"	 border: 2px solid rgb(241,92,34);\n"
"}"));
        lineEdit_2 = new QLineEdit(groupBox_Main_Window);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(460, 290, 400, 50));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: none;\n"
"  	border-bottom: 3px solid rgb(241,92,34);\n"
"    background-color: Transparent;\n"
"	color:black;\n"
"	padding:5px 5px 5px 5px;\n"
"}\n"
"QLineEdit:Focus\n"
"{\n"
"	 border: 2px solid rgb(241,92,34);\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(groupBox_Main_Window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(460, 130, 160, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color:rgb(90,90,100);\n"
"}"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(groupBox_Main_Window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(460, 240, 160, 40));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color:rgb(90,90,100);\n"
"}"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton = new QPushButton(groupBox_Main_Window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 420, 400, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(15);
        font3.setBold(true);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:none;\n"
"	background-color:rgb(28, 130, 255);\n"
"	border-radius:15px;\n"
"	color:black;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	border:none;\n"
"	background-color:rgb(28, 130, 255);\n"
"	border-radius:15px;\n"
"	color:white;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	border:5px solid rgb(241,92,34);\n"
"	background-color:rgb(28, 130, 255);\n"
"	border-radius:15px;\n"
"	color:red;\n"
"}"));
        label = new QLabel(groupBox_Main_Window);
        label->setObjectName("label");
        label->setGeometry(QRect(830, 10, 61, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	border:2px solid black;\n"
"	background-color:rgb(241,92,34);\n"
"	border-radius:30px;\n"
"}"));
        label->setFrameShape(QFrame::NoFrame);
        label->setPixmap(QPixmap(QString::fromUtf8("2.png")));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox_Main_Window);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(517, 492, 181, 30));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(12);
        font4.setBold(true);
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color:rgb(90,90,100);\n"
"}"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        checkBox = new QCheckBox(groupBox_Main_Window);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(460, 360, 391, 41));
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"	color:rgb(90,90,100);\n"
"}\n"
"QCheckBox:indicator:checked\n"
"{\n"
"	image: url(:/new/prefix1/22.png);\n"
"	width:40px;\n"
"	height:40px;\n"
"}\n"
"QCheckBox:indicator:unchecked\n"
"{\n"
"	image: url(:/new/prefix1/11.png);\n"
"	width:40px;\n"
"	height:40px;\n"
"}"));
        checkBox->setChecked(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_Main_Window->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label_Image->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter User Name", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "I agree to all terms and conditions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
