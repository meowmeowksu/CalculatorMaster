#include "credit.h"
#include "ui_credit.h"

Credit::Credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Credit)
{
    ui->setupUi(this);
    ui->radioButton_creditcalc->setChecked(true);
    ui->radioButton_annuity->setChecked(true);
    ui->doubleSpinBox_amount->setRange(0.0, 9999999999999.999);
    ui->doubleSpinBox_month->setRange(0.0, 9999999999999.999);
    ui->doubleSpinBox_rate->setRange(0.0, 9999999999999.999);

}

Credit::~Credit()
{
    delete ui;
}

void Credit::on_radioButton_calc_clicked()
{
    hide();
     window = new MainWindow();
     window->show();
     this->deleteLater();
}


void Credit::on_pushButton_count_clicked()
{
    long double creditAmount = ui->doubleSpinBox_amount->value();
    long double month = ui->doubleSpinBox_month->value();
    long double interest = ui->doubleSpinBox_rate->value();

    long double totalPayment = 0.0;
    long double overpay = 0.0;

    if(ui->radioButton_annuity->isChecked()) {
            long double payForMonth = 0.0;
          s21_annuity_calculation(creditAmount, month, interest, &payForMonth, &totalPayment, &overpay);
          ui->label_monthlypayment->setText(QString::number(payForMonth, 'g', 7));
          ui->label_debtandinterest->setText(QString::number(totalPayment, 'g', 7));
          ui->label_accruedinterest->setText(QString::number(overpay, 'g', 7));
      } else if (ui->radioButton_diff->isChecked()){
        long double pay_for_month_min = 0;
        long double pay_for_month_max = 0;
        s21_diff_calculation(creditAmount, month, interest, &pay_for_month_min, &pay_for_month_max, &totalPayment, &overpay);
        ui->label_debtandinterest->setText(QString::number(totalPayment, 'g', 7));
        ui->label_accruedinterest->setText(QString::number(overpay, 'g', 7));
        ui->label_monthlypayment->setText(QString::number(pay_for_month_max, 'g', 7) + "..." + QString::number(pay_for_month_min, 'g', 7));

    }


}


void Credit::on_pushButton_clear_clicked()
{
    ui->label_accruedinterest->clear();
    ui->label_debtandinterest->clear();
    ui->label_monthlypayment->clear();

    ui->doubleSpinBox_amount->setValue(0.0);
    ui->doubleSpinBox_rate->setValue(0.0);
    ui->doubleSpinBox_month->setValue(0.0);
}


void Credit::on_radioButton_depositcalc_clicked()
{
    hide();
     depositPage = new Deposit;
     depositPage->show();
     this->deleteLater();
}

