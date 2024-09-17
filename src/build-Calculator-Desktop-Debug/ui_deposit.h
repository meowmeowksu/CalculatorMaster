/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deposit
{
public:
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_amount;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_month;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_rate;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_replenishments;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_withdrawals;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_taxrate;
    QFrame *line;
    QLabel *label_accruedinterest;
    QPushButton *pushButton_count;
    QPushButton *pushButton_clear;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_taxamount;
    QLabel *label_depositend;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_calc;
    QRadioButton *radioButton_creditcalc;
    QRadioButton *radioButton_depositcalc;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_yes;
    QRadioButton *radioButton_no;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_oncemonth;
    QRadioButton *radioButton_onceyear;

    void setupUi(QDialog *Deposit)
    {
        if (Deposit->objectName().isEmpty())
            Deposit->setObjectName(QString::fromUtf8("Deposit"));
        Deposit->resize(489, 720);
        Deposit->setStyleSheet(QString::fromUtf8("background: rgb(45, 42, 55)"));
        label_2 = new QLabel(Deposit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(16, 22, 121, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_2->setWordWrap(true);
        doubleSpinBox_amount = new QDoubleSpinBox(Deposit);
        doubleSpinBox_amount->setObjectName(QString::fromUtf8("doubleSpinBox_amount"));
        doubleSpinBox_amount->setGeometry(QRect(152, 22, 271, 24));
        doubleSpinBox_amount->setFont(font);
        doubleSpinBox_amount->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_3 = new QLabel(Deposit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(15, 69, 121, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_3->setWordWrap(true);
        doubleSpinBox_month = new QDoubleSpinBox(Deposit);
        doubleSpinBox_month->setObjectName(QString::fromUtf8("doubleSpinBox_month"));
        doubleSpinBox_month->setGeometry(QRect(150, 70, 271, 24));
        doubleSpinBox_month->setFont(font);
        doubleSpinBox_month->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_4 = new QLabel(Deposit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(16, 129, 121, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_4->setWordWrap(true);
        doubleSpinBox_rate = new QDoubleSpinBox(Deposit);
        doubleSpinBox_rate->setObjectName(QString::fromUtf8("doubleSpinBox_rate"));
        doubleSpinBox_rate->setGeometry(QRect(150, 128, 271, 24));
        doubleSpinBox_rate->setFont(font);
        doubleSpinBox_rate->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_5 = new QLabel(Deposit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(16, 232, 121, 41));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_5->setWordWrap(true);
        label_6 = new QLabel(Deposit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(15, 180, 121, 41));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_6->setWordWrap(true);
        doubleSpinBox_replenishments = new QDoubleSpinBox(Deposit);
        doubleSpinBox_replenishments->setObjectName(QString::fromUtf8("doubleSpinBox_replenishments"));
        doubleSpinBox_replenishments->setGeometry(QRect(153, 288, 271, 24));
        doubleSpinBox_replenishments->setFont(font);
        doubleSpinBox_replenishments->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_7 = new QLabel(Deposit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(17, 288, 121, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_7->setWordWrap(true);
        label_8 = new QLabel(Deposit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(17, 328, 121, 31));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_8->setWordWrap(true);
        doubleSpinBox_withdrawals = new QDoubleSpinBox(Deposit);
        doubleSpinBox_withdrawals->setObjectName(QString::fromUtf8("doubleSpinBox_withdrawals"));
        doubleSpinBox_withdrawals->setGeometry(QRect(153, 328, 271, 24));
        doubleSpinBox_withdrawals->setFont(font);
        doubleSpinBox_withdrawals->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_9 = new QLabel(Deposit);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(17, 370, 121, 31));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_9->setWordWrap(true);
        doubleSpinBox_taxrate = new QDoubleSpinBox(Deposit);
        doubleSpinBox_taxrate->setObjectName(QString::fromUtf8("doubleSpinBox_taxrate"));
        doubleSpinBox_taxrate->setGeometry(QRect(153, 370, 271, 24));
        doubleSpinBox_taxrate->setFont(font);
        doubleSpinBox_taxrate->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        line = new QFrame(Deposit);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(5, 411, 621, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        line->setFont(font1);
        line->setStyleSheet(QString::fromUtf8("Line {\n"
"color: white;\n"
"}"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_accruedinterest = new QLabel(Deposit);
        label_accruedinterest->setObjectName(QString::fromUtf8("label_accruedinterest"));
        label_accruedinterest->setGeometry(QRect(154, 450, 271, 21));
        label_accruedinterest->setFont(font);
        label_accruedinterest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_count = new QPushButton(Deposit);
        pushButton_count->setObjectName(QString::fromUtf8("pushButton_count"));
        pushButton_count->setGeometry(QRect(111, 602, 131, 31));
        pushButton_count->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  15px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  15px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_clear = new QPushButton(Deposit);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(246, 601, 131, 31));
        pushButton_clear->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  15px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  15px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        label_10 = new QLabel(Deposit);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(16, 438, 111, 41));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_10->setWordWrap(true);
        label_11 = new QLabel(Deposit);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(12, 556, 131, 41));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_11->setWordWrap(true);
        label_12 = new QLabel(Deposit);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(16, 498, 121, 41));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_12->setWordWrap(true);
        label_taxamount = new QLabel(Deposit);
        label_taxamount->setObjectName(QString::fromUtf8("label_taxamount"));
        label_taxamount->setGeometry(QRect(154, 504, 271, 21));
        label_taxamount->setFont(font);
        label_taxamount->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_depositend = new QLabel(Deposit);
        label_depositend->setObjectName(QString::fromUtf8("label_depositend"));
        label_depositend->setGeometry(QRect(154, 560, 271, 21));
        label_depositend->setFont(font);
        label_depositend->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        widget = new QWidget(Deposit);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 646, 371, 68));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_calc = new QRadioButton(widget);
        radioButton_calc->setObjectName(QString::fromUtf8("radioButton_calc"));
        radioButton_calc->setFont(font);
        radioButton_calc->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 2px solid white; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    background-color: #333333; /* \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"    border-radius: 5px; /* \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    background-color: white; /* \321\206\320\262\320\265\321\202 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        verticalLayout->addWidget(radioButton_calc);

        radioButton_creditcalc = new QRadioButton(widget);
        radioButton_creditcalc->setObjectName(QString::fromUtf8("radioButton_creditcalc"));
        radioButton_creditcalc->setFont(font);
        radioButton_creditcalc->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 2px solid white; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    background-color: #333333; /* \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"    border-radius: 5px; /* \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    background-color: white; /* \321\206\320\262\320\265\321\202 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        verticalLayout->addWidget(radioButton_creditcalc);

        radioButton_depositcalc = new QRadioButton(widget);
        radioButton_depositcalc->setObjectName(QString::fromUtf8("radioButton_depositcalc"));
        radioButton_depositcalc->setFont(font);
        radioButton_depositcalc->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 2px solid white; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    background-color: #333333; /* \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"    border-radius: 5px; /* \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    background-color: white; /* \321\206\320\262\320\265\321\202 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        verticalLayout->addWidget(radioButton_depositcalc);

        widget1 = new QWidget(Deposit);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(151, 192, 99, 20));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_yes = new QRadioButton(widget1);
        radioButton_yes->setObjectName(QString::fromUtf8("radioButton_yes"));
        radioButton_yes->setFont(font);
        radioButton_yes->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 2px solid white; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    background-color: #333333; /* \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"    border-radius: 5px; /* \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    background-color: white; /* \321\206\320\262\320\265\321\202 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        horizontalLayout->addWidget(radioButton_yes);

        radioButton_no = new QRadioButton(widget1);
        radioButton_no->setObjectName(QString::fromUtf8("radioButton_no"));
        radioButton_no->setFont(font);
        radioButton_no->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 2px solid white; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    background-color: #333333; /* \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"    border-radius: 5px; /* \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    background-color: white; /* \321\206\320\262\320\265\321\202 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        horizontalLayout->addWidget(radioButton_no);

        widget2 = new QWidget(Deposit);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(151, 244, 209, 20));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_oncemonth = new QRadioButton(widget2);
        radioButton_oncemonth->setObjectName(QString::fromUtf8("radioButton_oncemonth"));
        radioButton_oncemonth->setFont(font);
        radioButton_oncemonth->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 2px solid white; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    background-color: #333333; /* \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"    border-radius: 5px; /* \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    background-color: white; /* \321\206\320\262\320\265\321\202 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        horizontalLayout_2->addWidget(radioButton_oncemonth);

        radioButton_onceyear = new QRadioButton(widget2);
        radioButton_onceyear->setObjectName(QString::fromUtf8("radioButton_onceyear"));
        radioButton_onceyear->setFont(font);
        radioButton_onceyear->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border: 2px solid white; /* \321\206\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 */\n"
"    background-color: #333333; /* \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"    border-radius: 5px; /* \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"    background-color: white; /* \321\206\320\262\320\265\321\202 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 \320\277\321\200\320\270 \320\262\321\213\320\261\320\276\321\200\320\265 */\n"
"}"));

        horizontalLayout_2->addWidget(radioButton_onceyear);


        retranslateUi(Deposit);

        QMetaObject::connectSlotsByName(Deposit);
    } // setupUi

    void retranslateUi(QDialog *Deposit)
    {
        Deposit->setWindowTitle(QCoreApplication::translate("Deposit", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\264\320\265\320\277\320\276\320\267\320\270\321\202\320\260", nullptr));
#if QT_CONFIG(accessibility)
        doubleSpinBox_amount->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_3->setText(QCoreApplication::translate("Deposit", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217 (\320\262 \320\274\320\265\321\201\321\217\321\206\320\260\321\205)", nullptr));
#if QT_CONFIG(accessibility)
        doubleSpinBox_month->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_4->setText(QCoreApplication::translate("Deposit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
#if QT_CONFIG(accessibility)
        doubleSpinBox_rate->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_5->setText(QCoreApplication::translate("Deposit", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("Deposit", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
#if QT_CONFIG(accessibility)
        doubleSpinBox_replenishments->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_7->setText(QCoreApplication::translate("Deposit", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("Deposit", "\320\241\320\275\321\217\321\202\320\270\321\217", nullptr));
#if QT_CONFIG(accessibility)
        doubleSpinBox_withdrawals->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_9->setText(QCoreApplication::translate("Deposit", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
#if QT_CONFIG(accessibility)
        doubleSpinBox_taxrate->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_accruedinterest->setText(QString());
        pushButton_count->setText(QCoreApplication::translate("Deposit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Deposit", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("Deposit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_11->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\265 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260", nullptr));
        label_taxamount->setText(QString());
        label_depositend->setText(QString());
        radioButton_calc->setText(QCoreApplication::translate("Deposit", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        radioButton_creditcalc->setText(QCoreApplication::translate("Deposit", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        radioButton_depositcalc->setText(QCoreApplication::translate("Deposit", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        radioButton_yes->setText(QCoreApplication::translate("Deposit", "\320\224\320\260", nullptr));
        radioButton_no->setText(QCoreApplication::translate("Deposit", "\320\235\320\265\321\202", nullptr));
        radioButton_oncemonth->setText(QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        radioButton_onceyear->setText(QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deposit: public Ui_Deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
