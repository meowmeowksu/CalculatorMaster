/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_div;
    QPushButton *pushButton_deleteall;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_openbracket;
    QPushButton *pushButton_closebracket;
    QPushButton *pushButton_C;
    QLabel *label;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_x;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_log;
    QCheckBox *checkBox_graph;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_xinput;
    QLabel *label_output;
    QRadioButton *radioButton_depositcalc;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(715, 455);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background: rgb(45, 42, 55)"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(640, 380, 60, 60));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);
        pushButton_plus->setMouseTracking(false);
        pushButton_plus->setAutoFillBackground(false);
        pushButton_plus->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_plus->setAutoExclusive(false);
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(640, 310, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);
        pushButton_minus->setMouseTracking(false);
        pushButton_minus->setAutoFillBackground(false);
        pushButton_minus->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_minus->setAutoExclusive(false);
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(640, 240, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_mul->sizePolicy().hasHeightForWidth());
        pushButton_mul->setSizePolicy(sizePolicy);
        pushButton_mul->setMouseTracking(false);
        pushButton_mul->setAutoFillBackground(false);
        pushButton_mul->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_mul->setAutoExclusive(false);
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(640, 170, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy);
        pushButton_div->setMouseTracking(false);
        pushButton_div->setAutoFillBackground(false);
        pushButton_div->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_div->setAutoExclusive(false);
        pushButton_deleteall = new QPushButton(centralwidget);
        pushButton_deleteall->setObjectName(QString::fromUtf8("pushButton_deleteall"));
        pushButton_deleteall->setGeometry(QRect(640, 100, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_deleteall->sizePolicy().hasHeightForWidth());
        pushButton_deleteall->setSizePolicy(sizePolicy);
        pushButton_deleteall->setMouseTracking(false);
        pushButton_deleteall->setAutoFillBackground(false);
        pushButton_deleteall->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(151, 93, 250);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_deleteall->setAutoExclusive(false);
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(570, 380, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setMouseTracking(false);
        pushButton_equal->setAutoFillBackground(false);
        pushButton_equal->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.368, y1:0.472227, x2:0.389, y2:0.0397727, stop:0 rgba(118, 67, 205, 255), stop:0.968421 rgba(150, 113, 213, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_equal->setAutoExclusive(false);
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(500, 380, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy);
        pushButton_dot->setMouseTracking(false);
        pushButton_dot->setAutoFillBackground(false);
        pushButton_dot->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_dot->setAutoExclusive(false);
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(430, 380, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setMouseTracking(false);
        pushButton_0->setAutoFillBackground(false);
        pushButton_0->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_0->setAutoExclusive(false);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(430, 310, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMouseTracking(false);
        pushButton_1->setAutoFillBackground(false);
        pushButton_1->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_1->setAutoExclusive(false);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 310, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMouseTracking(false);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_2->setAutoExclusive(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 310, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMouseTracking(false);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_3->setAutoExclusive(false);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(430, 240, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMouseTracking(false);
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_4->setAutoExclusive(false);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(500, 240, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMouseTracking(false);
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_5->setAutoExclusive(false);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(570, 240, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMouseTracking(false);
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_6->setAutoExclusive(false);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(430, 170, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMouseTracking(false);
        pushButton_7->setAutoFillBackground(false);
        pushButton_7->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_7->setAutoExclusive(false);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(500, 170, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMouseTracking(false);
        pushButton_8->setAutoFillBackground(false);
        pushButton_8->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_8->setAutoExclusive(false);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(570, 170, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMouseTracking(false);
        pushButton_9->setAutoFillBackground(false);
        pushButton_9->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_9->setAutoExclusive(false);
        pushButton_openbracket = new QPushButton(centralwidget);
        pushButton_openbracket->setObjectName(QString::fromUtf8("pushButton_openbracket"));
        pushButton_openbracket->setGeometry(QRect(430, 100, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_openbracket->sizePolicy().hasHeightForWidth());
        pushButton_openbracket->setSizePolicy(sizePolicy);
        pushButton_openbracket->setMouseTracking(false);
        pushButton_openbracket->setAutoFillBackground(false);
        pushButton_openbracket->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_openbracket->setAutoExclusive(false);
        pushButton_closebracket = new QPushButton(centralwidget);
        pushButton_closebracket->setObjectName(QString::fromUtf8("pushButton_closebracket"));
        pushButton_closebracket->setGeometry(QRect(500, 100, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_closebracket->sizePolicy().hasHeightForWidth());
        pushButton_closebracket->setSizePolicy(sizePolicy);
        pushButton_closebracket->setMouseTracking(false);
        pushButton_closebracket->setAutoFillBackground(false);
        pushButton_closebracket->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_closebracket->setAutoExclusive(false);
        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(570, 100, 60, 60));
        sizePolicy.setHeightForWidth(pushButton_C->sizePolicy().hasHeightForWidth());
        pushButton_C->setSizePolicy(sizePolicy);
        pushButton_C->setMouseTracking(false);
        pushButton_C->setAutoFillBackground(false);
        pushButton_C->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_C->setAutoExclusive(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 691, 61));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(34, 32, 42);\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(20, 240, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy);
        pushButton_sin->setMouseTracking(false);
        pushButton_sin->setAutoFillBackground(false);
        pushButton_sin->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_sin->setAutoExclusive(false);
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(120, 240, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_asin->sizePolicy().hasHeightForWidth());
        pushButton_asin->setSizePolicy(sizePolicy);
        pushButton_asin->setMouseTracking(false);
        pushButton_asin->setAutoFillBackground(false);
        pushButton_asin->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_asin->setAutoExclusive(false);
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(220, 240, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_pow->sizePolicy().hasHeightForWidth());
        pushButton_pow->setSizePolicy(sizePolicy);
        pushButton_pow->setMouseTracking(false);
        pushButton_pow->setAutoFillBackground(false);
        pushButton_pow->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_pow->setAutoExclusive(false);
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(320, 240, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_x->sizePolicy().hasHeightForWidth());
        pushButton_x->setSizePolicy(sizePolicy);
        pushButton_x->setMouseTracking(false);
        pushButton_x->setAutoFillBackground(false);
        pushButton_x->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_x->setAutoExclusive(false);
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(20, 310, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy);
        pushButton_cos->setMouseTracking(false);
        pushButton_cos->setAutoFillBackground(false);
        pushButton_cos->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_cos->setAutoExclusive(false);
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(120, 310, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_acos->sizePolicy().hasHeightForWidth());
        pushButton_acos->setSizePolicy(sizePolicy);
        pushButton_acos->setMouseTracking(false);
        pushButton_acos->setAutoFillBackground(false);
        pushButton_acos->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_acos->setAutoExclusive(false);
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(220, 310, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy);
        pushButton_sqrt->setMouseTracking(false);
        pushButton_sqrt->setAutoFillBackground(false);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_sqrt->setAutoExclusive(false);
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(320, 310, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy);
        pushButton_ln->setMouseTracking(false);
        pushButton_ln->setAutoFillBackground(false);
        pushButton_ln->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_ln->setAutoExclusive(false);
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(20, 380, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_tan->sizePolicy().hasHeightForWidth());
        pushButton_tan->setSizePolicy(sizePolicy);
        pushButton_tan->setMouseTracking(false);
        pushButton_tan->setAutoFillBackground(false);
        pushButton_tan->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_tan->setAutoExclusive(false);
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(120, 380, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_atan->sizePolicy().hasHeightForWidth());
        pushButton_atan->setSizePolicy(sizePolicy);
        pushButton_atan->setMouseTracking(false);
        pushButton_atan->setAutoFillBackground(false);
        pushButton_atan->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_atan->setAutoExclusive(false);
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(220, 380, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy);
        pushButton_mod->setMouseTracking(false);
        pushButton_mod->setAutoFillBackground(false);
        pushButton_mod->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_mod->setAutoExclusive(false);
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(320, 380, 81, 60));
        sizePolicy.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy);
        pushButton_log->setMouseTracking(false);
        pushButton_log->setAutoFillBackground(false);
        pushButton_log->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  25px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.521053, y1:0.989, x2:0.536842, y2:0, stop:0 rgba(27, 25, 33, 255), stop:1 rgba(70, 69, 90, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  20px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_log->setAutoExclusive(false);
        checkBox_graph = new QCheckBox(centralwidget);
        checkBox_graph->setObjectName(QString::fromUtf8("checkBox_graph"));
        checkBox_graph->setGeometry(QRect(20, 194, 101, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        checkBox_graph->setFont(font2);
        checkBox_graph->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width:  20px;\n"
"    height:  20px;\n"
"    background-color: gray;\n"
"    border-style: solid;\n"
"    border-width:  1px;\n"
"    border-color: white;\n"
"    border-radius:  2px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    border-color: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"}\n"
"\n"
"QCheckBox {\n"
"color:white;\n"
"}"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 102, 211, 21));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        radioButton->setFont(font3);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	background-color:rgb(34, 32, 42);\n"
"    border-style: outset; \n"
"    border-radius: 7px; \n"
"	color: rgb(255, 255, 255);\n"
"	}\n"
""));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 135, 211, 21));
        radioButton_2->setFont(font3);
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	background-color:rgb(34, 32, 42);\n"
"    border-style: outset; \n"
"    border-radius: 7px; \n"
"	color: rgb(255, 255, 255);\n"
"	}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(152, 205, 16, 21));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"Color : rgb(255, 255, 255);\n"
"}"));
        doubleSpinBox_xinput = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_xinput->setObjectName(QString::fromUtf8("doubleSpinBox_xinput"));
        doubleSpinBox_xinput->setGeometry(QRect(180, 203, 221, 24));
        doubleSpinBox_xinput->setFont(font2);
        doubleSpinBox_xinput->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(34, 32, 42);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_output = new QLabel(centralwidget);
        label_output->setObjectName(QString::fromUtf8("label_output"));
        label_output->setGeometry(QRect(236, 123, 161, 61));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setWeight(75);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        label_output->setFont(font4);
        label_output->setLayoutDirection(Qt::LeftToRight);
        label_output->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-alignment: AlignCenter;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(34, 32, 42);\n"
"}"));
        radioButton_depositcalc = new QRadioButton(centralwidget);
        radioButton_depositcalc->setObjectName(QString::fromUtf8("radioButton_depositcalc"));
        radioButton_depositcalc->setGeometry(QRect(20, 170, 211, 21));
        radioButton_depositcalc->setFont(font3);
        radioButton_depositcalc->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	background-color:rgb(34, 32, 42);\n"
"    border-style: outset; \n"
"    border-radius: 7px; \n"
"	color: rgb(255, 255, 255);\n"
"	}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 herminaf", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_deleteall->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_openbracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_closebracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label->setText(QString());
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        checkBox_graph->setText(QCoreApplication::translate("MainWindow", "Graphic", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_output->setText(QString());
        radioButton_depositcalc->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
