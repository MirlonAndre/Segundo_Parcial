#ifndef ARMADURAS_H
#define ARMADURAS_H

#include <QDialog>

namespace Ui {
class armaduras;
}

class armaduras : public QDialog
{
    Q_OBJECT

public:
    explicit armaduras(QWidget *parent = nullptr);
    ~armaduras();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_inicio_pressed();

private:
    Ui::armaduras *ui;
};

#endif // ARMADURAS_H
