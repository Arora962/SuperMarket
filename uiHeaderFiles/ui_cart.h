/********************************************************************************
** Form generated from reading UI file 'cart.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CART_H
#define UI_CART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cart
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cart)
    {
        if (Cart->objectName().isEmpty())
            Cart->setObjectName("Cart");
        Cart->resize(919, 631);
        Cart->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-color:\"orange\";\n"
"}"));
        centralwidget = new QWidget(Cart);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 10, 261, 161));
        textBrowser->setFrameShadow(QFrame::Sunken);
        textBrowser->setLineWidth(1);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser->setUndoRedoEnabled(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 520, 101, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(680, 530, 101, 41));
        pushButton_2->setFont(font);
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(30, 170, 261, 161));
        textBrowser_2->setFrameShadow(QFrame::Sunken);
        textBrowser_2->setLineWidth(1);
        textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser_2->setUndoRedoEnabled(true);
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(30, 330, 261, 161));
        textBrowser_3->setFrameShadow(QFrame::Sunken);
        textBrowser_3->setLineWidth(1);
        textBrowser_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser_3->setUndoRedoEnabled(true);
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(290, 10, 261, 161));
        textBrowser_4->setFrameShadow(QFrame::Sunken);
        textBrowser_4->setLineWidth(1);
        textBrowser_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_4->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser_4->setUndoRedoEnabled(true);
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName("textBrowser_5");
        textBrowser_5->setGeometry(QRect(290, 170, 261, 161));
        textBrowser_5->setFrameShadow(QFrame::Sunken);
        textBrowser_5->setLineWidth(1);
        textBrowser_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_5->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser_5->setUndoRedoEnabled(true);
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName("textBrowser_6");
        textBrowser_6->setGeometry(QRect(290, 330, 261, 161));
        textBrowser_6->setFrameShadow(QFrame::Sunken);
        textBrowser_6->setLineWidth(1);
        textBrowser_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_6->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser_6->setUndoRedoEnabled(true);
        textBrowser_7 = new QTextBrowser(centralwidget);
        textBrowser_7->setObjectName("textBrowser_7");
        textBrowser_7->setGeometry(QRect(550, 10, 261, 161));
        textBrowser_7->setFrameShadow(QFrame::Sunken);
        textBrowser_7->setLineWidth(1);
        textBrowser_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_7->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser_7->setUndoRedoEnabled(true);
        textBrowser_8 = new QTextBrowser(centralwidget);
        textBrowser_8->setObjectName("textBrowser_8");
        textBrowser_8->setGeometry(QRect(550, 170, 261, 321));
        textBrowser_8->setFrameShadow(QFrame::Sunken);
        textBrowser_8->setLineWidth(1);
        textBrowser_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_8->setUndoRedoEnabled(true);
        Cart->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cart);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 919, 21));
        Cart->setMenuBar(menubar);
        statusbar = new QStatusBar(Cart);
        statusbar->setObjectName("statusbar");
        Cart->setStatusBar(statusbar);

        retranslateUi(Cart);

        QMetaObject::connectSlotsByName(Cart);
    } // setupUi

    void retranslateUi(QMainWindow *Cart)
    {
        Cart->setWindowTitle(QCoreApplication::translate("Cart", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Cart", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Cart", "Get Bill", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cart: public Ui_Cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_H
