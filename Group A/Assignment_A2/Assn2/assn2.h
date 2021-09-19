#ifndef ASSN2_H
#define ASSN2_H

#include <QMainWindow>

namespace Ui {
class Assn2;
}

class Assn2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Assn2(QWidget *parent = 0);
    ~Assn2();

private slots:
    void on_pushButton_clicked();
    void cir(int,int,int);
    void line1(float,float,float,float);

private:
    Ui::Assn2 *ui;
};

#endif // ASSN2_H
