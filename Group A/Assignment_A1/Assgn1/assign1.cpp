#include "assign1.h"
#include "ui_assign1.h"

QImage im(400,200,QImage::Format_RGB32);


assign1::assign1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::assign1)
{
    ui->setupUi(this);


}

assign1::~assign1()
{
    delete ui;
}


void assign1 ::ddaline(double x1, double y1, double x2, double y2)
{

    double dx,dy,x,y;
    double steps,xincrement,yincrement;



    dx=x2-x1;
    dy=y2-y1;

    if(qAbs(dx)>qAbs(dy))
         steps=qAbs(dx);
    else
         steps=qAbs(dy);

    xincrement=dx/steps;
    yincrement=dy/steps;

    x=x1;
    y=y1;

    for(int k=1;k<steps;k++)
    {
        x+=xincrement;
        y+=yincrement;
        im.setPixel(x,y,qRgb(255,0,0));
    }

    ui->label->setPixmap(QPixmap::fromImage(im));
}


void assign1::on_pushButton_clicked()
{
    ddaline(50,50,100,50);
    ddaline(100,50,100,100);
    ddaline(100,100,50,100);
    ddaline(50,50,50,100);
ddaline(75,50,100,75);
ddaline(100,75,75,100);
ddaline(75,100,50,75);
ddaline(50,75,75,50);
ddaline(87.5,62.5,87.5,87.5);
ddaline(87.5,87.5,62.5,87.5);
ddaline(62.5,87.5,62.5,62.5);
ddaline(62.5,62.5,87.5,62.5);
}
