#include "graphics.h"
#include "ui_graphics.h"


Graphics::Graphics(QWidget *parent, QLabel *label) :
    QDialog(parent),
    ui(new Ui::Graphics),
    m_label(label)
{
    ui->setupUi(this);
        ui->doubleSpinBox_xmin->setRange(-INFINITY, INFINITY);
        ui->doubleSpinBox_xmax->setRange(-INFINITY, INFINITY);
        ui->doubleSpinBox_ymin->setRange(-INFINITY, INFINITY);
        ui->doubleSpinBox_ymax->setRange(-INFINITY, INFINITY);
        ui->doubleSpinBox_xmax->setValue(10.0);
        ui->doubleSpinBox_ymax->setValue(10.0);
        ui->doubleSpinBox_xmin->setValue(-10.0);
       ui->doubleSpinBox_ymin->setValue(-10.0);
       ui->widget->xAxis->setLabel("X Axis"); // Установка названия оси X
       ui->widget->yAxis->setLabel("Y Axis"); // Установка названия оси Y

}

Graphics::~Graphics()
{
    delete ui;
}

void Graphics::on_pushButton_count_clicked()
{
    double x_min = ui->doubleSpinBox_xmin->value();
    double x_max = ui->doubleSpinBox_xmax->value();
    double y_min = ui->doubleSpinBox_ymin->value();
    double y_max = ui->doubleSpinBox_ymax->value();
    double h = 0.01;
    QVector<double> x, y;
    long double result = 0.0L;
    int status = 0;
    QByteArray byteArray = m_label->text().toUtf8(); // Конвертация QString в QByteArray
    char *str = byteArray.data();
    for (double X = x_min; X <= x_max; X += h) {
        status = s21_smart_calc(str, &result, X);
        if(status == 0) {
         x.push_back(X);
         y.push_back(result);
        }
    }



    ui->widget->addGraph();
    ui->widget->graph(0)->setData(x, y);
    QCPScatterStyle scatterStyle;
        scatterStyle.setShape(QCPScatterStyle::ssCircle); // Установка формы точек (круг)
        scatterStyle.setSize(2); // Установка размера точек
        scatterStyle.setBrush(QColor(45, 42, 55)); // Установка цвета точек (RGB 45, 42, 55)

        ui->widget->graph(0)->setScatterStyle(scatterStyle); // Установка стиля точек
        ui->widget->graph(0)->setPen(QPen(QColor(61, 82, 62))); // Установка цвета линии (если нужно)
        ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone); // Убрать линии
        ui->widget->xAxis->setRange(x_min, x_max);
        ui->widget->yAxis->setRange(y_min, y_max);
        ui->widget->setInteraction(QCP::iRangeZoom, true);

        ui->widget->replot();
}


void Graphics::on_pushButton_count_2_clicked()
{
     ui->widget->clearGraphs();
     ui->widget->replot();
     ui->doubleSpinBox_xmax->setValue(10.0);
     ui->doubleSpinBox_ymax->setValue(10.0);
     ui->doubleSpinBox_xmin->setValue(-10.0);
    ui->doubleSpinBox_ymin->setValue(-10.0);
}

