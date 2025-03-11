#include "vigas.h"
#include "ui_vigas.h"

vigas::vigas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::vigas)
{
    ui->setupUi(this);
}

vigas::~vigas()
{
    delete ui;
}

void vigas::on_pushButton_clicked()
{
    double w = ui->f1->text().toDouble();


    double L = 5.0; // Longitud de la carga distribuida en ft
    double P1 = 8.0; // Carga puntual en C (kips)
    double P2 = 8.0; // Carga puntual en D (kips)
    double A_dist = 2.0; // Distancia entre A y C en ft
    double B_dist = 2.0; // Distancia entre D y B en ft

    // Total de la carga distribuida
    double total_w = w * L; // Carga total distribuida

    // Reacción en A (Ra) usando la suma de momentos sobre B
    double Ra = (P1 * A_dist + P2 * (A_dist + L) + total_w * (A_dist + L / 2)) / (A_dist + L + B_dist);

    // Reacción en B (Rb) usando la suma de fuerzas verticales
    double Rb = P1 + P2 + total_w - Ra;

    // Fuerza cortante máxima
    double Vmax = fmax(Ra, Rb);

    // Momento flector máximo
    double Mmax = fmax(Ra * A_dist, Rb * (A_dist + L));

    ui->RESULTANTE->setText(QString::number(Vmax));
    ui->RESULTANTE2->setText(QString::number(Mmax));
}


void vigas::on_inicio_pressed()
{
    // Implementación de lo que pasa cuando se presiona el botón
    connect(ui->inicio, &QPushButton::clicked, this, &QWidget::close);
}

