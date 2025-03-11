#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BT_VECTOR_clicked();

    void on_BT_MOM_clicked();

    void on_BT_ARTMA_clicked();

    void on_BT_VIGA_clicked();

    void on_Acerca_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
