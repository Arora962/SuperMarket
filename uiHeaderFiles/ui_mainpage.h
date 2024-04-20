/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QLabel *label_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(906, 620);
        MainPage->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-color:\"aqua\";\n"
"}"));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 60, 421, 81));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:rgb(52,50,64);\n"
"	color:white;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 310, 131, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 250, 131, 41));
        pushButton_2->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 230, 151, 151));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:\"yellow\";\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 180, 151, 41));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 180, 151, 41));
        pushButton_4->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 20, 261, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(16);
        font2.setItalic(true);
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 180, 361, 21));
        label_4->setFont(font2);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(250, 230, 141, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(true);
        radioButton->setFont(font3);
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(250, 280, 141, 21));
        radioButton_2->setFont(font3);
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(250, 330, 201, 21));
        radioButton_3->setFont(font3);
        radioButton_4 = new QRadioButton(centralwidget);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(250, 380, 141, 21));
        radioButton_4->setFont(font3);
        radioButton_5 = new QRadioButton(centralwidget);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setGeometry(QRect(570, 230, 141, 21));
        radioButton_5->setFont(font3);
        radioButton_6 = new QRadioButton(centralwidget);
        radioButton_6->setObjectName("radioButton_6");
        radioButton_6->setGeometry(QRect(570, 280, 181, 21));
        radioButton_6->setFont(font3);
        radioButton_7 = new QRadioButton(centralwidget);
        radioButton_7->setObjectName("radioButton_7");
        radioButton_7->setGeometry(QRect(570, 330, 141, 21));
        radioButton_7->setFont(font3);
        radioButton_8 = new QRadioButton(centralwidget);
        radioButton_8->setObjectName("radioButton_8");
        radioButton_8->setGeometry(QRect(570, 380, 141, 21));
        radioButton_8->setFont(font3);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(600, 450, 151, 41));
        pushButton_5->setFont(font1);
        MainPage->setCentralWidget(centralwidget);
        label_2->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label_3->raise();
        label_4->raise();
        radioButton->raise();
        radioButton_2->raise();
        radioButton_3->raise();
        radioButton_4->raise();
        radioButton_5->raise();
        radioButton_6->raise();
        radioButton_7->raise();
        radioButton_8->raise();
        pushButton_5->raise();
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 906, 21));
        MainPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage);
        statusbar->setObjectName("statusbar");
        MainPage->setStatusBar(statusbar);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainPage", "Welcome To SuperMarket", nullptr));
        pushButton->setText(QCoreApplication::translate("MainPage", "Logout", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainPage", "Go To Cart", nullptr));
        label_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainPage", "Hide Menu", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainPage", "Show Menu", nullptr));
        label_3->setText(QCoreApplication::translate("MainPage", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainPage", "What would you like to purchase today?", nullptr));
        radioButton->setText(QCoreApplication::translate("MainPage", "Baby Products", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainPage", "Books", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainPage", "Cooking_Supplements", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainPage", "Cosmetics", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainPage", "Food", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainPage", "Fruits_Vegetables", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainPage", "Stationery", nullptr));
        radioButton_8->setText(QCoreApplication::translate("MainPage", "Toys", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainPage", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
