/********************************************************************************
** Form generated from reading UI file 'kycpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KYCPAGE_H
#define UI_KYCPAGE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kycpage
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QDateEdit *dateEdit;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *kycpage)
    {
        if (kycpage->objectName().isEmpty())
            kycpage->setObjectName("kycpage");
        kycpage->resize(800, 600);
        kycpage->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-color:\"blue\";\n"
"}"));
        centralwidget = new QWidget(kycpage);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 50, 621, 391));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	background-color:white;\n"
"}"));
        groupBox->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(68, 280, 61, 20));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(170, 220, 113, 24));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 50, 61, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(68, 100, 91, 41));
        label_2->setWordWrap(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 220, 49, 16));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(460, 340, 111, 31));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(170, 50, 110, 25));
        dateEdit->setDate(QDate(2023, 12, 31));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(170, 100, 201, 101));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(170, 280, 211, 21));
        kycpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(kycpage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        kycpage->setMenuBar(menubar);
        statusbar = new QStatusBar(kycpage);
        statusbar->setObjectName("statusbar");
        kycpage->setStatusBar(statusbar);

        retranslateUi(kycpage);

        QMetaObject::connectSlotsByName(kycpage);
    } // setupUi

    void retranslateUi(QMainWindow *kycpage)
    {
        kycpage->setWindowTitle(QCoreApplication::translate("kycpage", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("kycpage", "Some More Details", nullptr));
        label_5->setText(QCoreApplication::translate("kycpage", "User Name", nullptr));
        lineEdit_4->setText(QString());
        label->setText(QCoreApplication::translate("kycpage", "DOB", nullptr));
        label_2->setText(QCoreApplication::translate("kycpage", "Full Residential Address", nullptr));
        label_4->setText(QCoreApplication::translate("kycpage", "Phone", nullptr));
        pushButton_3->setText(QCoreApplication::translate("kycpage", "Proceed to login", nullptr));
        lineEdit_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class kycpage: public Ui_kycpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KYCPAGE_H
