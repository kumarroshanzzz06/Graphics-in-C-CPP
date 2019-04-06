#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#define l 75
#define r 77
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
void menu()
{
	setfillstyle(1,15);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	outtextxy(60,5,"LET'S PLAY MOVING CAR GAME");
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
void func(int n,int xp)
{
	if(n==1)
	{
		setcolor(15);
		setfillstyle(1,15);
	}
	else
	{
		setcolor(2);
		setfillstyle(CLOSE_DOT_FILL,1);
	}
	rectangle(2+xp,350,50+xp,398);
	line(50+xp,350,69+xp,374);
	line(69+xp,374,50+xp,398);
	floodfill(3+xp,351,13*n+2);
	floodfill(60+xp,374,13*n+2);
	outtextxy(10+xp,363,"CAR");
}
void main()
{
	int gd=DETECT,gm,x,y,cl,xp=0,xc=0,yp=0,yp1=18,xc1=73,yp2=27,xc2=146,yp3=36,xc3=219,yp4=45,xc4=292,yp5=54,xc5=365,yp6=63,xc6=438,yp8=99,xc8=584,poly[8]={0,0,0,400,639,400,639,0};
	char in1;
	int pts=100,ck=0,delt=250;
	initgraph(&gd,&gm,"");
	y:cleardevice();
	callmouse();
	in.x.ax=4;
	in.x.cx=30;
	in.x.dx=30;
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
			delt=180;
			goto x;
		}
		else if(x>=230&&x<=380&&y>=320&&y<=370&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			delt=120;
			goto x;
		}
		else if(x>=230&&x<=380&&y>=390&&y<=440&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			mousehide();
			cleardevice();
			gotoxy(5,5);
			cout<<"WELCOME TO THE GAME :- THE MOVING CAR\n\tOne Car Is There Which Is Controlled By LEFT and RIGHT Arrow Key\n\t8 Phases Are There And Many Balls Are Falling Down Towards Car\n\tYou Have To Protect Your Car From These Balls\n\tStamina Of Car Is Initially 100 %\n\tIf Any Ball Touches The Car Then The Stamina Is Decreses By 10 %\n\n\tIf Your Stamina Is 0 % Then You Will Be Loser\n\n\tAnd There Is No Time Limit\n\n\tEnjoy The Game\n\n\tBEST OF LUCK\n\n\n\n\t\tPress Any Key To EXIT";
			getch();
			callmouse();
			goto y;
		}
	}
	x:
	closegraph();
	initgraph(&gd,&gm,"");
	mousehide();
	setcolor(GREEN);
	fillpoly(4,poly);
	line(71,400,71,-1);   //1st rectangle
	line(142,400,142,-1); //2nd rectangle
	line(213,400,213,-1); //3rd rectangle
	line(284,400,284,-1); //4th rectangle
	line(355,400,355,-1); //5th rectangle
	line(426,400,426,-1); //6th rectangle
	line(497,400,497,-1); //7th rectangle
	line(568,400,568,-1); //8th rectangle
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	setcolor(1);
	outtextxy(100,479-20,"MADE BY:-ROSHAN KUMAR");
	outtextxy(130,479-40,"MOVING CAR GAME                    Press ESC To EXIT");
	setcolor(GREEN);
	rectangle(2,350,50,398);
	line(50,350,69,374);
	line(69,374,50,398);
	setfillstyle(CLOSE_DOT_FILL,1);
	floodfill(3,351,2);
	floodfill(60,374,2);
	outtextxy(10,363,"CAR");
	gotoxy(5,21);
	cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
	while((!kbhit()))
	{
		setcolor(1);
		setfillstyle(1,RED);
		circle(30+xc,30+yp,20);
		floodfill(32+xc,32+yp,1);
		circle(30+xc1,30+yp1,20);
		floodfill(32+xc1,32+yp1,1);
		circle(30+xc2,30+yp2,20);
		floodfill(32+xc2,32+yp2,1);
		circle(30+xc3,30+yp3,20);
		floodfill(32+xc3,32+yp3,1);
		circle(30+xc4,30+yp4,20);
		floodfill(32+xc4,32+yp4,1);
		circle(30+xc5,30+yp5,20);
		floodfill(32+xc5,32+yp5,1);
		circle(30+xc6,30+yp6,20);
		floodfill(32+xc6,32+yp6,1);
		circle(30+xc8,30+yp8,20);
		floodfill(32+xc8,32+yp8,1);
		delay(delt);
		setcolor(15);
		setfillstyle(1,15);
		circle(30+xc,30+yp,20);
		floodfill(32+xc,32+yp,15);
		circle(30+xc1,30+yp1,20);
		floodfill(32+xc1,32+yp1,15);
		circle(30+xc2,30+yp2,20);
		floodfill(32+xc2,32+yp2,15);
		circle(30+xc3,30+yp3,20);
		floodfill(32+xc3,32+yp3,15);
		circle(30+xc4,30+yp4,20);
		floodfill(32+xc4,32+yp4,15);
		circle(30+xc5,30+yp5,20);
		floodfill(32+xc5,32+yp5,15);
		circle(30+xc6,30+yp6,20);
		floodfill(32+xc6,32+yp6,15);
		circle(30+xc8,30+yp8,20);
		floodfill(32+xc8,32+yp8,15);
		yp+=9;
		yp1+=9;
		yp2+=9;yp3+=9;yp4+=9;yp5+=9;yp6+=9;yp8+=9;
		if(yp>315)
		{
			//setcolor(15);
			//setfillstyle(1,15);
			//circle(30,30+yp,20);
			//floodfill(32,32+yp,15);
			yp=0;
			xc=73;
		}
		if(yp1>315)
		{
			yp1=30;
			xc1=73;
		}
		if(yp2>315)
		{
			yp2=36;
			xc2=0;
		}
		if(yp3>315)
		{
			yp3=45;
			xc3=73;
		}
		if(yp4>315)
		{
			yp4=51;
			xc4=0;
		}
		if(yp5>315)
		{
			yp5=57;
			xc5=73;
		}
		if(yp6>315)
		{
			yp6=63;
			xc6=73;
		}
		if(yp8>315)
		{
			yp8=51;
			xc8=0;
		}
		if(yp>308&&xp==0)
		{
			pts-=10;
			gotoxy(5,21);
			cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
		}
	}
	in1=getch();
	if(in1==27)
		exit(0);
	while(1)
	{
		in1=getch();
		if(in1==l)
		{
			xp-=71;
			if(xp<0)
				xp=0;
			else
			{
				func(1,xp+71);
				func(0,xp);
			}
		}
		else if(in1==r)
		{
			xp+=71;
			if(xp>568)
				xp-=71;
			else
			{
				func(1,xp-71);
				func(0,xp);
			}
		}
		while((!kbhit()))
		{
			setcolor(1);
			setfillstyle(1,RED);
			circle(30+xc,30+yp,20);
			floodfill(32+xc,32+yp,1);
			circle(30+xc1,30+yp1,20);
			floodfill(32+xc1,32+yp1,1);
			circle(30+xc2,30+yp2,20);
			floodfill(32+xc2,32+yp2,1);
			circle(30+xc3,30+yp3,20);
			floodfill(32+xc3,32+yp3,1);
			circle(30+xc4,30+yp4,20);
			floodfill(32+xc4,32+yp4,1);
			circle(30+xc5,30+yp5,20);
			floodfill(32+xc5,32+yp5,1);
			circle(30+xc6,30+yp6,20);
			floodfill(32+xc6,32+yp6,1);
			circle(30+xc8,30+yp8,20);
			floodfill(32+xc8,32+yp8,1);
			delay(delt);
			setcolor(15);
			setfillstyle(1,15);
			circle(30+xc,30+yp,20);
			floodfill(32+xc,32+yp,15);
			circle(30+xc1,30+yp1,20);
			floodfill(32+xc1,32+yp1,15);
			circle(30+xc2,30+yp2,20);
			floodfill(32+xc2,32+yp2,15);
			circle(30+xc3,30+yp3,20);
			floodfill(32+xc3,32+yp3,15);
			circle(30+xc4,30+yp4,20);
			floodfill(32+xc4,32+yp4,15);
			circle(30+xc5,30+yp5,20);
			floodfill(32+xc5,32+yp5,15);
			circle(30+xc6,30+yp6,20);
			floodfill(32+xc6,32+yp6,15);
			circle(30+xc8,30+yp8,20);
			floodfill(32+xc8,32+yp8,15);
			yp+=9;
			yp1+=9;
			yp2+=9;yp3+=9;yp4+=9;yp5+=9;yp6+=9;yp8+=9;
			if(yp>315)
			{
				//setcolor(15);
				//setfillstyle(1,15);
				//circle(30,30+yp,20);
				//floodfill(32,32+yp,15);
				ck++;
				yp=0;
				xc+=73;
				if(xc>400)
					xc=0;
			}
			if(yp1>315)
			{
				ck++;
				yp1=30;
				xc1+=73;
				if(xc1>500)
					xc1=73;
			}
			if(yp2>315)
			{
				ck++;
				yp2=36;
				xc2+=73;
				if(xc2>550)
					xc2=0;
			}
			if(yp3>315)
			{
				ck++;
				yp3=45;
				xc3+=73;
				if(xc3>600)
					xc3=73;
			}
			if(yp4>315)
			{
				ck++;
				yp4=51;
				xc4+=73;
				if(xc4>600)
					xc4=0;
			}
			if(yp5>315)
			{
				ck++;
				yp5=57;
				xc5+=73;
				if(xc5>600)
					xc5=73;
			}
			if(yp6>315)
			{
				ck++;
				yp6=63;
				xc6+=73;
				if(xc6>600)
					xc6=73;
			}
			if(yp8>315)
			{
				ck++;
				yp8=51;
				xc8+=73;
				if(xc8>600)
					xc8=0;
			}
			if(ck==50)
			{
				ck++;
				delt-=25;
			}
			else if(ck==100)
			{
				ck++;
				delt-=25;
			}
			else if(ck==150)
			{
				ck++;
				delt-=25;
			}
			else if(ck==200)
			{
				ck++;
				delt-=25;
			}
			else if(ck==250)
			{
				ck++;
				delt-=25;
			}
			if(ck>=330)
			{
				delay(150);
				closegraph();
				initgraph(&gd,&gm,"");
				callmouse();
				in.x.ax=4;
				in.x.cx=30;
				in.x.dx=30;
				int86(51,&in,&out);
				settextstyle(BOLD_FONT,HORIZ_DIR,3);
				setfillstyle(1,6);
				setcolor(GREEN);
				outtextxy(200,100,"CONGRATS YOU WIN !!!");
				rectangle(230,180,480,230);
				outtextxy(250,175,"PLAY AGAIN");
				rectangle(230,250,480,300);
				outtextxy(325,245,"EXIT");
				floodfill(231,181,GREEN);
				floodfill(231,251,GREEN);
				//cout<<"\n\tFinal Number Of Guesses:- "<<--count;
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
			if(delt<30)
				delt=30;
			/*if((yp>308||yp1>308||yp2>308||yp3>308||yp4>308||yp5>308||yp6>308)&&((xp==0&&(xc==0||xc1==0||xc2==0||xc3==0||xc4==0||xc5==0||xc6==0))||(xp==71&&(xc==73||xc1==73||xc2==73||xc3==73||xc4==73||xc5==73||xc6==73))||(xp==142&&(xc==73*2||xc1==146||xc2==146||xc3==146||xc4==146||xc5==146||xc6==146))||(xp==71*3&&(xc==73*3||xc1==219||xc2==219||xc3==219||xc4==219||xc5==219||xc6==219))||(xp==71*4&&(xc==73*4||xc1==292||xc2==292||xc3==292||xc4==292||xc5==292||xc6==292))||(xp==71*5&&(xc==73*5||xc1==365||xc2==365||xc3==365||xc4==365||xc5==365||xc6==365))||(xp==71*6&&(xc==73*6||xc1==438||xc2==438||xc3==438||xc4==438||xc5==438||xc6==438))||(xp==71*7&&(xc==73*7||xc1==511||xc2==511||xc3==511||xc4==511||xc5==511||xc6==511))||(xp==71*8&&(xc==73*8||xc1==584||xc2==584||xc3==584||xc4==584||xc5==584||xc6==584))))
				exit(0);*/
			if(yp>308&&((xp==0&&xc==0)||(xp==71&&xc==73)||(xp==142&&xc==73*2)||(xp==71*3&&xc==73*3)||(xp==71*4&&xc==73*4)||(xp==71*5&&xc==73*5)||(xp==71*6&&xc==73*6)||(xp==71*7&&xc==73*7)||(xp==71*8&&xc==73*8)))
			{
				pts-=10;
				gotoxy(5,21);
				cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
				if(pts==0)
					exit(0);
			}
			if(yp1>308&&((xp==71&&xc1==73)||(xp==142&&xc1==73*2)||(xp==71*3&&xc1==73*3)||(xp==71*4&&xc1==73*4)||(xp==71*5&&xc1==73*5)||(xp==71*6&&xc1==73*6)||(xp==71*7&&xc1==73*7)||(xp==71*8&&xc1==73*8)))
			{
				pts-=10;
				gotoxy(5,21);
				cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
				if(pts==0)
					exit(0);
			}
			if(yp2>308&&((xp==0&&xc2==0)||(xp==71&&xc2==73)||(xp==142&&xc2==73*2)||(xp==71*3&&xc2==73*3)||(xp==71*4&&xc2==73*4)||(xp==71*5&&xc2==73*5)||(xp==71*6&&xc2==73*6)||(xp==71*7&&xc2==73*7)||(xp==71*8&&xc2==73*8)))
			{
				pts-=10;
				gotoxy(5,21);
				cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
				if(pts==0)
					exit(0);
			}
			if(yp3>308&&((xp==71&&xc3==73)||(xp==142&&xc3==73*2)||(xp==71*3&&xc3==73*3)||(xp==71*4&&xc3==73*4)||(xp==71*5&&xc3==73*5)||(xp==71*6&&xc3==73*6)||(xp==71*7&&xc3==73*7)||(xp==71*8&&xc3==73*8)))
			{
				pts-=10;
				gotoxy(5,21);
				cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
				if(pts==0)
					exit(0);
			}
			if(yp4>308&&((xp==0&&xc4==0)||(xp==71&&xc4==73)||(xp==142&&xc4==73*2)||(xp==71*3&&xc4==73*3)||(xp==71*4&&xc4==73*4)||(xp==71*5&&xc4==73*5)||(xp==71*6&&xc4==73*6)||(xp==71*7&&xc4==73*7)||(xp==71*8&&xc4==73*8)))
			{
				pts-=10;
				gotoxy(5,21);
				cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
				if(pts==0)
					exit(0);
			}
			if(yp5>308&&((xp==71&&xc5==73)||(xp==142&&xc5==73*2)||(xp==71*3&&xc5==73*3)||(xp==71*4&&xc5==73*4)||(xp==71*5&&xc5==73*5)||(xp==71*6&&xc5==73*6)||(xp==71*7&&xc5==73*7)||(xp==71*8&&xc5==73*8)))
			{
				pts-=10;
				gotoxy(5,21);
				cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
				if(pts==0)
					exit(0);
			}
			if(yp6>308&&((xp==0&&xc6==0)||(xp==71&&xc6==73)||(xp==142&&xc6==73*2)||(xp==71*3&&xc6==73*3)||(xp==71*4&&xc6==73*4)||(xp==71*5&&xc6==73*5)||(xp==71*6&&xc6==73*6)||(xp==71*7&&xc6==73*7)||(xp==71*8&&xc6==73*8)))
			{
				pts-=10;
				gotoxy(5,21);
				cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
				if(pts==0)
					exit(0);
			}
			if(yp8>308&&((xp==0&&xc8==0)||(xp==71&&xc8==73)||(xp==142&&xc8==73*2)||(xp==71*3&&xc8==73*3)||(xp==71*4&&xc8==73*4)||(xp==71*5&&xc8==73*5)||(xp==71*6&&xc8==73*6)||(xp==71*7&&xc8==73*7)||(xp==71*8&&xc8==73*8)))
			{
				pts-=10;
				gotoxy(5,21);
				cout<<"\n\n\n\n\n\n\tCar's Stamina    ---------------      "<<pts<<"  % ";
				if(pts==0)
					exit(0);
			}
			/*if(yp2>308&&((xp==71*2&&xc2==73*2)||(xp==142&&xc1==73*2)||(xp==71*3&&xc1==73*3)||(xp==71*4&&xc1==73*4)||(xp==71*5&&xc1==73*5)||(xp==71*6&&xc1==73*6)||(xp==71*7&&xc1==73*7)||(xp==71*8&&xc1==73*8)))
				exit(0);
			if(yp1>308&&((xp==71&&xc1==73)||(xp==142&&xc1==73*2)||(xp==71*3&&xc1==73*3)||(xp==71*4&&xc1==73*4)||(xp==71*5&&xc1==73*5)||(xp==71*6&&xc1==73*6)||(xp==71*7&&xc1==73*7)||(xp==71*8&&xc1==73*8)))
				exit(0);
			if(yp1>308&&((xp==71&&xc1==73)||(xp==142&&xc1==73*2)||(xp==71*3&&xc1==73*3)||(xp==71*4&&xc1==73*4)||(xp==71*5&&xc1==73*5)||(xp==71*6&&xc1==73*6)||(xp==71*7&&xc1==73*7)||(xp==71*8&&xc1==73*8)))
				exit(0);
			if(yp1>308&&((xp==71&&xc1==73)||(xp==142&&xc1==73*2)||(xp==71*3&&xc1==73*3)||(xp==71*4&&xc1==73*4)||(xp==71*5&&xc1==73*5)||(xp==71*6&&xc1==73*6)||(xp==71*7&&xc1==73*7)||(xp==71*8&&xc1==73*8)))
				exit(0);
			if(yp1>308&&((xp==71&&xc1==73)||(xp==142&&xc1==73*2)||(xp==71*3&&xc1==73*3)||(xp==71*4&&xc1==73*4)||(xp==71*5&&xc1==73*5)||(xp==71*6&&xc1==73*6)||(xp==71*7&&xc1==73*7)||(xp==71*8&&xc1==73*8)))
				exit(0);*/
			//else if(yp>308&&xp==71&&xc==80)
			//	exit(0);
		}
		in1=getch();
		if(in1==27)
			exit(0);
	}
	//getch();
	//closegraph();
}