/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

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

class Ui_Credit
{
public:
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_amount;
    QDoubleSpinBox *doubleSpinBox_month;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_rate;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *line;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_monthlypayment;
    QLabel *label_accruedinterest;
    QLabel *label_debtandinterest;
    QPushButton *pushButton_count;
    QPushButton *pushButton_clear;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_annuity;
    QRadioButton *radioButton_diff;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_creditcalc;
    QRadioButton *radioButton_calc;
    QRadioButton *radioButton_depositcalc;

    void setupUi(QDialog *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(513, 612);
        Credit->setStyleSheet(QString::fromUtf8("background: rgb(45, 42, 55)"));
        label = new QLabel(Credit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(15, 166, 111, 91));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label->setWordWrap(true);
        label_2 = new QLabel(Credit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(14, 30, 121, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_2->setWordWrap(true);
        doubleSpinBox_amount = new QDoubleSpinBox(Credit);
        doubleSpinBox_amount->setObjectName(QString::fromUtf8("doubleSpinBox_amount"));
        doubleSpinBox_amount->setGeometry(QRect(150, 31, 341, 24));
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
        doubleSpinBox_month = new QDoubleSpinBox(Credit);
        doubleSpinBox_month->setObjectName(QString::fromUtf8("doubleSpinBox_month"));
        doubleSpinBox_month->setGeometry(QRect(150, 76, 341, 24));
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
        label_3 = new QLabel(Credit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(15, 70, 111, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_3->setWordWrap(true);
        doubleSpinBox_rate = new QDoubleSpinBox(Credit);
        doubleSpinBox_rate->setObjectName(QString::fromUtf8("doubleSpinBox_rate"));
        doubleSpinBox_rate->setGeometry(QRect(150, 140, 341, 24));
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
        label_4 = new QLabel(Credit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(15, 129, 111, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_4->setWordWrap(true);
        label_5 = new QLabel(Credit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 290, 111, 41));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_5->setWordWrap(true);
        line = new QFrame(Credit);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-10, 270, 621, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        line->setFont(font1);
        line->setStyleSheet(QString::fromUtf8("Line {\n"
"color: white;\n"
"}"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(Credit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 350, 121, 41));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_6->setWordWrap(true);
        label_7 = new QLabel(Credit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(16, 408, 131, 41));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_7->setWordWrap(true);
        label_monthlypayment = new QLabel(Credit);
        label_monthlypayment->setObjectName(QString::fromUtf8("label_monthlypayment"));
        label_monthlypayment->setGeometry(QRect(150, 300, 331, 21));
        label_monthlypayment->setFont(font);
        label_monthlypayment->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_accruedinterest = new QLabel(Credit);
        label_accruedinterest->setObjectName(QString::fromUtf8("label_accruedinterest"));
        label_accruedinterest->setGeometry(QRect(150, 359, 331, 21));
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
        label_debtandinterest = new QLabel(Credit);
        label_debtandinterest->setObjectName(QString::fromUtf8("label_debtandinterest"));
        label_debtandinterest->setGeometry(QRect(150, 420, 331, 21));
        label_debtandinterest->setFont(font);
        label_debtandinterest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(80, 75, 98);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_count = new QPushButton(Credit);
        pushButton_count->setObjectName(QString::fromUtf8("pushButton_count"));
        pushButton_count->setGeometry(QRect(140, 470, 131, 31));
        pushButton_count->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  15px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  15px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_clear = new QPushButton(Credit);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(275, 469, 131, 31));
        pushButton_clear->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  15px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  15px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        layoutWidget = new QWidget(Credit);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 201, 341, 22));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        layoutWidget->setFont(font2);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_annuity = new QRadioButton(layoutWidget);
        radioButton_annuity->setObjectName(QString::fromUtf8("radioButton_annuity"));
        radioButton_annuity->setFont(font);
        radioButton_annuity->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
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

        horizontalLayout->addWidget(radioButton_annuity);

        radioButton_diff = new QRadioButton(layoutWidget);
        radioButton_diff->setObjectName(QString::fromUtf8("radioButton_diff"));
        radioButton_diff->setFont(font);
        radioButton_diff->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
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

        horizontalLayout->addWidget(radioButton_diff);

        widget = new QWidget(Credit);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(160, 520, 216, 68));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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


        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QDialog *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label->setText(QCoreApplication::translate("Credit", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        label_2->setText(QCoreApplication::translate("Credit", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
#if QT_CONFIG(accessibility)
        doubleSpinBox_amount->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_3->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 (\320\274\320\265\321\201\321\217\321\206\321\213)", nullptr));
        label_4->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("Credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\321\221\320\266", nullptr));
        label_6->setText(QCoreApplication::translate("Credit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("Credit", "\320\224\320\276\320\273\320\263+\320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_monthlypayment->setText(QString());
        label_accruedinterest->setText(QString());
        label_debtandinterest->setText(QString());
        pushButton_count->setText(QCoreApplication::translate("Credit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Credit", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        radioButton_annuity->setText(QCoreApplication::translate("Credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\320\275\321\202\320\275\321\213\320\271", nullptr));
        radioButton_diff->setText(QCoreApplication::translate("Credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        radioButton_creditcalc->setText(QCoreApplication::translate("Credit", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        radioButton_calc->setText(QCoreApplication::translate("Credit", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        radioButton_depositcalc->setText(QCoreApplication::translate("Credit", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
