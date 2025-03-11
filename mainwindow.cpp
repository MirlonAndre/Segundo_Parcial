#include "mainwindow.h"
#include "acerca_de.h"
#include "armaduras.h"
#include "momento.h"
#include "ui_mainwindow.h"
#include "v2vectores.h"
#include "vigas.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BT_VECTOR_clicked()
{
    V2Vectores* ventana2 = new V2Vectores(this);
    ventana2->show();
}


void MainWindow::on_BT_MOM_clicked()
{
    Momento *Ventana3=new Momento(this);
    Ventana3->show();
}


void MainWindow::on_BT_ARTMA_clicked()
{
    armaduras *Ventana4=new armaduras(this);
    Ventana4->show();
}


void MainWindow::on_BT_VIGA_clicked()
{
    vigas *Ventana5=new vigas(this);
    Ventana5->show();
}


void MainWindow::on_Acerca_clicked()
{
    Acerca_de*Ventana6=new Acerca_de(this);
    Ventana6->show();
}

