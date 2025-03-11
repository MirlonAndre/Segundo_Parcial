#include "momento.h"
#include "ui_momento.h"

Momento::Momento(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Momento)
{
    ui->setupUi(this);
}

Momento::~Momento()
{
    delete ui;
}

void Momento::on_pushButton_clicked()
{

    double F1 = ui->f1->text().toDouble();

    double rx = 0.3;  // Posición en el eje x (0.3 m)
    double ry = 0.25; // Posición en el eje y (0.25 m)
    double rz = 0.94;  // No hay componente en el eje z para la posición

    // La fuerza se aplica en la dirección z (Fz = F1), por lo que las otras componentes son 0
    double fx = 7.0;  // Fuerza en el eje x
    double fy = 6.0;  // Fuerza en el eje y
    double fz = F1;   // Fuerza en el eje z (F1)

    // Calcular el momento (torque) usando el producto cruzado r x F
    double Mx = (ry * fz) - (rz * fy);  // Componente en x
    double My = (rz * fx) - (rx * fz);  // Componente en y
    double Mz = (rx * fz) - (rz * fx);  // Componente en z

    // El torque resultante (en este caso, solo hay una componente en el eje z)
    double torque = Mz;

    // Mostrar el momento (torque) en el campo correspondiente de la interfaz
    ui->TTTmomento->setText(QString::number(torque));

    // Comparar el torque calculado con el torque requerido




    double requiredTorque = 14.0; // Torque requerido en N·m
    if (fabs(torque) >= requiredTorque) {
        // Si el torque calculado es suficiente
        ui->RESULTANTE->setText("La fuerza es suficiente para girar la tuerca.");
    } else {
        // Si el torque calculado no es suficiente
        ui->RESULTANTE->setText("La fuerza no es suficiente para girar la tuerca.");
    }

}
void Momento::on_inicio_clicked() {
    connect(ui->inicio, &QPushButton::clicked, this, &QWidget::close);
    // Implementación de lo que hace el clic
}

void Momento::on_inicio_pressed() {
    // Implementación de lo que pasa cuando se presiona el botón
     connect(ui->inicio, &QPushButton::clicked, this, &QWidget::close);
}

