			 /*PUZZLE Made By Roshan*/
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define u 72
#define d 80
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
void mouseposi (int *xpos,int *ypos,int *click)
{
	in.x.ax=3;
	int86(51,&in,&out);
	*click=out.x.bx;
	*xpos=out.x.cx;
	*ypos=out.x.dx;
}
void check(int a[])
{
	int i;
	char p;
	for(i=0;i<8;i++)
	{
		if(a[i]!=i+1)
			break;
	}
	if(i==8)
	{
		delay(500);
		cleardevice();
		setbkcolor(15);
		outtextxy(155,100,"CONGRATS !!!!");
		outtextxy(25,200,"YOU ARE THE WINNER OF PUZZLE");
		outtextxy(45,300,"PRESS A TO PLAY AGAIN");
		outtextxy(45,400,"OR ANY KEY TO EXIT");
		p=getch();
		if(p=='a'||p=='A')
			main();
		else
			exit(0);
	}
}
void swap(int a[],int k,int j)
{
	int t;
	t=a[k];
	a[k]=a[j];
	a[j]=t;
}
void print(int i,char c1[],char c2[],char c3[],char c4[],char c5[],char c6[],char c7[],char c8[],char c9[])
{
	setfillstyle(1,15);
	if(i==1)
	{
		floodfill(60,55,RED);
		outtextxy(60,45,c1); //1st
	}
	else if(i==2)
	{
		floodfill(100,55,RED);
		outtextxy(100,45,c2); //2nd
	}
	else if(i==3)
	{
		floodfill(140,55,RED);
		outtextxy(140,45,c3); //3rd
	}
	else if(i==4)
	{
		floodfill(60,95,RED);
		outtextxy(60,85,c4);//4th
	}
	else if(i==5)
	{
		floodfill(100,95,RED);
		outtextxy(100,85,c5); //5th
	}
	else if(i==6)
	{
		floodfill(140,95,RED);
		outtextxy(140,85,c6); //6th
	}
	else if(i==7)
	{
		floodfill(60,135,RED);
		outtextxy(60,125,c7);
	}
	else if(i==8)
	{
		floodfill(100,135,RED);
		outtextxy(100,125,c8); //8th
	}
	else if(i==9)
	{
		floodfill(140,135,RED);
		outtextxy(140,125,c9); //9th
	}
}
void box(int x,int y)
{
	setcolor(RED);
	rectangle(50+x,50+y,90+x,90+y);
	setfillstyle(1,1);
	floodfill(52+x,52+y,RED);
	setcolor(6);
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
	int gd=DETECT,gm,x,y,cl,a[9]={2,5,3,6,7,8,4,1,0},x1=80,y1=80,k=9,n=1,n1,t;
	char in,s[10]={'\0'};
	char c1[2]="2",c2[2]="5",c3[2]="3",c4[2]="6",c5[2]="7",c6[2]="8",c7[2]="4",c8[2]="1",c9[2]="\0";
	initgraph(&gd,&gm,"");
	y:cleardevice();
	callmouse();
	//in.x.ax=4;
	//in.x.cx=0;
	//in.x.dx=0;
	//int86(51,&in,&out);
	setcolor(GREEN);
	menu();
	while(1)
	{
		mouseposi(&x,&y,&cl);
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
			a[0]=5;a[1]=2;a[2]=3;a[3]=6;a[4]=4;a[5]=7;a[6]=1;a[7]=8;
			c1[0]='5';c2[0]='2';c3[0]='3';c4[0]='6';c5[0]='4';c6[0]='7';c7[0]='1';c8[0]='8';
			goto x;
		}
		else if(x>=230&&x<=380&&y>=320&&y<=370&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			a[0]=8;a[1]=7;a[2]=3;a[3]=2;a[4]=1;a[5]=6;a[6]=4;a[7]=5;
			c1[0]='8';c2[0]='7';c3[0]='3';c4[0]='2';c5[0]='1';c6[0]='6';c7[0]='4';c8[0]='5';
			goto x;
		}
		else if(x>=230&&x<=380&&y>=390&&y<=440&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			cleardevice();
			gotoxy(5,5);
			printf("You Have 9 Boxes\n\t8 Boxes Contains The Random Value From 1 To 8\n\tOne Box Is Blank\n\tYou Have To Arrange The Values From 1 To 9 In Increasing Order\n\ti.e, 1st Box Will Contain 1,2nd Box Will Contain 2 And So On\n\tThe Last Box Will Contain The Value NULL\n\n\tYou Have As Many Number Of Chances\n\n\tAnd There Is No Time Limit\n\n\tEnjoy The Game\n\n\tBEST OF LUCK\n\n\n\n\t\tPress Any Key To EXIT");
			getch();
			goto y;
		}
	}
	x:
	closegraph();
	initgraph(&gd,&gm,"");
	settextstyle(BOLD_FONT,HORIZ_DIR,4);
	setcolor(RED);
	outtextxy(180,-20,"PUZZLE");
	rectangle(50,50,170,170);
	floodfill(55,55,RED);
	line(90,50,90,170);
	line(130,50,130,170);
	line(50,90,170,90);
	line(50,130,170,130);
	settextstyle(BOLD_FONT,HORIZ_DIR,2);
	setcolor(6);
	outtextxy(60,45,c1); //1st
	outtextxy(100,45,c2);     //2nd
	outtextxy(140,45,c3);          //3rd
	outtextxy(60,85,c4);//4th
	outtextxy(100,85,c5); //5th
	outtextxy(140,85,c6); //6th
	outtextxy(60,125,c7); //7th
	outtextxy(100,125,c8); //8th
	outtextxy(20,300,"PRESS ESC TO EXIT AT ANY TIME");
	box(x1,y1);
	in=getch();
	sound(500);
	delay(150);
	nosound();
	if(in==27)
		exit(0);
	else
	{
		while(1)
		{
			n1=n;
			t=0;
			setcolor(BLACK);
			outtextxy(430,200,s);
			while(n1>0)
			{
				s[t]=n1%10+48;
				t++;
				n1=n1/10;
			}
			n++;
			strrev(s);
			setcolor(6);
			outtextxy(50,200,"Total Number Of Steps");
			outtextxy(430,200,s);
			if((in=getch())==l)
			{
				x1-=40;
				if(x1<0)
				{
					x1=0;
					goto x1;
				}
				box(x1,y1);
				k--;
				if(k==8)
				{
					c9[0]=c8[0];
					c8[0]='\0';
				}
				else if(k==7)
				{
					c8[0]=c7[0];
					c7[0]='\0';
				}
				else if(k==5)
				{
					c6[0]=c5[0];
					c5[0]='\0';
				}
				else if(k==4)
				{
					c5[0]=c4[0];
					c4[0]='\0';
				}
				else if(k==2)
				{
					c3[0]=c2[0];
					c2[0]='\0';
				}
				else if(k==1)
				{
					c2[0]=c1[0];
					c1[0]='\0';
				}
				swap(a,k,k-1);
				print(k+1,c1,c2,c3,c4,c5,c6,c7,c8,c9);
				//check(a);
			}
			else if(in==r)
			{
				x1+=40;
				if(x1>80)
				{
					x1=80;
					goto x1;
				}
				box(x1,y1);
				k++;
				if(k==8)
				{
					c7[0]=c8[0];
					c8[0]='\0';
				}
				else if(k==9)
				{
					c8[0]=c9[0];
					c9[0]='\0';
				}
				else if(k==5)
				{
					c4[0]=c5[0];
					c5[0]='\0';
				}
				else if(k==6)
				{
					c5[0]=c6[0];
					c6[0]='\0';
				}
				else if(k==2)
				{
					c1[0]=c2[0];
					c2[0]='\0';
				}
				else if(k==3)
				{
					c2[0]=c3[0];
					c3[0]='\0';
				}
				swap(a,k-1,k-2);
				print(k-1,c1,c2,c3,c4,c5,c6,c7,c8,c9);
				//check(a);
			}
			else if(in==u)
			{
				y1-=40;
				if(y1<0)
				{
					y1=0;
					goto x1;
				}
				box(x1,y1);
				k-=3;
				if(k==1)
				{
					c4[0]=c1[0];
					c1[0]='\0';
				}
				else if(k==2)
				{
					c5[0]=c2[0];
					c2[0]='\0';
				}
				else if(k==3)
				{
					c6[0]=c3[0];
					c3[0]='\0';
				}
				else if(k==4)
				{
					c7[0]=c4[0];
					c4[0]='\0';
				}
				else if(k==5)
				{
					c8[0]=c5[0];
					c5[0]='\0';
				}
				else if(k==6)
				{
					c9[0]=c6[0];
					c6[0]='\0';
				}
				swap(a,k-1,k+2);
				print(k+3,c1,c2,c3,c4,c5,c6,c7,c8,c9);
				//check(a);
			}
			else if(in==d)
			{
				y1+=40;
				if(y1>80)
				{
					y1=80;
					goto x1;
				}
				box(x1,y1);
				k+=3;
				if(k==7)
				{
					c4[0]=c7[0];
					c7[0]='\0';
				}
				else if(k==8)
				{
					c5[0]=c8[0];
					c8[0]='\0';
				}
				else if(k==9)
				{
					c6[0]=c9[0];
					c9[0]='\0';
				}
				else if(k==4)
				{
					c1[0]=c4[0];
					c4[0]='\0';
				}
				else if(k==5)
				{
					c2[0]=c5[0];
					c5[0]='\0';
				}
				else if(k==6)
				{
					c3[0]=c6[0];
					c6[0]='\0';
				}
				swap(a,k-1,k-4);
				print(k-3,c1,c2,c3,c4,c5,c6,c7,c8,c9);
				//check(a);
			}
			if(a[8]==0)
				check(a);
			x1:in=getch();
			sound(500);
			delay(150);
			nosound();
			if(in==27)
				exit(0);
			else if(in>=1&&in<=126)
				in=getch();
		}
	}
	getch();
	closegraph();
}