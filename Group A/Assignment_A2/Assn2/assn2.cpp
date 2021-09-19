#include "assn2.h"
#include "ui_assn2.h"

QImage img(601,341,QImage::Format_ARGB32);

Assn2::Assn2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Assn2)
{
    ui->setupUi(this);
}

Assn2::~Assn2()
{
    delete ui;
}

void Assn2::on_pushButton_clicked()
{
      img.fill(Qt::darkMagenta);
      line1(280,92,331,181);
      line1(331,179,229,179);
      line1(228,180,280,92);
      cir(280,150,60);
      cir(279,149,29);

   ui->label->setPixmap(QPixmap::fromImage(img));
}

void Assn2::cir(int x1,int y1,int r)
{
    int x=0;
    int y=r;
    int e=3-2*r;

    while(x<y)
    {
        img.setPixel(x1+x,y1+y,qRgb(0,255,139));
        img.setPixel(x1+y,y1+x,qRgb(0,255,139));
        img.setPixel(x1-y,y1+x,qRgb(0,255,139));
        img.setPixel(x1-x,y1+y,qRgb(0,255,139));
        img.setPixel(x1-x,y1-y,qRgb(0,255,139));
        img.setPixel(x1-y,y1-x,qRgb(0,255,139));
        img.setPixel(x1+y,y1-x,qRgb(0,255,139));
        img.setPixel(x1+x,y1-y,qRgb(0,255,139));

        if(e<0)
        {
            x=x+1;
            e=e+((4*x+6));
        }
        else
        {
            y=y-1;
            x=x+1;
            e=e+(4*(x-y)+10);
        }
    }
}

void Assn2::line1(float x1,float y1,float x2,float y2)
{
    int len,i;
    i=1;
    float dx,dy,x,y;


    if(abs(x2-x1)>abs(y2-y1))

        len=abs(x2-x1);

    else

        len=abs(y2-y1);

                dx=(x2-x1)/len;
                dy=(y2-y1)/len;

     x=x1+0.5;
     y=y1+0.5;

     while(i<=len)
     {
         img.setPixel(x,y,qRgb(255,120,0));
         x=x+dx;
         y=y+dy;
         i++;
     }



}



