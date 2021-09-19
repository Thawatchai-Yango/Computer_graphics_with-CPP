#include<graphics.h>
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int gd=DETECT,gm=0,ch;
int a,b[20],i,c[20],d[20],e[20];
void reflx();
void refly();
void reflxy();
void quad();

int main()
{
cout<<"enter no points of poly";
cin>>a;
cout<<"\n enter no of cordinates of polygon";
for (i=0;i<a*2;i++)
{
cin>>b[i];
if (i%2==0)
c[i]=b[i]+320;
else
c[i]=240-b[i];
}
c[i]=c[0];
c[i+1]=c[1];
cout<<"\n please enter choice 1:Reflection about X 2:Reflection about Y 3:Reflection about X and Y ";
cin>>ch;

switch(ch)
{
case 1:
quad();
reflx();
break;
case 2:
quad();
refly();
break;

case 3:
quad();
reflxy();
break;
}
getch();
closegraph();
return 0;
}

void quad()
{
initgraph(&gd,&gm,NULL);
line(0,240,640,240);
line(320,0,320,480);
drawpoly(a+1,c);
}
void reflx()
{
 for (i=0;i<a*2;i++)
{
if (i%2==0)
c[i]=b[i]+320;
else
c[i]=240+b[i];
}
c[2*a]=c[0];
c[2*a+1]=c[1];
drawpoly(a+1,c);
}

void refly()
{
 for (i=0;i<a*2;i++)
{
if (i%2==0)
d[i]=(b[i]*-1)+320;
else
d[i]=240-b[i];
}
d[2*a]=d[0];
d[2*a+1]=d[1];
drawpoly(a+1,d);
 getch();
}

void reflxy()
{
 setcolor(3);
 for(i=0;i<a*2;i++)
{
e[i]=320-b[i];
i++;
e[i]=240+b[i];
}
e[2*a]=e[0];
e[2*a+1]=e[1];
drawpoly(a+1,e);
}
