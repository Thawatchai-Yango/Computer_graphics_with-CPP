#include<iostream>
#include<graphics.h>
using namespace std;

class pix
 {
   public: int x1,y1,r;

   public:
      void pix1(int x1,int y1)
       {
           putpixel(x1,y1,15);
	}
 };

class cir:public pix
  {
 public:
      void circ()
	{
     cout<<"\n Enter Co-ordinates of Center ::  ";
     cin>>x1>>y1;
     cout<<"\n\n Enter radius ::  ";
     cin>>r;

     int gd=DETECT, gm=0,d,x,y;
     initgraph(&gd,&gm,NULL);

     d=3-2*r;
     x=0;
     y=r;
     do{
	  pix1(x1+x,y1+y);
	  pix1(x1+y,y1+x);
	  pix1(x1+y,y1-x);
	  pix1(x1+x,y1-y);
	  pix1(x1-x,y1-y);
	  pix1(x1-y,y1-x);
	  pix1(x1-y,y1+x);
	  pix1(x1-x,y1+y);

	 if(d<0)
	   d= d+(4*x)+6;
	else
	  {
	     d=d+(4*(x-y))+10;
	     y=y-1;
	  }
	  x=x+1;
	  }while(x<y);
       getch();
       closegraph();
	}
};


     int main()
      {
	 cir c1;
	 c1.circ();
	 return 0;
      }
