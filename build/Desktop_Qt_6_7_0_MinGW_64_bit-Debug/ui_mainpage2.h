/********************************************************************************
** Form generated from reading UI file 'mainpage2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE2_H
#define UI_MAINPAGE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage2
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage2)
    {
        if (MainPage2->objectName().isEmpty())
            MainPage2->setObjectName("MainPage2");
        MainPage2->resize(800, 600);
        MainPage2->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-color:\"blue\";\n"
"}"));
        centralwidget = new QWidget(MainPage2);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 50, 671, 451));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	background-color:white;\n"
"}"));
        groupBox->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(170, 160, 201, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(78, 280, 51, 20));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(170, 100, 251, 21));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(170, 220, 113, 24));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(170, 330, 251, 21));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(48, 330, 111, 21));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(68, 50, 61, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(68, 100, 61, 20));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 160, 81, 21));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 50, 251, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 220, 49, 16));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(170, 280, 251, 21));
        lineEdit_5->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 160, 49, 16));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 390, 80, 24));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(500, 390, 80, 24));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(500, 390, 80, 24));
        MainPage2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainPage2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage2);
        statusbar->setObjectName("statusbar");
        MainPage2->setStatusBar(statusbar);

        retranslateUi(MainPage2);

        QMetaObject::connectSlotsByName(MainPage2);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage2)
    {
        MainPage2->setWindowTitle(QCoreApplication::translate("MainPage2", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainPage2", "Create Account", nullptr));
        lineEdit_3->setText(QString());
        label_5->setText(QCoreApplication::translate("MainPage2", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("MainPage2", "Re-enter Password", nullptr));
        label->setText(QCoreApplication::translate("MainPage2", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainPage2", "Last Name", nullptr));
        pushButton->setText(QCoreApplication::translate("MainPage2", "Send OTP", nullptr));
        label_4->setText(QCoreApplication::translate("MainPage2", "OTP", nullptr));
        label_3->setText(QCoreApplication::translate("MainPage2", "E-Mail", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainPage2", "Back", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainPage2", "Register", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainPage2", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage2: public Ui_MainPage2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE2_H
