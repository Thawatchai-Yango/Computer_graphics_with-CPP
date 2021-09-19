#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int gd=DETECT,gm=0,ch;
class rot
{

  public:
   
      int x1,x2,y1,y2,x3,y3;
 rot()
 {
    x1=100;
    y1=100;
    x2=175;
    y2=200;
    x3=25;
    y3=200;
 }
 void org()
 {
    
          initgraph(&gd,&gm,NULL);
          line(x1,y1,x2,y2);
          line(x2,y2,x3,y3);
          line(x3,y3,x1,y1);
          getch(); 
    closegraph();
  }
void rotate()
 {
    float t=80;
    int tx=175,ty=200;
    float nx1,ny1,nx2,ny2,nx3,ny3;
    t = t*(3.14/180);
    nx1=abs(x1*cos(t)-y1*sin(t));
    ny1=abs(x1*sin(t)+y1*cos(t));
    nx2=abs(x2*cos(t)-y2*sin(t));
    ny2=abs(x2*sin(t)+y2*cos(t));
    nx3=abs(x3*cos(t)-y3*sin(t)-tx*cos(t)+ty*sin(t)+tx);
    ny3=abs(x3*sin(t)+y3*cos(t)-tx*sin(t)-ty*cos(t)+ty);
    initgraph(&gd,&gm,NULL);
          line(nx1,ny1,nx2,ny2);
          line(nx2,ny2,nx3,ny3);
          line(nx3,ny3,nx1,ny1);
          getch();
   closegraph();
}


};

int main()
 {
    rot r1;
   cout<<"\n\t orignal object ";
          r1.org();
   cout<<"\n\t After Rotation ";
           r1.rotate();
  return 0;
 }

