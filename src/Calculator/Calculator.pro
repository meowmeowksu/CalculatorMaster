QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    credit.cpp \
    deposit.cpp \
    graphics.cpp \
    main.cpp \
    mainwindow.cpp \
    ../s21_smart_calc.c \
    ../s21_RPN.c \
    ../s21_calculate.c \
    ../s21_parse_string.c \
    ../s21_validation.c \
    ../s21_credit_calc.c \
    ../s21_stack.c \
    ../s21_deposit_calc.c \
    qcustomplot.cpp

HEADERS += \
    credit.h \
    deposit.h \
    graphics.h \
    mainwindow.h \
    ../s21_smart_calc.h \
    qcustomplot.h


FORMS += \
    credit.ui \
    deposit.ui \
    graphics.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
