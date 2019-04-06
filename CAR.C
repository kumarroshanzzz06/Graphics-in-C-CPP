#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
union REGS i,o;
void car(int i,int j)
{
	setcolor(6);
	rectangle(5+i,5+j,100+i,50+j);
	circle(25+i,65+j,15);
	circle(80+i,65+j,15);
	setfillstyle(8,12);
	floodfill(8+i,8+j,6);
	rectangle(130,80,getmaxx()-130,getmaxy()-80);
	if(j>0&&i>10)
	{
		line(5+i,5+j,i-15,25+j);
		line(i-15,25+j,5+i,50+j);
		floodfill(i-12,25+j,6);
	}
	else
	{
		line(100+i,5+j,115+i,25+j);
		line(115+i,25+j,100+i,50+j);
		floodfill(110+i,25+j,6);
	}
	settextstyle(2,0,5);
	setcolor(2);
	outtextxy(12+i,18+j,"ROSHAN CAR");
	floodfill(25+i,65+j,6);
	floodfill(75+i,65+j,6);
	outtextxy(220,220,"PREES ANY KEY TO EXIT");
}
void main()
{
	int gd=DETECT,gm,k,u=0;
	initgraph(&gd,&gm,"");
	i.x.ax=1;
	int86(51,&i,&o);
	setbkcolor(15);
	while(1){
	for(k=0;k<=528;k+=3)
	{
		if(!kbhit())
		{
			delay(100);
			cleardevice();
			int86(51,&i,&o);
			car(k,u);
		}
		else
			exit(0);
	}
	for(u=0;u<=398;u+=3)
	{
		if(!kbhit())
		{
			delay(100);
			cleardevice();
			int86(51,&i,&o);
			car(k,u);
			//outtextxy(200,200,"PREES ANY KEY TO EXIT");
		}
		else
			exit(0);
	}
	for(;k>0;k-=3)
	{
		if(!kbhit())
		{
			delay(100);
			cleardevice();
			int86(51,&i,&o);
			car(k,u);
			//outtextxy(200,200,"PREES ANY KEY TO EXIT");
		}
		else
			exit(0);
	}
	for(;u>0;u-=3)
	{
		if(!kbhit())
		{
			delay(100);
			cleardevice();
			int86(51,&i,&o);
			car(k,u);
			//outtextxy(200,200,"PREES ANY KEY TO EXIT");
		}
		else
			exit(0);
	}}
	//getch();
	//closegraph();
	//printf("%d\n%d",getmaxx(),getmaxy());
}