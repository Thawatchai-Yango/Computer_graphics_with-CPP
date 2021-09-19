#include<iostream>
#include<graphics.h>
using namespace std;

class pixel1
 {
    
   public:
      void pix1(int x,int y)
	{
	  
        putpixel(x,y,WHITE);
		
	}

 };

class lin1:public pixel1
{
  public:
	void linedraw()
  	{
     		float x,y,dx,dy;
		int x1,y1,x2,y2,i,length;
		

		cout<<"\n Enter Co-ordinates x1,y1 ::  ";
     		cin>>x1>>y1;
     		cout<<"\n\n Enter Co-ordinates x2,y2  ::  ";
     		cin>>x2>>y2;
		int gd=DETECT, gm=0;
     		initgraph(&gd,&gm,NULL);
     		dx = abs(x2-x1);
		dy = abs(y2-y1);
		if(dx>=dy) length = dx;
		else length = dy;
		dx = dx/length;
		dy = dy/length;
		x=x1;
		y=y1;
		i=1;
		while(i<=length)
		{
			pix1(x,y);
			x = x + dx;
			y = y + dy;
			i++;
		}
       	getch();
       	closegraph();
     	}
	void linedraw(int x1,int y1,int x2,int y2)
	{
              int i,e,x,y,dx,dy,t=2;
               int gd=DETECT, gm=0;
     		initgraph(&gd,&gm,NULL);
		dx = abs(x2-x1);
		dy = abs(y2-y1);
		x=x1;
		y=y1;
		e = 2*dy-dx;
		i=1;
		do{
		    pix1(x,y);
		while(e>=0)
		{
			y=y+1;
			pix1(x,y);
			e = e - 2*dx;

		}
		x++;
		e = e + 2*dy;
		i++;
		}while(i<=dx);
	getch();
	closegraph();
        }
	
};

     int main()
      {
	 lin1 l1;
	 l1.linedraw();
	int x1,x2,y1,y2;
	
	cout<<"\n Enter Co-ordinates x1,y1 ::  ";
     	cin>>x1>>y1;
     	cout<<"\n\n Enter Co-ordinates x2,y2  ::  ";
     	cin>>x2>>y2;
	l1.linedraw(x1,y1,x2,y2);
	 return 0;
      }
