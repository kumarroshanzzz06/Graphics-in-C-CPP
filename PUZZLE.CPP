		      /*PUZZLE Made By Roshan Kumar*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
long int k=0,t=0,s1=0,s=0,r=0,d=0,c1=0,e=0,e1=0,k1=0,count;
union REGS in,out;
void main();
void mousehide()
{
	in.x.ax=2;
	int86(51,&in,&out);
}
void callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
}
void mouseposi (int &xpos,int &ypos,int &click)
{
	in.x.ax=3;
	int86(51,&in,&out);
	click=out.x.bx;
	xpos=out.x.cx;
	ypos=out.x.dx;
}
void fillarea(int n)
{
	int poly[10]={245,100,315,100,315,140,245,140,245,100};
	settextstyle(DEFAULT_FONT,0,1);
	setfillstyle(1,RED);
	switch(n)
	{
	case 1: c1++;
		fillellipse(120,120,35,35); //1st circle 1
		outtextxy(95,115,"CIRCLE");break; //green=2
	case 11:c1++;
		fillellipse(280,280,35,35); //2nd circle 11
		outtextxy(255,275,"CIRCLE");break;
	case 6: e++;
		fillellipse(200,200,35,20);
		outtextxy(175,195,"ELLIPSE");break; //1st ellipse 6
	case 13:e++;
		fillellipse(120,360,35,20);
		outtextxy(95,355,"ELLIPSE");break; //2nd ellipse 13
	case 2: e1++;
		fillellipse(200,120,20,35);
		settextstyle(DEFAULT_FONT,1,1);
		outtextxy(205,95,"ELLIPSE"); //1st ellipse 2
		settextstyle(DEFAULT_FONT,0,1);break;
	case 16:e1++;
		fillellipse(360,360,20,35);
		settextstyle(DEFAULT_FONT,1,1);
		outtextxy(365,335,"ELLIPSE"); //2nd ellipse 16
		settextstyle(DEFAULT_FONT,0,1);break;
	case 3: r++;
		fillpoly(5,poly);            //1st rectangle 3
		outtextxy(245,118,"RECTANGLE");break;
	case 9: r++;
		poly[0]=85;poly[1]=260;
		poly[2]=155;poly[3]=260;
		poly[4]=155;poly[5]=300;
		poly[6]=85;poly[7]=300;
		poly[8]=85;poly[9]=260;
		fillpoly(5,poly);           //2nd rectangle 9
		outtextxy(85,278,"RECTANGLE");break;
	case 4: s++;
		poly[0]=325;poly[1]=85;
		poly[2]=395;poly[3]=85;
		poly[4]=395;poly[5]=155;
		poly[6]=325;poly[7]=155;
		poly[8]=325;poly[9]=85;
		fillpoly(5,poly);   //1st square 4
		outtextxy(335,115,"SQUARE");break;
	case 8: s++;
		poly[0]=325;poly[1]=165;
		poly[2]=395;poly[3]=165;
		poly[4]=395;poly[5]=235;
		poly[6]=325;poly[7]=235;
		poly[8]=325;poly[9]=165;
		//for(int i=1;i<=9;i+=2)
			//poly[i]+=80;
		fillpoly(5,poly); //2nd square 8
		outtextxy(335,195,"SQUARE");break;
	case 5: d++;
		fillellipse(120,180,10,10);  //1st dot 5
		outtextxy(110,205,"DOT");break;
	case 12:d++;
		fillellipse(360,260,10,10);  //2nd dot 12
		outtextxy(350,285,"DOT");break;
	case 7: s1++;
		ellipse(280,200,0,180,30,30);   //1st semi 7
		line(250,200,310,200);
		floodfill(252,198,15);
		outtextxy(265,210,"SEMI");break;
	case 14:s1++;
		ellipse(200,360,0,180,30,30);    //2nd semi 14
		line(170,360,230,360);
		floodfill(172,358,15);
		outtextxy(185,370,"SEMI");break;
	case 10:t++;
		poly[0]=200;poly[1]=245;
		poly[2]=165;poly[3]=315;
		poly[4]=235;poly[5]=315;
		poly[6]=200;poly[7]=245;
		fillpoly(4,poly);  //1st traingle 10
		outtextxy(170,305,"TRAINGLE");break;
	case 15:t++;
		poly[0]=280;poly[1]=325;
		poly[2]=245;poly[3]=395;
		poly[4]=315;poly[5]=395;
		poly[6]=280;poly[7]=325;
		//for(i=0;i<=7;i++)
			//poly[i]+=80;
		fillpoly(4,poly);  //2nd traingle 15
		outtextxy(250,385,"TRAINGLE");break;
	}
}
void box(int n,int n1)
{
	if(n1==1)
		setfillstyle(1,1);
	else
		setfillstyle(1,15);
	switch(n)
	{
	case 1:floodfill(90,90,2);break;
	case 2:floodfill(170,90,2);break;
	case 3:floodfill(250,90,2);break;
	case 4:floodfill(330,90,2);break;
	case 5:floodfill(90,170,2);break;
	case 6:floodfill(170,170,2);break;
	case 7:floodfill(250,170,2);break;
	case 8:floodfill(330,170,2);break;
	case 9:floodfill(90,250,2);break;
	case 10:floodfill(170,250,2);break;
	case 11:floodfill(250,250,2);break;
	case 12:floodfill(330,250,2);break;
	case 13:floodfill(90,330,2);break;
	case 14:floodfill(170,330,2);break;
	case 15:floodfill(250,330,2);break;
	case 16:floodfill(330,330,2);break;
	}
}
void menu()
{
	setfillstyle(1,15);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	outtextxy(60,5,"LET'S PLAY PUZZLE");
	outtextxy(255,100,"MENU");
	rectangle(230,180,380,230);
	outtextxy(260,175,"EASY");
	rectangle(230,250,380,300);
	outtextxy(240,245,"MEDIUM");
	rectangle(230,320,380,370);
	outtextxy(260,315,"HARD");
	rectangle(230,390,380,440);
	outtextxy(260,385,"HELP");
	floodfill(240,190,GREEN);
	floodfill(231,251,GREEN);
	floodfill(231,321,GREEN);
	floodfill(231,391,GREEN);
	rectangle(639-100,479-60,639,479);
	outtextxy(639-90,479-60,"EXIT");
	floodfill(540,420,GREEN);
}
void main()
{
	int gd=DETECT,gm,x,y,cl,d_t=400;
	initgraph(&gd,&gm,"");
	y:cleardevice();
	callmouse();
	in.x.ax=4;
	in.x.cx=0;
	in.x.dx=0;
	int86(51,&in,&out);
	setcolor(GREEN);
	menu();
	while(1)
	{
		mouseposi(x,y,cl);
		if(x>=539&&x<=639&&y>=419&&y<=479&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			exit(0);
		}
		else if(x>=230&&x<=380&&y>=180&&y<=230&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			goto x;
		}
		else if(x>=230&&x<=380&&y>=250&&y<=300&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			d_t=250;
			goto x;
		}
		else if(x>=230&&x<=380&&y>=320&&y<=370&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			d_t=100;
			goto x;
		}
		else if(x>=230&&x<=380&&y>=390&&y<=440&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			cleardevice();
			gotoxy(5,5);
			cout<<"You Have 16 Boxes\n\tEach Two Boxes Contains The Same Type Of Structures\n\tYou Have To Identify(Left Click On) Those Two Boxes Consequtively\n\tIf You Failed To Identify\n\tBoxes Are Again Filled\n\n\tYou Have As Many Number Of Chances\n\n\tAnd There Is No Time Limit\n\n\tEnjoy The Game\n\n\tBEST OF LUCK\n\n\n\n\t\tPress Any Key To EXIT";
			getch();
			goto y;
		}
	}
	x:
	closegraph();
	initgraph(&gd,&gm,"");
	callmouse();
	in.x.ax=4;
	in.x.cx=0;
	in.x.dx=0;
	int86(51,&in,&out);
	setcolor(GREEN);
	setfillstyle(1,15);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	rectangle(80,80,400,400);
	floodfill(105,105,GREEN);
	line(160,80,160,400);
	line(240,80,240,400);
	line(320,80,320,400);
	line(80,160,400,160);
	line(80,240,400,240);
	line(80,320,400,320);
	setcolor(15);
	//settextstyle(BOLD_FONT,HORIZ_DIR,3);
	outtextxy(60,5,"LET'S PLAY PUZZLE");
	rectangle(639-100,479-60,639,479);
	outtextxy(639-90,479-60,"EXIT");
	outtextxy(10,479-50,"MADE BY:-ROSHAN KUMAR");
	setfillstyle(1,1);
	floodfill(638,478,15);
	mousehide();
	for(int i=1;i<=16;i++)   //For checking
	{
		box(i,1);
		fillarea(i);
		delay(d_t);
	}
	delay(d_t*2+200);
	for(i=1;i<=16;i++)
		box(i,2);
	k=0;t=0;s1=0;s=0;r=0;d=0;c1=0;e=0;e1=0;k1=0,count=1;
	callmouse();
	while(1)
	{
		mouseposi(x,y,cl);
		gotoxy(8,25);
		if(x>=539&&x<=639&&y>=419&&y<=479&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			exit(0);
		}
		else if(x>=80&&x<=160&&y>=80&&y<=160&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(1,1);
			fillarea(1);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=160&&x<=240&&y>=80&&y<=160&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(2,1);
			fillarea(2);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=240&&x<=320&&y>=80&&y<=160&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(3,1);
			fillarea(3);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=320&&x<=400&&y>=80&&y<=160&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(4,1);
			fillarea(4);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=80&&x<=160&&y>=160&&y<=240&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(5,1);
			fillarea(5);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=160&&x<=240&&y>=160&&y<=240&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(6,1);
			fillarea(6);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=240&&x<=320&&y>=160&&y<=240&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(7,1);
			fillarea(7);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=320&&x<=400&&y>=160&&y<=240&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(8,1);
			fillarea(8);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=80&&x<=160&&y>=240&&y<=320&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(9,1);
			fillarea(9);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=160&&x<=240&&y>=240&&y<=320&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(10,1);
			fillarea(10);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=240&&x<=320&&y>=240&&y<=320&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(11,1);
			fillarea(11);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=320&&x<=400&&y>=240&&y<=320&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(12,1);
			fillarea(12);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=80&&x<=160&&y>=320&&y<=400&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(13,1);
			fillarea(13);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=160&&x<=240&&y>=320&&y<=400&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(14,1);
			fillarea(14);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=240&&x<=320&&y>=320&&y<=400&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(15,1);
			fillarea(15);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		else if(x>=320&&x<=400&&y>=320&&y<=400&&cl==1)
		{
			k++;
			mousehide();
			sound(400);
			delay(250);
			nosound();
			box(16,1);
			fillarea(16);
			callmouse();
			cout<<"\n\n\tTotal Number Of Guesses:- "<<count++;
		}
		if(k==2)
		{
			if(c1==1||c1==0)
			{
				mousehide();
				delay(100);
				box(1,2);
				delay(100);
				box(11,2);
				callmouse();
				c1=0;
			}
			else if(c1==2)
			{
				c1=10;k1++;
			}
			if(e==1||e==0)
			{
				mousehide();
				delay(100);
				box(6,2);
				delay(100);
				box(13,2);
				callmouse();
				e=0;
			}
			else if(e==2)
			{
				e=10;k1++;
			}
			if(e1==1||e1==0)
			{
				mousehide();
				delay(100);
				box(2,2);
				delay(100);
				box(16,2);
				callmouse();
				e1=0;
			}
			else if(e1==2)
			{
				e1=10;k1++;
			}
			if(r==1||r==0)
			{
				mousehide();
				delay(100);
				box(3,2);
				delay(100);
				box(9,2);
				callmouse();
				r=0;
			}
			else if(r==2)
			{
				r=10;k1++;
			}
			if(s==1||s==0)
			{
				mousehide();
				delay(100);
				box(4,2);
				delay(100);
				box(8,2);
				callmouse();
				s=0;
			}
			else if(s==2)
			{
				s=10;k1++;
			}
			if(d==1||d==0)
			{
				mousehide();
				delay(100);
				box(5,2);
				delay(100);
				box(12,2);
				callmouse();
				d=0;
			}
			else if(d==2)
			{
				d=10;k1++;
			}
			if(s1==1||s1==0)
			{
				mousehide();
				delay(100);
				box(7,2);
				delay(100);
				box(14,2);
				callmouse();
				s1=0;
			}
			else if(s1==2)
			{
				s1=10;k1++;
			}
			if(t==1||t==0)
			{
				mousehide();
				delay(100);
				box(10,2);
				delay(100);
				box(15,2);
				callmouse();
				t=0;
			}
			else if(t==2)
			{
				t=10;k1++;
			}
			if(k1==8)
			{
				mousehide();
				delay(150);
				cleardevice();
				settextstyle(BOLD_FONT,HORIZ_DIR,3);
				setcolor(GREEN);
				outtextxy(200,100,"CONGRATS YOU WIN !!!");
				rectangle(230,180,480,230);
				outtextxy(250,175,"PLAY AGAIN");
				rectangle(230,250,480,300);
				outtextxy(325,245,"EXIT");
				floodfill(231,181,GREEN);
				floodfill(231,251,GREEN);
				callmouse();
				cout<<"\n\tFinal Number Of Guesses:- "<<--count;
				while(1)
				{
					mouseposi(x,y,cl);
					if(x>=230&&x<=430&&y>=180&&y<=230&&cl==1)
					{
						sound(400);
						delay(250);
						nosound();
						main();
					}
					else if(x>=230&&x<=430&&y>=250&&y<=300&&cl==1)
					{
						sound(400);
						delay(250);
						nosound();
						exit(0);
					}
				}
			}
			k=0;
		}
	}
	//getch();
	//closegraph();
}