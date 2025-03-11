#ifndef VIGAS_H
#define VIGAS_H

#include <QDialog>

namespace Ui {
class vigas;
}

class vigas : public QDialog
{
    Q_OBJECT

public:
    explicit vigas(QWidget *parent = nullptr);
    ~vigas();

private slots:
    void on_pushButton_clicked();

    void on_inicio_pressed();

private:
    Ui::vigas *ui;
};

#endif // VIGAS_H
