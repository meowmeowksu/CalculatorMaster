#include "deposit.h"
#include "ui_deposit.h"

Deposit::Deposit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Deposit)
{
    ui->setupUi(this);
    ui->radioButton_depositcalc->setChecked(true);
    ui->doubleSpinBox_amount->setRange(0.0, INFINITY);
    ui->doubleSpinBox_month->setRange(0.0, INFINITY);
    ui->doubleSpinBox_rate->setRange(0.0, INFINITY);
    ui->doubleSpinBox_replenishments->setRange(0.0, INFINITY);
    ui->doubleSpinBox_withdrawals->setRange(0.0, INFINITY);
    ui->doubleSpinBox_taxrate->setRange(0.0, INFINITY);

}

Deposit::~Deposit()
{
    delete ui;
}

void Deposit::on_radioButton_calc_clicked()
{
     hide();
     window = new MainWindow;
     window->show();
     this->deleteLater();
}


void Deposit::on_radioButton_creditcalc_clicked()
{
     hide();
     creditPage = new Credit;
     creditPage->show();
     this->deleteLater();
}


void Deposit::on_pushButton_count_clicked()
{
    double initial_deposit = ui->doubleSpinBox_amount->value();
    int period_in_months = (int)ui->doubleSpinBox_month->value();
    double initial_interest = ui->doubleSpinBox_rate->value();
    double replenishment_amount = ui->doubleSpinBox_replenishments->value();
    double withdraw_amount = ui->doubleSpinBox_withdrawals->value();
    double tax_interest = ui->doubleSpinBox_taxrate->value();

    double deposit_amount = 0;
    double tax_amount = 0;
    double accured_interest = 0;

    int is_capitalized = 0;
    if(ui->radioButton_yes->isChecked()) {
        is_capitalized = 1;
    } else if(ui->radioButton_no->isChecked()){
        is_capitalized = 0;
    }

    int payment_periodicity = 0;
    if(ui->radioButton_oncemonth->isChecked()) {
        payment_periodicity= 1; // Устанавливаем значение 1, если выбран radioButton_yes
    } else if(ui->radioButton_onceyear->isChecked()){
        payment_periodicity = 12;
    }

    int status =  s21_deposit_calc(initial_deposit, period_in_months, initial_interest,
                                   payment_periodicity, is_capitalized, replenishment_amount,
                                   withdraw_amount, tax_interest, &accured_interest,
                                   &tax_amount, &deposit_amount);
    if (status == 0){
       ui->label_accruedinterest->setText(QString::number(accured_interest, 'g', 8));
       ui->label_taxamount->setText(QString::number(tax_amount, 'g', 8));
       ui->label_depositend->setText(QString::number(deposit_amount, 'g', 8));
    }
}


void Deposit::on_pushButton_clear_clicked()
{
     ui->doubleSpinBox_amount->setValue(0.0);
     ui->doubleSpinBox_month->setValue(0.0);
     ui->doubleSpinBox_rate->setValue(0.0);
     ui->doubleSpinBox_replenishments->setValue(0.0);
     ui->doubleSpinBox_taxrate->setValue(0.0);
     ui->doubleSpinBox_withdrawals->setValue(0.0);
     ui->radioButton_no->setChecked(false);
     ui->radioButton_yes->setChecked(false);
     ui->radioButton_oncemonth->setChecked(false);
     ui->radioButton_onceyear->setChecked(false);
     ui->label_accruedinterest->setText("");
     ui->label_depositend->setText("");
     ui->label_taxamount->setText("");
}

