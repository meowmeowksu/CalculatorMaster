/********************************************************************************
** Form generated from reading UI file 'graphics.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICS_H
#define UI_GRAPHICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Graphics
{
public:
    QCustomPlot *widget;
    QPushButton *pushButton_count;
    QPushButton *pushButton_count_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_xmax;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_xmin;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_ymax;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_ymin;

    void setupUi(QDialog *Graphics)
    {
        if (Graphics->objectName().isEmpty())
            Graphics->setObjectName(QString::fromUtf8("Graphics"));
        Graphics->resize(492, 368);
        Graphics->setStyleSheet(QString::fromUtf8("background: rgb(45, 42, 55)"));
        widget = new QCustomPlot(Graphics);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 10, 321, 291));
        pushButton_count = new QPushButton(Graphics);
        pushButton_count->setObjectName(QString::fromUtf8("pushButton_count"));
        pushButton_count->setGeometry(QRect(70, 320, 171, 31));
        pushButton_count->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  15px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  15px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        pushButton_count_2 = new QPushButton(Graphics);
        pushButton_count_2->setObjectName(QString::fromUtf8("pushButton_count_2"));
        pushButton_count_2->setGeometry(QRect(260, 320, 171, 31));
        pushButton_count_2->setStyleSheet(QString::fromUtf8("    border:  3x;\n"
"    border-radius:  15px; \n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0.943, x2:0.584, y2:0, stop:0 rgba(50, 34, 93, 255), stop:1 rgba(102, 40, 162, 255));\n"
"    color: rgb(255,  255,  255);\n"
"    padding:  5px;\n"
"    font: bold  15px;\n"
"    box-shadow: 2px 2px 5px rgba(0,0,0,0.5); "));
        widget1 = new QWidget(Graphics);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(370, 40, 86, 236));
        verticalLayout_5 = new QVBoxLayout(widget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"Color : rgb(255, 255, 255);\n"
"}"));

        verticalLayout->addWidget(label_2);

        doubleSpinBox_xmax = new QDoubleSpinBox(widget1);
        doubleSpinBox_xmax->setObjectName(QString::fromUtf8("doubleSpinBox_xmax"));
        doubleSpinBox_xmax->setFont(font);
        doubleSpinBox_xmax->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(34, 32, 42);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(doubleSpinBox_xmax);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"Color : rgb(255, 255, 255);\n"
"}"));

        verticalLayout_2->addWidget(label_3);

        doubleSpinBox_xmin = new QDoubleSpinBox(widget1);
        doubleSpinBox_xmin->setObjectName(QString::fromUtf8("doubleSpinBox_xmin"));
        doubleSpinBox_xmin->setFont(font);
        doubleSpinBox_xmin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(34, 32, 42);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_2->addWidget(doubleSpinBox_xmin);


        verticalLayout_3->addLayout(verticalLayout_2);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"Color : rgb(255, 255, 255);\n"
"}"));

        verticalLayout_3->addWidget(label_4);

        doubleSpinBox_ymax = new QDoubleSpinBox(widget1);
        doubleSpinBox_ymax->setObjectName(QString::fromUtf8("doubleSpinBox_ymax"));
        doubleSpinBox_ymax->setFont(font);
        doubleSpinBox_ymax->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(34, 32, 42);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_3->addWidget(doubleSpinBox_ymax);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"Color : rgb(255, 255, 255);\n"
"}"));

        verticalLayout_4->addWidget(label_5);

        doubleSpinBox_ymin = new QDoubleSpinBox(widget1);
        doubleSpinBox_ymin->setObjectName(QString::fromUtf8("doubleSpinBox_ymin"));
        doubleSpinBox_ymin->setFont(font);
        doubleSpinBox_ymin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    color: rgb(255, 255, 255); \n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color:rgb(34, 32, 42);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_4->addWidget(doubleSpinBox_ymin);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(Graphics);

        QMetaObject::connectSlotsByName(Graphics);
    } // setupUi

    void retranslateUi(QDialog *Graphics)
    {
        Graphics->setWindowTitle(QCoreApplication::translate("Graphics", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        pushButton_count->setText(QCoreApplication::translate("Graphics", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        pushButton_count_2->setText(QCoreApplication::translate("Graphics", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_2->setText(QCoreApplication::translate("Graphics", "Xmax", nullptr));
        label_3->setText(QCoreApplication::translate("Graphics", "Xmin", nullptr));
        label_4->setText(QCoreApplication::translate("Graphics", "Ymax", nullptr));
        label_5->setText(QCoreApplication::translate("Graphics", "Ymin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graphics: public Ui_Graphics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICS_H
