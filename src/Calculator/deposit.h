#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QDialog>
#include "mainwindow.h"
#include "credit.h"


namespace Ui {
class Deposit;
}

#ifdef __cplusplus
extern "C" {
#endif

#include "../s21_smart_calc.h"

#ifdef __cplusplus
}
#endif

class Credit;

class Deposit : public QDialog
{
    Q_OBJECT

public:
    explicit Deposit(QWidget *parent = nullptr);
    ~Deposit();

private slots:
    void on_radioButton_calc_clicked();

    void on_radioButton_creditcalc_clicked();

    void on_pushButton_count_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::Deposit *ui;
    QMainWindow * window;
    Credit *creditPage;
};

#endif // DEPOSIT_H
