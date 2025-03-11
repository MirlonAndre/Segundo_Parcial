#include "armaduras.h"
#include "ui_armaduras.h"

armaduras::armaduras(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::armaduras)
{
    ui->setupUi(this);
}

armaduras::~armaduras()
{
    delete ui;
}

void armaduras::on_pushButton_clicked()
{
    // Definir las fuerzas aplicadas en la cercha (en kN)
    double F1 = 1.0; // Fuerza en A
    double F2 = 2.0; // Fuerza en B
    double F3 = 2.0; // Fuerza en C
    double F4 = 2.0; // Fuerza en D
    double F5 = 2.0; // Fuerza en E
    double F6 = 2.0; // Fuerza en F
    double F7 = 4.0; // Fuerza en H

    // Longitudes de los tramos (en metros)
    double L = 1.5; // Longitud de los tramos
    double h = 2.0; // Altura total

    // Usaremos las ecuaciones de equilibrio de fuerzas
    // Sumar las fuerzas en el eje vertical y horizontal
    double ReacciónA_vertical = F1 + F2 + F3 + F4 + F5 + F6 + F7;
    double ReacciónA_horizontal = 0.0;  // No hay fuerzas horizontales

    // Cálculo de la resultante de la reacción en A
    double Ra_resultante = sqrt(pow(ReacciónA_vertical, 2) + pow(ReacciónA_horizontal, 2));

    //imprime en cuatro R(A)
    ui->RESULTANTE->setText(QString::number(Ra_resultante));

}


void armaduras::on_pushButton_2_clicked()
{
    // Definir las fuerzas aplicadas en la cercha (en kN)
    double F1 = 1.0; // Fuerza en A
    double F2 = 2.0; // Fuerza en B
    double F3 = 2.0; // Fuerza en C
    double F4 = 2.0; // Fuerza en D
    double F5 = 2.0; // Fuerza en E
    double F6 = 2.0; // Fuerza en F
    double F7 = 4.0; // Fuerza en H

    // Longitudes de los tramos (en metros)
    double L = 1.5; // Longitud de los tramos
    double h = 2.0; // Altura total

    // Usaremos las ecuaciones de equilibrio de fuerzas
    // Sumar las fuerzas en el eje vertical para obtener la reacción en I
    double ReacciónI_vertical = F1 + F2 + F3 + F4 + F5 + F6 + F7;

    // La reacción horizontal en I es cero, ya que no hay fuerzas horizontales
    double ReacciónI_horizontal = 0.0;

    // Cálculo de la resultante de la reacción en I
    double Ri_resultante = sqrt(pow(ReacciónI_vertical, 2) + pow(ReacciónI_horizontal, 2));


    //imprime en cuatro R(A)
    ui->RESULTANTE->setText(QString::number(Ri_resultante));
}


void armaduras::on_inicio_pressed()
{
    // Conectar el botón con la función de cierre de la ventana
    connect(ui->inicio, &QPushButton::clicked, this, &QWidget::close);
}

