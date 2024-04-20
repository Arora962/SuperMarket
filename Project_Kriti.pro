QT       += core gui sql network
QT +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

TARGET = smtp
TEMPLATE = app

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ./sourceFiles/cart.cpp \
    ./sourceFiles/items.cpp \
    ./sourceFiles/kycpage.cpp \
    ./sourceFiles/main.cpp \
    ./sourceFiles/mainpage.cpp \
    ./sourceFiles/mainpage2.cpp \
    ./sourceFiles/mainwindow.cpp\
    ./sourceFiles/smtp.cpp

HEADERS += \
    ./headerFiles/cart.h \
    ./headerFiles/items.h \
    ./headerFiles/kycpage.h \
    ./headerFiles/mainpage.h \
    ./headerFiles/mainpage2.h \
    ./headerFiles/mainwindow.h \
    ./uiHeaderFiles/ui_mainwindow.h\
    ./uiHeaderFiles/ui_cart.h\
    ./uiHeaderFiles/ui_items.h\
    ./uiHeaderFiles/ui_kycpage.h\
    ./uiHeaderFiles/ui_mainpage.h\
    ./uiHeaderFiles/ui_mainpage2.h\
    ./headerFiles/smtp.h


FORMS += \
    ./uiFiles/cart.ui \
    ./uiFiles/items.ui \
    ./uiFiles/kycpage.ui \
    ./uiFiles/mainpage.ui \
    ./uiFiles/mainpage2.ui \
    ./uiFiles/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Res.qrc
