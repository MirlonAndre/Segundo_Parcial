#include "v2vectores.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_v2vectores.h"
#include <QDoubleValidator>

V2Vectores::V2Vectores(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::V2Vectores)
{
    ui->setupUi(this);
}

V2Vectores::~V2Vectores()
{
    delete ui;
}

void V2Vectores::on_pushButton_clicked()
{
    double F1, F2, F3;
    double Fx1, Fy1, Fx2, Fy2, Fx3, Fy3;
    double Rx, Ry, R;
    double theta1 = 35.0, theta2 = 30.0, theta3 = 40.0;

    F1=ui->f1->text().toFloat();
    F2=ui->f2->text().toFloat();
    F3=ui->f3->text().toFloat();

    double rad1 = theta1 * M_PI / 180.0;
    double rad2 = theta2 * M_PI / 180.0;
    double rad3 = theta3 * M_PI / 180.0;

    // Descomponer las fuerzas en componentes x y y
    Fx1 = F1 * cos(rad1);
    Fy1 = F1 * sin(rad1);

    Fx2 = F2 * cos(rad2);
    Fy2 = F2 * sin(rad2);

    Fx3 = F3 * cos(rad3);
    Fy3 = F3 * sin(rad3);

    // Calcular las componentes resultantes
    Rx = Fx1 + Fx2 + Fx3;
    Ry = Fy1 + Fy2 + Fy3;

    // Calcular la magnitud de la resultante
    R = sqrt(Rx * Rx + Ry * Ry);

    ui->RESULTANTE->setText(QString::number(R));

}



void V2Vectores::on_inicio_clicked()
{
    // Conectar el botón con la función de cierre de la ventana
    connect(ui->inicio,&QPushButton::clicked, this, &QWidget::close);


}


void V2Vectores::on_inicio_pressed()
{
    // Conectar el botón con la función de cierre de la ventana
    connect(ui->inicio, &QPushButton::clicked, this, &QWidget::close);

}

