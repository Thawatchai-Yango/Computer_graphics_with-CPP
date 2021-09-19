#ifndef ASIGN4_H
#define ASIGN4_H

#include <QMainWindow>

namespace Ui {
class asign4;
}

class asign4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit asign4(QWidget *parent = 0);
    ~asign4();

private slots:
    void on_pushButton_clicked();
    void translation(int,int);

    void drawline(double,double,double,double);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

   void on_pushButton_4_clicked();

   void on_pushButton_5_clicked();

   void on_pushButton_6_clicked();

   void on_pushButton_7_clicked();

   void on_pushButton_8_clicked();

   void on_pushButton_9_clicked();

   void on_pushButton_10_clicked();

   void on_pushButton_12_clicked();

   void on_pushButton_11_clicked();

private:
    Ui::asign4 *ui;
};

#endif // ASIGN4_H
