#ifndef V2VECTORES_H
#define V2VECTORES_H

#include <QDialog>

namespace Ui {
class V2Vectores;
}

class V2Vectores : public QDialog
{
    Q_OBJECT

public:
    explicit V2Vectores(QWidget *parent = nullptr);
    ~V2Vectores();

private slots:
    void on_pushButton_clicked();

    void on_inicio_clicked();

    void on_inicio_pressed();

private:
    Ui::V2Vectores *ui;
};

#endif // V2VECTORES_H
