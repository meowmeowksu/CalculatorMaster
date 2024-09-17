#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "credit.h"
#include "graphics.h"
#include "deposit.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#ifdef __cplusplus
extern "C" {
#endif

#include "../s21_smart_calc.h"

#ifdef __cplusplus
}
#endif

class Credit;

class Deposit;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_radioButton_2_clicked();
    void on_pushButton_deleteall_clicked();

    void on_pushButton_openbracket_clicked();

    void on_pushButton_closebracket_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_asin_clicked();

    void on_pushButton_pow_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_acos_clicked();

    void on_pushButton_sqrt_clicked();

    void on_pushButton_ln_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_atan_clicked();

    void on_pushButton_mod_clicked();

    void on_pushButton_log_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_equal_clicked();

    void on_checkBox_graph_stateChanged(int arg1);

    void on_pushButton_x_clicked();

    void on_pushButton_C_clicked();

    void on_radioButton_depositcalc_clicked();

private:
    Ui::MainWindow *ui;
    Credit *creditPage;
    Graphics *graphicPage;
    Deposit *depositPage;
};
#endif // MAINWINDOW_H
