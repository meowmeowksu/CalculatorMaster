#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QDialog>
#include <QVector>
#include <QLabel>

namespace Ui {
class Graphics;
}

#ifdef __cplusplus
extern "C" {
#endif

#include "../s21_smart_calc.h"

#ifdef __cplusplus
}
#endif

class Graphics : public QDialog
{
    Q_OBJECT

public:
    explicit Graphics(QWidget *parent = nullptr, QLabel *label = nullptr);
    ~Graphics();

private slots:
    void on_pushButton_count_clicked();

    void on_pushButton_count_2_clicked();

private:
    Ui::Graphics *ui;
    QLabel * m_label;

    QVector<long double> x,y;
};

#endif // GRAPHICS_H
