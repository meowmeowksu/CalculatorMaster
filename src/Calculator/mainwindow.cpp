#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../s21_smart_calc.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    creditPage = nullptr;
    graphicPage = nullptr;
    depositPage = nullptr;
    ui->radioButton->setChecked(true);
    connect(ui->radioButton_2, &QRadioButton::toggled, this, [this](){
        on_radioButton_2_clicked();
            });

    ui->doubleSpinBox_xinput->setDecimals(7);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_2_clicked(){
    if(ui->radioButton_2->isChecked()) {
        this->hide();
        if(creditPage == nullptr) {
            creditPage = new Credit;
        }

        creditPage->show();
    }
}


void MainWindow::on_pushButton_deleteall_clicked()
{
    ui->label->setText("");
}

void MainWindow::on_pushButton_openbracket_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "(");
}


void MainWindow::on_pushButton_closebracket_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + ")");
}


void MainWindow::on_pushButton_div_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "/");
}


void MainWindow::on_pushButton_mul_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "*");
}


void MainWindow::on_pushButton_minus_clicked()
{
    QString currentText = ui->label->text();
     ui->label->setText(currentText + "-");
}


void MainWindow::on_pushButton_plus_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "+");
}


void MainWindow::on_pushButton_dot_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + ".");
}


void MainWindow::on_pushButton_sin_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "sin");
}


void MainWindow::on_pushButton_asin_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "asin");
}


void MainWindow::on_pushButton_pow_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "^");
}


void MainWindow::on_pushButton_cos_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "cos");
}



void MainWindow::on_pushButton_acos_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "acos");
}


void MainWindow::on_pushButton_sqrt_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "sqrt");
}


void MainWindow::on_pushButton_ln_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "ln");
}


void MainWindow::on_pushButton_tan_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "tan");
}


void MainWindow::on_pushButton_atan_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "atan");
}



void MainWindow::on_pushButton_mod_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "mod");
}


void MainWindow::on_pushButton_log_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "log");
}


void MainWindow::on_pushButton_0_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "0");
}


void MainWindow::on_pushButton_1_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "1");
}


void MainWindow::on_pushButton_2_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "2");
}


void MainWindow::on_pushButton_3_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "3");
}


void MainWindow::on_pushButton_4_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "4");
}


void MainWindow::on_pushButton_5_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "5");
}


void MainWindow::on_pushButton_6_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "6");
}


void MainWindow::on_pushButton_7_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "7");
}


void MainWindow::on_pushButton_8_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "8");
}


void MainWindow::on_pushButton_9_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "9");
}


void MainWindow::on_pushButton_equal_clicked()
{
    int status = 0;
    long double result = 0.0L;
    QByteArray byteArray = ui->label->text().toUtf8(); // Конвертация QString в QByteArray
    char *str = byteArray.data(); // Получение указателя на массив символов
    QString x_text = ui->doubleSpinBox_xinput->text();
    bool ok;
    double x = x_text.toDouble(&ok);
    status = s21_smart_calc(str,&result, x);

    if (status == 0 && ok) {
        ui->label->setText(QString::number(result, 'g', 15));
        ui->label_output->setText("Correct input");
    } else {
        ui->label_output->setText("Incorrect input");
    }
}


void MainWindow::on_checkBox_graph_stateChanged(int state)
{
    if (state == Qt::Checked) {
        if(graphicPage == nullptr) {
            graphicPage = new Graphics(nullptr, ui->label);
        }
             graphicPage->show();

    }
   }


void MainWindow::on_pushButton_x_clicked()
{
    QString currentText = ui->label->text();
    ui->label->setText(currentText + "x");
}


void MainWindow::on_pushButton_C_clicked()
{
        QString text = ui->label->text();
        if (!text.isEmpty()) {
            text.chop(1);
            ui->label->setText(text);
        }
}


void MainWindow::on_radioButton_depositcalc_clicked()
{
    if(ui->radioButton_depositcalc->isChecked()) {
        this->hide();
        if(depositPage == nullptr) {
            depositPage = new Deposit(nullptr);
        }
        depositPage->show();
    }
}

