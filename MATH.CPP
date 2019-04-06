#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
union REGS in,out;
int gd=DETECT,gm;
int xp=100,yp=100,cl;
void main();
void basic_zone();
void geometry();
void trigonometry();
int callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}
void mouseposi (int &xpos,int &ypos,int &click)
{

	in.x.ax=3;
	int86(51,&in,&out);
	click=out.x.bx;
	xpos=out.x.cx;
	ypos=out.x.dx;
}
int mousehide()
{
	in.x.ax=2;
	int86(51,&in,&out);
	return 1;
}
void setposi(int &xpos,int &ypos)
{
	in.x.ax=4;
	in.x.cx=xpos;
	in.x.dx=ypos;
	int86(51,&in,&out);
}
void pwr(char c)
{
	int x=0,y=0,a=0,b=0,r=0,sa=0,ea=0;
	mousehide();
	closegraph();
	cout<<"Enter Center :-\n";
	cout<<"Enter x :- ";
	cin>>x;
	//x*=10;
	cout<<"Enter y :- ";
	cin>>y;
	//y*=10;
	clrscr();
	if(c!='e')
	{
		cout<<"Enter Radius :- ";
		cin>>r;
		//r*=10;
		clrscr();
	}
	if(c=='e')
	{
		cout<<"Enter x and y cordinates :-\n";
		cout<<"Enter a :- ";
		cin>>a;
		//a*=10;
		cout<<"Enter b :- ";
		cin>>b;
		//b*=10;
	}
	if(c=='a')
	{
		cout<<"Enter Angles in degree :-\n";
		cout<<"Enter starting angle :- ";
		cin>>sa;
		//sa*=10;
		cout<<"Enter ending angle :- ";
		cin>>ea;
		//ea*=10;
	}
	initgraph(&gd,&gm,"");
	//setlinestyle(0,1,3);
	setcolor(RED);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	setfillstyle(1,RED);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	if(c=='c')
	{
		gotoxy(28,2);
		cout<<"Area Of Circle = "<<3.14*r*r;
		gotoxy(28,3);
		cout<<"Circumference Of Circle = "<<2*3.14*r;
		circle(x*10,y*10,r*10);
	}
	if(c=='s')
	{
		gotoxy(28,2);
		cout<<"Area Of Semi Circle = "<<3.14*r*r/2.0;
		gotoxy(28,3);
		cout<<"Circumference Of Semi Circle = "<<3.14*r;
		ellipse(x*10,y*10,0,180,r*10,r*10);
	}
	if(c=='e')
	{
		gotoxy(28,2);
		cout<<"Area Of Ellipse = "<<3.14*a*b;
		gotoxy(28,3);
		cout<<"Parameter Of Ellipse = "<<3.14*(a+b);
		ellipse(x*10,y*10,0,360,a*10,b*10);
	}
	else if(c=='a')
	{
		if(ea>=sa){
		gotoxy(28,2);
		cout<<"Area Of Arc = "<<3.14*r*r*((ea-sa)/360.0);
		gotoxy(28,3);
		cout<<"Circumference Of Arc = "<<2*3.14*r*((ea-sa)/360.0);
		}
		else{
		gotoxy(28,2);
		cout<<"Area Of Arc = "<<3.14*r*r*((360+ea-sa)/360.0);
		gotoxy(28,3);
		cout<<"Circumference Of Arc = "<<2*3.14*r*((360+ea-sa)/360.0);
		}
		ellipse(x*10,y*10,sa,ea,r*10,r*10);
	}
	callmouse();
	setposi(xp,yp);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			sound(400);
			delay(250);
			nosound();
			geometry();
		}
	}
}
void fourpnt(char c)
{
	int x1=0,y1=0,x2=0,y2=0,x3=0,y3=0,x4=0,y4=0,sa=0;
	mousehide();
	closegraph();
	cout<<"Enter First Cordinate :-\n";
	cout<<"Enter x1 :- ";
	cin>>x1;
	cout<<"Enter y1 :- ";
	cin>>y1;
	clrscr();
	if(c=='l'||c=='q'||c=='t')
	{
		cout<<"Enter Second Cordinate :-\n";
		cout<<"Enter x2 :- ";
		cin>>x2;
		cout<<"Enter y2 :- ";
		cin>>y2;
		clrscr();
	}
	if(c=='t'||c=='q')
	{
		cout<<"Enter Third Cordinate :-\n";
		cout<<"Enter x3 :- ";
		cin>>x3;
		cout<<"Enter y3 :- ";
		cin>>y3;
		clrscr();
	}
	if(c=='r'||c=='q')
	{
		cout<<"Enter Fourth Cordinate :-\n";
		cout<<"Enter x4 :- ";
		cin>>x4;
		cout<<"Enter y4 :- ";
		cin>>y4;
		clrscr();
	}
	if(c=='s')
	{
		cout<<"Enter Side Length :-\n";
		cout<<"Enter a :- ";
		cin>>sa;
		clrscr();
	}
	initgraph(&gd,&gm,"");
	//setlinestyle(0,1,3);
	setcolor(RED);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	setfillstyle(1,RED);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	if(c=='l')
	{
		gotoxy(28,2);
		cout<<"Length = "<<sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		line(x1*10,y1*10,x2*10,y2*10);
	}
	else if(c=='t')
	{
		gotoxy(28,2);
		double len1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		double len2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		double len3=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
		double lenf=(len1+len2+len3)/2;
		cout<<"Area Of Traingle = "<<sqrt(lenf*(lenf-len1)*(lenf-len2)*(lenf-len3));
		line(x1*10,y1*10,x2*10,y2*10);
		line(x2*10,y2*10,x3*10,y3*10);
		line(x3*10,y3*10,x1*10,y1*10);
	}
	else if(c=='r')
	{
		gotoxy(28,2);
		cout<<"Area Of Rectangle = "<<(x4-x1)*(y4-y1);
		gotoxy(28,3);
		cout<<"Parameter Of Rectangle = "<<2*(x4-x1+y4-y1);
		rectangle(x1*10,y1*10,x4*10,y4*10);
	}
	else if(c=='s')
	{
		gotoxy(28,2);
		cout<<"Area Of Square = "<<sa*sa;
		gotoxy(28,3);
		cout<<"Parameter Of Square = "<<4*sa;
		rectangle(x1*10,y1*10,x1*10+sa*10,y1*10+sa*10);
	}
	else if(c=='q')
	{
		gotoxy(28,2);
		double sa1=(sqrt(pow(x1-x2,2)+pow(y1-y2,2))+sqrt(pow(x3-x2,2)+pow(y3-y2,2))+sqrt(pow(x1-x3,2)+pow(y1-y3,2)))/2;
		double sa2=(sqrt(pow(x3-x2,2)+pow(y3-y2,2))+sqrt(pow(x3-x4,2)+pow(y3-y4,2))+sqrt(pow(x4-x2,2)+pow(y4-y2,2)))/2;
		double aot1=sqrt(sa1*(sa1-sqrt(pow(x1-x2,2)+pow(y1-y2,2)))*(sa1-sqrt(pow(x3-x2,2)+pow(y3-y2,2)))*(sa1-sqrt(pow(x1-x3,2)+pow(y1-y3,2))));
		double aot2=sqrt(sa2*(sa2-sqrt(pow(x3-x2,2)+pow(y3-y2,2)))*(sa2-sqrt(pow(x3-x4,2)+pow(y3-y4,2)))*(sa2-sqrt(pow(x4-x2,2)+pow(y4-y2,2))));
		cout<<"Area Of Quadrilateral = "<<aot1+aot2;
		gotoxy(28,3);
		cout<<"Parameter Of Quadrilateral = "<<sqrt(pow(x1-x2,2)+pow(y1-y2,2))+sqrt(pow(x3-x2,2)+pow(y3-y2,2))+sqrt(pow(x3-x4,2)+pow(y3-y4,2))+sqrt(pow(x4-x1,2)+pow(y4-y1,2));
		line(x1*10,y1*10,x2*10,y2*10);
		line(x2*10,y2*10,x4*10,y4*10);
		line(x4*10,y4*10,x3*10,y3*10);
		line(x3*10,y3*10,x1*10,y1*10);
	}
	callmouse();
	setposi(xp,yp);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			sound(400);
			delay(250);
			nosound();
			geometry();
		}
	}
}
void geometry()
{
	cleardevice();
	setbkcolor(0);
	setlinestyle(0,1,3);
	setcolor(RED);
	setfillstyle(1,RED);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	outtextxy(100,10,"PLEASE CHOOSE ANY FIELD");
	rectangle(50,50,150,100);
	rectangle(200,50,300,100);
	rectangle(350,50,450,100);
	rectangle(50,200,150,250);
	rectangle(200,200,300,250);
	rectangle(350,200,450,250);
	rectangle(50,350,150,400);
	rectangle(200,350,300,400);
	rectangle(350,350,450,400);
	line(150,100,200,200);
	line(300,250,350,350);
	line(150,350,200,250);
	line(300,200,350,100);
	line(150,200,200,100);
	line(300,100,350,200);
	line(150,250,200,350);
	line(300,350,350,250);
	setcolor(RED);
	outtextxy(70,60,"LINE");
	outtextxy(205,60,"TRAINGLE");
	outtextxy(355,60,"RECTANGLE");
	outtextxy(60,210,"QUAD.");
	outtextxy(205,210,"SQUARE");
	outtextxy(360,210,"CIRCLE");
	outtextxy(55,360,"SEMI CIR.");
	outtextxy(210,360,"ELLIPSE");
	outtextxy(370,360,"ARC");
	callmouse();
	setposi(xp,yp);
	setfillstyle(1,GREEN);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			sound(400);
			delay(250);
			nosound();
			//exit(0);
			main();
		}
		else if(xp>=50&&xp<=150&&yp>=50&&yp<=100&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(60,60,15);
			delay(250);
			nosound();
			delay(300);
			fourpnt('l');
			//exit(0);
		}
		else if(xp>=200&&xp<=300&&yp>=50&&yp<=100&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(210,60,15);
			delay(250);
			nosound();
			delay(300);
			fourpnt('t');
			//exit(0);
		}
		else if(xp>=350&&xp<=450&&yp>=50&&yp<=100&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(360,60,15);
			delay(250);
			nosound();
			delay(300);
			fourpnt('r');
			//exit(0);
		}
		else if(xp>=50&&xp<=150&&yp>=200&&yp<=250&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(60,210,15);
			delay(250);
			nosound();
			delay(300);
			fourpnt('q');
			//exit(0);
		}
		else if(xp>=200&&xp<=300&&yp>=200&&yp<=250&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(210,210,15);
			delay(250);
			nosound();
			delay(300);
			fourpnt('s');       //four point
			//exit(0);
		}
		else if(xp>=350&&xp<=450&&yp>=200&&yp<=250&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(360,210,15);
			delay(250);
			nosound();
			delay(300);
			pwr('c');       //point with radius
			//exit(0);
		}
		else if(xp>=50&&xp<=150&&yp>=350&&yp<=400&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(60,360,15);
			delay(250);
			nosound();
			delay(300);
			pwr('s');
			//exit(0);
		}
		else if(xp>=200&&xp<=300&&yp>=350&&yp<=400&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(210,360,15);
			delay(250);
			nosound();
			delay(300);
			pwr('e');
			//exit(0);
		}
		else if(xp>=350&&xp<=450&&yp>=350&&yp<=400&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(360,360,15);
			delay(250);
			nosound();
			delay(300);
			pwr('a');
			//exit(0);
		}
	}
}
void one_num(char c)
{
	long double n1;
	mousehide();
	cleardevice();
	setcolor(RED);
	setbkcolor(15);
	setfillstyle(1,9);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(5,5,RED);
	setfillstyle(1,RED);
	floodfill(getmaxx()-15,5,RED);
	outtextxy(50,145,"NUM 1 :- ");
	rectangle(170,140,650,180);
	setfillstyle(1,15);
	floodfill(180,150,RED);
	//outtextxy(50,200,"NUM 2 :- ");
	//rectangle(170,195,650,235);
	//floodfill(180,205,RED);
	rectangle(170,300,300,330);
	if(c=='s')
		outtextxy(195,300,"SQUARE");
	else if(c=='r')
		outtextxy(180,300,"SQ. ROOT");
	else if(c=='c')
		outtextxy(210,300,"CUBE");
	else
		outtextxy(180,300,"CUBE ROOT");
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	gotoxy(24,11);
	cin>>n1;
	//gotoxy(24,14);
	//cin>>n2;
	setbkcolor(9);
	outtextxy(180,358,"RESULT = ");
	setfillstyle(1,GREEN);
	floodfill(175,310,RED);
	gotoxy(38,24);
	if(c=='s')
		cout<<n1*n1;
	else if(c=='r')
	{
		if(n1<0)
			cout<<"Invalid Input";
		else
			cout<<sqrt(n1);
	}
	else if(c=='c')
		cout<<n1*n1*n1;
	else
		cout<<pow(n1,1.0/3.0);
	outtextxy(180,400,"Press Any Key To Continue");
	callmouse();
	setposi(xp,yp);
	while(!kbhit())
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			sound(400);
			delay(250);
			nosound();
			basic_zone();
		}
	}
	getch();
	one_num(c);
}
void two_num(char c)
{
	long double n1,n2;
	mousehide();
	cleardevice();
	setcolor(RED);
	setbkcolor(15);
	setfillstyle(1,9);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(5,5,RED);
	setfillstyle(1,RED);
	floodfill(getmaxx()-15,5,RED);
	outtextxy(50,145,"NUM 1 :- ");
	rectangle(170,140,650,180);
	setfillstyle(1,15);
	floodfill(180,150,RED);
	outtextxy(50,200,"NUM 2 :- ");
	rectangle(170,195,650,235);
	floodfill(180,205,RED);
	rectangle(170,300,300,330);
	if(c=='a')
		outtextxy(215,300,"ADD");
	else if(c=='s')
		outtextxy(180,300,"SUBTRACT");
	else if(c=='m')
		outtextxy(185,300,"MULTIPLY");
	else
		outtextxy(205,300,"DIVIDE");
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	gotoxy(24,11);
	cin>>n1;
	gotoxy(24,14);
	cin>>n2;
	setbkcolor(9);
	outtextxy(180,358,"RESULT = ");
	setfillstyle(1,GREEN);
	floodfill(175,310,RED);
	gotoxy(38,24);
	if(c=='a')
		cout<<n1+n2;
	else if(c=='s')
		cout<<n1-n2;
	else if(c=='m')
		cout<<n1*n2;
	else
	{
		if(n2==0)
			cout<<"DIVIDE ERROR";
		else
			cout<<n1/n2;
	}
	outtextxy(180,400,"Press Any Key To Continue");
	callmouse();
	setposi(xp,yp);
	while(!kbhit())
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			sound(400);
			delay(250);
			nosound();
			basic_zone();
		}
	}
	getch();
	two_num(c);
}
void basic_zone()
{
	cleardevice();
	setbkcolor(0);
	setlinestyle(0,1,3);
	setcolor(RED);
	setfillstyle(1,RED);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	outtextxy(100,10,"PLEASE CHOOSE ANY FIELD");
	rectangle(50,50,150,100);
	rectangle(200,50,300,100);
	rectangle(350,50,450,100);
	rectangle(50,200,150,250);
	rectangle(200,200,300,250);
	rectangle(350,200,450,250);
	rectangle(50,350,150,400);
	rectangle(200,350,300,400);
	rectangle(350,350,450,400);
	line(150,100,200,200);
	line(300,250,350,350);
	line(150,350,200,250);
	line(300,200,350,100);
	line(150,200,200,100);
	line(300,100,350,200);
	line(150,250,200,350);
	line(300,350,350,250);
	setcolor(RED);
	outtextxy(70,60,"ADD");
	outtextxy(205,60,"SUBTRACT");
	outtextxy(355,60,"MULTIPLY");
	outtextxy(60,210,"DIVIDE");
	outtextxy(205,210,"SQUARE");
	outtextxy(350,210,"SQ. ROOT");
	outtextxy(65,360,"CUBE");
	outtextxy(200,360,"CUBE RT.");
	outtextxy(370,360,"FUN");
	callmouse();
	setposi(xp,yp);
	setfillstyle(1,GREEN);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			sound(400);
			delay(250);
			nosound();
			//exit(0);
			main();
		}
		else if(xp>=50&&xp<=150&&yp>=50&&yp<=100&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(60,60,15);
			delay(250);
			nosound();
			delay(300);
			two_num('a');
			//exit(0);
		}
		else if(xp>=200&&xp<=300&&yp>=50&&yp<=100&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(210,60,15);
			delay(250);
			nosound();
			delay(300);
			two_num('s');
			//exit(0);
		}
		else if(xp>=350&&xp<=450&&yp>=50&&yp<=100&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(360,60,15);
			delay(250);
			nosound();
			delay(300);
			two_num('m');
			//exit(0);
		}
		else if(xp>=50&&xp<=150&&yp>=200&&yp<=250&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(60,210,15);
			delay(250);
			nosound();
			delay(300);
			two_num('d');
			//exit(0);
		}
		else if(xp>=200&&xp<=300&&yp>=200&&yp<=250&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(210,210,15);
			delay(250);
			nosound();
			delay(300);
			one_num('s');
			//exit(0);
		}
		else if(xp>=350&&xp<=450&&yp>=200&&yp<=250&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(360,210,15);
			delay(250);
			nosound();
			delay(300);
			one_num('r');
			//exit(0);
		}
		else if(xp>=50&&xp<=150&&yp>=350&&yp<=400&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(60,360,15);
			delay(250);
			nosound();
			delay(300);
			one_num('c');
			//exit(0);
		}
		else if(xp>=200&&xp<=300&&yp>=350&&yp<=400&&cl==1)
		{
			//mousehide();
			sound(400);
			floodfill(210,360,15);
			delay(250);
			nosound();
			delay(300);
			one_num('b');
			//exit(0);
		}
	}
}
void angle_deg(char ach)
{
	double angl=0;
	closegraph();
	clrscr();
	cout<<"Enter Angle In Radian : ";
	cin>>angl;
	initgraph(&gd,&gm,"");
	setlinestyle(0,1,3);
	cleardevice();
	setcolor(RED);
	//setbkcolor(9);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	//setcolor(GREEN);
	setfillstyle(1,RED);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	setcolor(GREEN);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
	if(ach=='s')
	{
		gotoxy(5,5);
		cout<<"sin "<<angl<<" = "<<sin(angl);
		outtextxy(20,100,"sin(-x) = -sin x");
		outtextxy(20,180,"It's A Odd Function");
		outtextxy(20,260,"cosec x = 1 / sin x");
	}
	else if(ach=='c')
	{
		gotoxy(5,5);
		cout<<"cos "<<angl<<" = "<<cos(angl);
		outtextxy(20,100,"cos(-x) = cos x");
		outtextxy(20,180,"It's A Even Function");
		outtextxy(20,260,"sec x = 1 / cos x");
	}
	else if(ach=='t')
	{
		gotoxy(5,5);
		cout<<"tan "<<angl<<" = "<<tan(angl);
		outtextxy(20,100,"tan(-x) = pie - tan x");
		outtextxy(20,180,"It's A Odd Function");
		outtextxy(20,260,"cot x = 1 / tan x");
	}
	else if(ach=='u')
	{
		gotoxy(5,5);
		cout<<"sinh "<<angl<<" = "<<sinh(angl);
		outtextxy(20,100,"sinh(-x) = -sinh x");
		outtextxy(20,180,"It's A Even Function");
		outtextxy(20,260,"cosech x = 1 / sinh x");
	}
	else if(ach=='v')
	{
		gotoxy(5,5);
		cout<<"cosh "<<angl<<" = "<<cosh(angl);
		outtextxy(20,100,"cosh(-x) = cosh x");
		outtextxy(20,180,"It's A Even Function");
		outtextxy(20,260,"sech x = 1 / cosh x");
	}
	else if(ach=='w')
	{
		gotoxy(5,5);
		cout<<"tanh "<<angl<<" = "<<tanh(angl);
		outtextxy(20,100,"tanh(-x) = tanh x");
		outtextxy(20,180,"It's A Even Function");
		outtextxy(20,260,"coth x = 1 / tanh x");
	}
	callmouse();
	setposi(xp,yp);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			//floodfill(60,190,GREEN);
			sound(400);
			delay(250);
			nosound();
			delay(300);
			trigonometry();
		}
	}
}
void infotrigo1()
{
	cleardevice();
	setcolor(RED);
	//setbkcolor(9);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	//setcolor(GREEN);
	setfillstyle(1,RED);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	setcolor(GREEN);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
	outtextxy(20,20,"1. sin x = 1/cosec x");
	outtextxy(20,100,"2. cos x = 1/sec x");
	outtextxy(20,180,"3. tan x = 1/cot x");
	outtextxy(20,260,"4. sinh x = (e^x - e^-x)/2");
	outtextxy(20,340,"5. cosh x = (e^x + e^-x)/2");
	outtextxy(20,420,"6. tanh x = (e^x - e^-x)/(e^x + e^-x)");
	callmouse();
	setposi(xp,yp);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			//floodfill(60,190,GREEN);
			sound(400);
			delay(250);
			nosound();
			delay(300);
			trigonometry();
		}
	}
}
void infotrigo2()
{
	cleardevice();
	setcolor(RED);
	//setbkcolor(9);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	//setcolor(GREEN);
	setfillstyle(1,RED);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	setcolor(GREEN);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
	outtextxy(20,20,"1. sin x = x - x^3 /3! + x^5 /5! - ................");
	outtextxy(20,100,"2. cos x = 1 + x^2 /2! - x^4 /4! + ................");
	outtextxy(20,180,"3. e^x = 1 + x + x^2 /2 + x^3 /3 + x^4 /4 + .................");
	outtextxy(20,260,"4. 1/(1-x) = 1 + x + x^2 + x^3 + x^4 + ...............");
	outtextxy(20,340,"5. 1/(1+x) = 1 - x + x^2 - x^3 + x^4 - ...............");
	outtextxy(20,420,"6. log(1+x) = 1 + x + x^2 /2! + x^3 /3! + ................");
	callmouse();
	setposi(xp,yp);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			//floodfill(60,190,GREEN);
			sound(400);
			delay(250);
			nosound();
			delay(300);
			trigonometry();
		}
	}
}
void infotrigo3()
{
	cleardevice();
	setcolor(RED);
	//setbkcolor(9);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	//setcolor(GREEN);
	setfillstyle(1,RED);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	setcolor(GREEN);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
	outtextxy(20,20,"1. (cos x)^2 + (sin x)^2 = 1");
	outtextxy(20,100,"2. (cosh x)^2 - (sinh x)^2 = 1");
	outtextxy(20,180,"3. sin 2x = 2 * sin x * cos x");
	outtextxy(20,260,"4. cos 2x = (cos x)^2 - (sin x)^2");
	outtextxy(20,340,"5. (sec x)^2 - (tan x)^2 = 1");
	outtextxy(20,420,"6. (cosec x)^2 - (cot x)^2 = 1");
	callmouse();
	setposi(xp,yp);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			//floodfill(60,190,GREEN);
			sound(400);
			delay(250);
			nosound();
			delay(300);
			trigonometry();
		}
	}
}
void trigonometry()
{
	cleardevice();
	setbkcolor(0);
	setlinestyle(0,1,3);
	setcolor(RED);
	setfillstyle(1,RED);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	outtextxy(100,10,"PLEASE CHOOSE ANY FIELD");
	rectangle(50,50,150,100);
	rectangle(200,50,300,100);
	rectangle(350,50,450,100);
	rectangle(50,200,150,250);
	rectangle(200,200,300,250);
	rectangle(350,200,450,250);
	rectangle(50,350,150,400);
	rectangle(200,350,300,400);
	rectangle(350,350,450,400);
	line(150,100,200,200);
	line(300,250,350,350);
	line(150,350,200,250);
	line(300,200,350,100);
	line(150,200,200,100);
	line(300,100,350,200);
	line(150,250,200,350);
	line(300,350,350,250);
	setcolor(RED);
	outtextxy(70,60,"sin");
	outtextxy(215,60,"cos");
	outtextxy(365,60,"tan");
	outtextxy(70,210,"sinh");
	outtextxy(215,210,"cosh");
	outtextxy(360,210,"tanh");
	outtextxy(65,360,"Relation");
	outtextxy(210,360,"Series");
	outtextxy(355,360,"Formulae");
	callmouse();
	setposi(xp,yp);
	setfillstyle(1,GREEN);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			sound(400);
			delay(250);
			nosound();
			//exit(0);
			main();
		}
		else if(xp>=50&&xp<=150&&yp>=50&&yp<=100&&cl==1)
		{
			mousehide();
			sound(400);
			floodfill(60,60,15);
			delay(250);
			nosound();
			delay(300);
			angle_deg('s');
			//exit(0);
		}
		else if(xp>=200&&xp<=300&&yp>=50&&yp<=100&&cl==1)
		{
			mousehide();
			sound(400);
			floodfill(210,60,15);
			delay(250);
			nosound();
			delay(300);
			angle_deg('c');
			//exit(0);
		}
		else if(xp>=350&&xp<=450&&yp>=50&&yp<=100&&cl==1)
		{
			mousehide();
			sound(400);
			floodfill(360,60,15);
			delay(250);
			nosound();
			delay(300);
			angle_deg('t');
			//exit(0);
		}
		else if(xp>=50&&xp<=150&&yp>=200&&yp<=250&&cl==1)
		{
			mousehide();
			sound(400);
			floodfill(60,210,15);
			delay(250);
			nosound();
			delay(300);
			angle_deg('u');
			//exit(0);
		}
		else if(xp>=200&&xp<=300&&yp>=200&&yp<=250&&cl==1)
		{
			mousehide();
			sound(400);
			floodfill(210,210,15);
			delay(250);
			nosound();
			delay(300);
			angle_deg('v');
			//exit(0);
		}
		else if(xp>=350&&xp<=450&&yp>=200&&yp<=250&&cl==1)
		{
			mousehide();
			sound(400);
			floodfill(360,210,15);
			delay(250);
			nosound();
			delay(300);
			angle_deg('w');
			//exit(0);
		}
		else if(xp>=50&&xp<=150&&yp>=350&&yp<=400&&cl==1)
		{
			mousehide();
			sound(400);
			floodfill(60,360,15);
			delay(250);
			nosound();
			delay(300);
			infotrigo1();
			//exit(0);
		}
		else if(xp>=200&&xp<=300&&yp>=350&&yp<=400&&cl==1)
		{
			mousehide();
			sound(400);
			floodfill(210,360,15);
			delay(250);
			nosound();
			delay(300);
			infotrigo2();
			//exit(0);
		}
		else if(xp>=350&&xp<=450&&yp>=350&&yp<=400&&cl==1)
		{
			mousehide();
			sound(400);
			floodfill(360,360,15);
			delay(250);
			nosound();
			delay(300);
			infotrigo3();
			//exit(0);
		}
	}
}
void about_me()
{
	cleardevice();
	setcolor(RED);
	//setbkcolor(9);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	//setcolor(GREEN);
	setfillstyle(1,RED);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-15,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	setcolor(GREEN);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
	outtextxy(20,20,"MADE BY : ROSHAN KUMAR");
	outtextxy(20,100,"EMAIL ID : kumarroshanzzz06@gmail.com");
	outtextxy(20,180,"WEBSITE : kumarroshan.hpage.com");
	outtextxy(20,260,"Enjoy The Fun Of Mathematics In PC");
	outtextxy(20,340,"SEE THE MAGIC OF TURBO C/C++");
	outtextxy(20,420,"CLOSE THE WINDOW AND ENJOY DIFFERENT ZONES");
	callmouse();
	setposi(xp,yp);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			//floodfill(60,190,GREEN);
			sound(400);
			delay(250);
			nosound();
			delay(300);
			main();
		}
	}
}
void main()
{
	char s[50];
	closegraph();
	initgraph(&gd,&gm,"");
	setlinestyle(0,1,3);
	setcolor(RED);
	//setbkcolor(9);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	setcolor(GREEN);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
	outtextxy(65,0,"WELCOME TO MATHEMATICS ZONE");
	setcolor(RED);
	outtextxy(110,35,"(PLEASE SELECT ANY ZONE)");
	setcolor(GREEN);
	rectangle(50,180,250,250);
	rectangle(350,180,550,250);
	rectangle(50,330,250,400);
	rectangle(350,330,550,400);
	line(250,215,350,365);
	line(250,365,350,215);
	setcolor(RED);
	settextstyle(COMPLEX_FONT,HORIZ_DIR,4);
	outtextxy(50,425,"MADE BY :- ROSHAN KUMAR");
	circle(300,290,20);
	setfillstyle(1,RED);
	floodfill(300,290,RED);
	setcolor(GREEN);
	outtextxy(290,265,"R");
	setcolor(RED);
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-15,5,RED);
	settextstyle(COMPLEX_FONT,HORIZ_DIR,3);
	outtextxy(60,195,"1. BASIC ZONE");
	outtextxy(355,195,"2. GEOMETRY");
	outtextxy(55,345,"3.TRIGONOMETRY");
	outtextxy(355,345,"4. ABOUT ME");
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);     //cross sign
	line(getmaxx(),0,getmaxx()-20,20);
	callmouse();
	setposi(xp,yp);
	setfillstyle(1,BLUE);
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=50&&xp<=250&&yp>=180&&yp<=250&&cl==1)
		{
			mousehide();
			floodfill(60,190,GREEN);
			sound(400);
			delay(250);
			nosound();
			delay(300);
			basic_zone();
		}
		else if(xp>=350&&xp<=550&&yp>=180&&yp<=250&&cl==1)
		{
			mousehide();
			floodfill(360,190,GREEN);
			sound(400);
			delay(250);
			nosound();
			delay(300);
			geometry();
		}
		else if(xp>=50&&xp<=250&&yp>=330&&yp<=400&&cl==1)
		{
			mousehide();
			floodfill(60,340,GREEN);
			sound(400);
			delay(250);
			nosound();
			delay(300);
			trigonometry();
		}
		else if(xp>=350&&xp<=550&&yp>=330&&yp<=400&&cl==1)
		{
			mousehide();
			floodfill(360,340,GREEN);
			sound(400);
			delay(250);
			nosound();
			delay(300);
			about_me();
		}
		else if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
		{
			mousehide();
			sound(400);
			delay(250);
			nosound();
			closegraph();
			jmp:
			for(int lp=0;lp<50;lp++)
				s[lp]='\0';
			lp=0;
			cout<<"\n\n\tEnter The Security Password :-  ";
			while((s[lp++]=getch())!=13)     //13 ASCII for enter
			{
				if(s[lp-1]!=8)           //8 ASCII for backspace
					cout<<"*";
				else
				{
					lp-=2;
					if(lp<0)
					{
						lp=0;
						continue;
					}
					cout<<"\b \b";
				}
			}
			if(s[0]=='E'&&s[1]=='x'&&s[2]=='c'&&s[3]=='e'&&s[4]=='l'&&s[5]=='l'&&s[6]=='e'&&s[7]=='n'&&s[8]=='t'&&s[9]==13)
				exit(0);
			else
			{
				clrscr();
				cout<<"\n\n\tPress M For Main Menu OR Any Key To Re-Type Password :- ";
				s[0]=getche();
				if(s[0]=='m'||s[0]=='M')
					main();
				else
					goto jmp;
			}
		}
	}
}