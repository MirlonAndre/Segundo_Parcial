#ifndef MOMENTO_H
#define MOMENTO_H

#include <QDialog>

namespace Ui {
class Momento;
}

class Momento : public QDialog
{
    Q_OBJECT

public:
    explicit Momento(QWidget *parent = nullptr);
    ~Momento();

private slots:
    void on_pushButton_clicked();

    void on_inicio_clicked();

    void on_inicio_pressed();

private:
    Ui::Momento *ui;
};

#endif // MOMENTO_H
