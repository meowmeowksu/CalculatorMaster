#ifndef CREDIT_H
#define CREDIT_H

#include <QDialog>
#include "mainwindow.h"
#include "deposit.h"

namespace Ui {
class Credit;
}

#ifdef __cplusplus
extern "C" {
#endif

#include "../s21_smart_calc.h"

#ifdef __cplusplus
}
#endif

class Deposit;

class Credit : public QDialog
{
    Q_OBJECT

public:
    explicit Credit(QWidget *parent = nullptr);
    ~Credit();

private slots:
    void on_radioButton_calc_clicked();
    void on_pushButton_count_clicked();
    void on_pushButton_clear_clicked();

    void on_radioButton_depositcalc_clicked();

private:
    Ui::Credit *ui;
    QMainWindow * window;
    Deposit *depositPage;
};

#endif // CREDIT_H
