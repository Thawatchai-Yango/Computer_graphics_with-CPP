#include "asign4.h"
#include "ui_asign4.h"
#include "MATH.H"
//#include"GRAPHICS.H"

QImage im(400,400,QImage::Format_RGB32);
float x1=100,x2=200,x3=150,y1=100,y2=100,y3=10,nx1,nx2,nx3,ny1,ny2,ny3;
float rx1=50,rx2=100,rx3=150,rx4=200,ry1=200,ry2=100,ry3=200,ry4=100,nxr1,nxr2,nxr3,nxr4,nyr1,nyr2,nyr3,nyr4;

asign4::asign4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::asign4)
{
    ui->setupUi(this);
}

asign4::~asign4()
{
    delete ui;
}


void asign4::translation(int xt, int yt)
{
nx1=x1+xt;
ny1=y1+yt;
nx2=x2+xt;
ny2=y2+yt;
nx3=x3+xt;
ny3=y3+yt;
drawline(nx1,ny1,nx2,ny2);
drawline(nx2,ny2,nx3,ny3);
drawline(nx3,ny3,nx1,ny1);

}

void asign4::on_pushButton_clicked()
{

   drawline(x1,y1,x2,y2);
   drawline(x2,y2,x3,y3);
   drawline(x3,y3,x1,y1);

}

void asign4::on_pushButton_2_clicked()
{
    translation(60,80);
}

void asign4::on_pushButton_3_clicked()
{ int sx=1,sy=2;
 nx1=x1*sx;
 ny1=y2*sy;
 nx2=x2*sx;
 ny2=y2*sy;
 nx3=x3*sx;
 ny3=y3*sy;
drawline(nx1,ny1,nx2,ny2);
drawline(nx2,ny2,nx3,ny3);
drawline(nx3,ny3,nx1,ny1);

}

void asign4::on_pushButton_4_clicked()
{
    float t=90;
    t = t*(3.14/180);
    nx1=abs(x1*cos(t)-y1*sin(t));
    ny1=abs(x1*sin(t)+y1*cos(t));
    nx2=abs(x2*cos(t)-y2*sin(t));
    ny2=abs(x2*sin(t)+y2*cos(t));
    nx3=abs(x3*cos(t)-y3*sin(t));
    ny3=abs(x3*sin(t)+y3*cos(t));
    drawline(nx1,ny1,nx2,ny2);
    drawline(nx2,ny2,nx3,ny3);
    drawline(nx3,ny3,nx1,ny1);
}
void asign4 ::drawline(double x1, double y1, double x2, double y2)
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

void asign4::on_pushButton_5_clicked()
{
    int shx=2;
     nx1=abs(x1+shx*y1);
     nx2=abs(x2+shx*y2);
     nx3=abs(x3+shx*y3);
     ny1=y1;
     ny2=y2;
     ny3=y3;
    drawline(nx1,ny1,nx2,ny2);
    drawline(nx2,ny2,nx3,ny3);
    drawline(nx3,ny3,nx1,ny1);
}

void asign4::on_pushButton_6_clicked()
{
    int shy=1;
     nx1=x1;
     nx2=x2;
     nx3=x3;
     ny1=abs(y1+shy*x1);
     ny2=abs(y2+shy*x2);
     ny3=abs(y3+shy*x3);
    drawline(nx1,ny1,nx2,ny2);
    drawline(nx2,ny2,nx3,ny3);
    drawline(nx3,ny3,nx1,ny1);
}

void asign4::on_pushButton_7_clicked()
{
    drawline(rx1,ry1,rx2,ry2);
    drawline(rx2,ry2,rx4,ry4);
    drawline(rx3,ry3,rx4,ry4);
    drawline(rx1,ry1,rx3,ry3);

}

void asign4::on_pushButton_8_clicked()
{  int rxt=50,ryt=50;
    nxr1=rx1+rxt;
    nyr1=ry1+ryt;
    nxr2=rx2+rxt;
    nyr2=ry2+ryt;
    nxr3=rx3+rxt;
    nyr3=ry3+ryt;
    nxr4=rx4+rxt;
    nyr4=ry4+ryt;
    drawline(nxr1,nyr1,nxr2,nyr2);
    drawline(nxr2,nyr2,nxr4,nyr4);
    drawline(nxr3,nyr3,nxr4,nyr4);
    drawline(nxr1,nyr1,nxr3,nyr3);
}

void asign4::on_pushButton_9_clicked()
{
    float rsx=1.5,rsy=1.5;
        nxr1=rx1*rsx;
        nyr1=ry1*rsy;
        nxr2=rx2*rsx;
        nyr2=ry2*rsy;
        nxr3=rx3*rsx;
        nyr3=ry3*rsy;
        nxr4=rx4*rsx;
        nyr4=ry4*rsy;
        drawline(nxr1,nyr1,nxr2,nyr2);
        drawline(nxr2,nyr2,nxr4,nyr4);
        drawline(nxr3,nyr3,nxr4,nyr4);
        drawline(nxr1,nyr1,nxr3,nyr3);

}

void asign4::on_pushButton_10_clicked()
{
    float rt=90;
    rt = rt*(3.14/180);
    nxr1=abs(rx1*cos(rt)-ry1*sin(rt));
    nyr1=abs(rx1*sin(rt)+ry1*cos(rt));
    nxr2=abs(rx2*cos(rt)-ry2*sin(rt));
    nyr2=abs(rx2*sin(rt)+ry2*cos(rt));
    nxr3=abs(rx3*cos(rt)-ry3*sin(rt));
    nyr3=abs(rx3*sin(rt)+ry3*cos(rt));
    nxr4=abs(rx4*cos(rt)-ry4*sin(rt));
    nyr4=abs(rx4*sin(rt)+ry4*cos(rt));
    drawline(nxr1,nyr1,nxr2,nyr2);
    drawline(nxr2,nyr2,nxr4,nyr4);
    drawline(nxr3,nyr3,nxr4,nyr4);
    drawline(nxr1,nyr1,nxr3,nyr3);
}

void asign4::on_pushButton_12_clicked()
{
    int rshx=1;
     nxr1=abs(rx1+rshx*ry1);
     nxr2=abs(rx2+rshx*ry2);
     nxr3=abs(rx3+rshx*ry3);
     nxr4=abs(rx4+rshx*ry4);
     nyr1=ry1;
     nyr2=ry2;
     nyr3=ry3;
     nyr4=ry4;
     drawline(nxr1,nyr1,nxr2,nyr2);
     drawline(nxr2,nyr2,nxr4,nyr4);
     drawline(nxr3,nyr3,nxr4,nyr4);
     drawline(nxr1,nyr1,nxr3,nyr3);
}

void asign4::on_pushButton_11_clicked()
{
    int rshy=1;
     nxr1=rx1;
     nxr2=rx2;
     nxr3=rx3;
     nxr4=rx4;
     nyr1=abs(ry1+rshy*rx1);
     nyr2=abs(ry2+rshy*rx2);
     nyr3=abs(ry3+rshy*rx3);
     nyr4=abs(ry4+rshy*rx4);
     drawline(nxr1,nyr1,nxr2,nyr2);
     drawline(nxr2,nyr2,nxr4,nyr4);
     drawline(nxr3,nyr3,nxr4,nyr4);
     drawline(nxr1,nyr1,nxr3,nyr3);
}
