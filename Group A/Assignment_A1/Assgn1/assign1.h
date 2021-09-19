#ifndef ASSIGN1_H
#define ASSIGN1_H

#include <QMainWindow>

namespace Ui {
class assign1;
}

class assign1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit assign1(QWidget *parent = 0);
    ~assign1();

private slots:
       void ddaline(double,double,double,double);
       void on_pushButton_clicked();

private:
    Ui::assign1 *ui;

};

#endif // ASSIGN1_H
