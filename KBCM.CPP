#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define O outtextxy
#define a 60,220
#define b 370,220
#define c 60,295
#define d 370,295
union REGS in,out;
int xp=0,yp=0,cl,chtkn=0,nolp;
int l1=1,l2=1,l3=1;
int t1,t2,t3,t4;
void main();
void call1(int);
void call3(int);
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
void audience_vote(char a1[8],char a2[8],char a3[8],char a4[8])
{
	setcolor(RED);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
	outtextxy(30,170,"A.   %");
	outtextxy(60,170,a1);
	outtextxy(495,170,"B.   %");
	outtextxy(525,170,a2);
	outtextxy(30,240,"C.   %");
	outtextxy(60,240,a3);
	outtextxy(495,240,"D.   %");
	outtextxy(525,240,a4);
}
void f1()
{
	mousehide();
	setfillstyle(SOLID_FILL,8);
	fillellipse(150,225,120,25);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(150,225,120,25);
	delay(400);
	callmouse();
}
void f2()
{
	mousehide();
	setfillstyle(SOLID_FILL,8);
	fillellipse(450,225,120,25);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(450,225,120,25);
	delay(400);
	callmouse();
}
void f3()
{
	mousehide();
	setfillstyle(SOLID_FILL,8);
	fillellipse(150,300,120,25);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(150,300,120,25);
	delay(400);
	callmouse();
}
void f4()
{
	mousehide();
	setfillstyle(SOLID_FILL,8);
	fillellipse(450,300,120,25);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(450,300,120,25);
	delay(400);
	callmouse();
}
void lf1()
{
	mousehide();
	setfillstyle(SOLID_FILL,8);
	fillellipse(70,385,50,20);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(70,385,50,20);
	delay(400);
	callmouse();
}
void lf2()
{
	mousehide();
	setfillstyle(SOLID_FILL,8);
	fillellipse(200,385,50,20);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(200,385,50,20);
	delay(400);
	callmouse();
}
void lf3()
{
	mousehide();
	setfillstyle(SOLID_FILL,8);
	fillellipse(330,385,50,20);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(330,385,50,20);
	delay(400);
	callmouse();
}
void A()
{
	setcolor(1);
	line(50,211,250,239);
	line(50,239,250,211);
}
void B()
{
	setcolor(1);
	line(350,211,550,239);
	line(350,239,550,211);
}
void C()
{
	setcolor(1);
	line(50,286,250,314);
	line(50,314,250,286);
}
void D()
{
	setcolor(1);
	line(350,286,550,314);
	line(350,314,550,286);
}
void l_1()
{
	setcolor(1);
	line(40,370,100,400);
	line(40,400,100,370);
}
void l_2()
{
	setcolor(1);
	line(165,370,230,400);
	line(165,400,230,370);
}
void l_3()
{
	setcolor(1);
	line(295,370,360,400);
	line(295,400,360,370);
}
void page()
{
	mousehide();
	cleardevice();
	setbkcolor(9);
	setcolor(RED);
	setfillstyle(1,RED);
	settextstyle(BOLD_FONT,HORIZ_DIR,2);
	rectangle(0,0,getmaxx(),getmaxy());	       //Border Line
	rectangle(1,1,getmaxx()-1,getmaxy()-1);               //Border Line
	rectangle(getmaxx()-20,0,getmaxx(),20);
	floodfill(getmaxx()-5,5,RED);
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);
	line(getmaxx(),0,getmaxx()-20,20);
	setcolor(RED);
}
void st(int n)
{
	setbkcolor(13);
	setcolor(BLUE);
	setfillstyle(1,9);
	fillellipse(300,100,240,50);
	line(300,150,150,200);
	line(300,150,450,200);
	fillellipse(150,225,120,25);
	fillellipse(450,225,120,25);
	fillellipse(150,300,120,25);
	fillellipse(450,300,120,25);
	line(270,225,285,243.25);
	line(315,281.25,330,300);
	line(330,225,315,243.25);
	line(285,281.25,270,300);
	circle(300,262.5,25);
	setcolor(BLUE);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(288,237,"R");
	fillellipse(70,385,50,20);
	fillellipse(200,385,50,20);
	fillellipse(330,385,50,20);
	line(0,385,20,385);
	line(120,385,150,385);
	line(250,385,280,385);
	line(380,385,395,385);
	setcolor(15);
	rectangle(0,0,getmaxx(),getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);
	setcolor(RED);
	settextstyle(DEFAULT_FONT,0,2);
	outtextxy(10,340,"TOTAL PRIZE  RS");        //Total prizes wins
	rectangle(getmaxx()-20,0,getmaxx(),20);     //For cross sign
	setfillstyle(1,RED);
	floodfill(getmaxx()-15,3,RED);
	settextstyle(DEFAULT_FONT,0,1);
	outtextxy(27,382,"A. 50-50");
	outtextxy(155,382,"B. Audience");
	outtextxy(178,392,"Vote");
	outtextxy(285,382,"C. Double");
	outtextxy(308,392,"Dip");
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
	outtextxy(130,1,"WELCOME TO KBC");
	setcolor(15);
	line(getmaxx()-20,0,getmaxx(),20);     //cross sign
	line(getmaxx(),0,getmaxx()-20,20);      //cross sign
	setcolor(4);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
	outtextxy(20,440,"MADE BY :- ROSHAN KUMAR");
	//rectangle(0,0,getmaxx(),getmaxy());
	//settextstyle(SMALL_FONT,HORIZ_DIR,9);
	//secolor(17);
	//outtextxy(20,360,"Press L For LIFELINE");
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	setcolor(17);
	rectangle(395,345,638,470);
	line(510,345,510,470);
	outtextxy(400,350,"Q.1 Rs 1000");
	outtextxy(400,370,"Q.2 Rs 5000");
	outtextxy(400,390,"Q.3 Rs 20,000");
	outtextxy(400,410,"Q.4 Rs 50,000");
	outtextxy(400,430,"Q.5 Rs 1 lakh");
	outtextxy(520,350,"Q.6 Rs 5 lakhs");
	outtextxy(520,370,"Q.7 Rs 10 lakhs");
	outtextxy(520,390,"Q.8 Rs 20 lakhs");
	outtextxy(520,410,"Q.9 Rs 50 lakhs");
	outtextxy(520,430,"Q.10 Rs 1 crore");
	setcolor(RED);
	switch(n)
	{
		case 1:outtextxy(400,350,"Q.1 Rs 1000");break;
		case 2:outtextxy(400,370,"Q.2 Rs 5000");break;
		case 3:outtextxy(400,390,"Q.3 Rs 20,000");break;
		case 4:outtextxy(400,410,"Q.4 Rs 50,000");break;
		case 5:outtextxy(400,430,"Q.5 Rs 1 lakh");break;
		case 6:outtextxy(520,350,"Q.6 Rs 5 lakhs");break;
		case 7:outtextxy(520,370,"Q.7 Rs 10 lakhs");break;
		case 8:outtextxy(520,390,"Q.8 Rs 20 lakhs");break;
		case 9:outtextxy(520,410,"Q.9 Rs 50 lakhs");break;
		case 10:outtextxy(520,430,"Q.10 Rs 1 crore");
	}
	if(l1==0)
		l_1();
	if(l2==0)
		l_2();
	if(l3==0)
		l_3();
}
void optn(int a1,int b1,int c1,int d1,int la,int lb,int lc,int cans)
{
	int tva,tvb,tvc,tvd;
	char ta[3],tb[3],tc[3],td[3];
	ta[2]='\0';tb[2]='\0';tc[2]='\0';td[2]='\0';
	mouseposi(xp,yp,cl);
	if(a1==1)
	{
		if(((pow(25*xp-25*150,2)+pow(120*yp-120*225,2)-pow(120*25,2))<0)&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			f1();
			chtkn=1;
			t1=0;
			if(nolp==1)
				nolp=2;
			else
				nolp=1;
			//exit(0);
		}
	}
	if(b1==1)
	{
		if(((pow(25*xp-25*450,2)+pow(120*yp-120*225,2)-pow(120*25,2))<0)&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			f2();
			chtkn=2;
			t2=0;
			if(nolp==1)
				nolp=2;
			else
				nolp=1;
			//exit(0);
		}
	}
	if(c1==1)
	{
		if(((pow(25*xp-25*150,2)+pow(120*yp-120*300,2)-pow(120*25,2))<0)&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			f3();
			chtkn=3;
			t3=0;
			if(nolp==1)
				nolp=2;
			else
				nolp=1;
			//exit(0);
		}
	}
	if(d1==1)
	{
		if(((pow(25*xp-25*450,2)+pow(120*yp-120*300,2)-pow(120*25,2))<0)&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			f4();
			chtkn=4;
			t4=0;
			if(nolp==1)
				nolp=2;
			else
				nolp=1;
			//exit(0);
		}
	}
	if(la==1)
	{
		nolp=0;
		if(((pow(20*xp-20*70,2)+pow(50*yp-50*385,2)-pow(50*20,2))<0)&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			lf1();
			//chtkn=5;
			l1=0;
			call1(cans);
			//exit(0);
		}
	}
	if(lb==1)
	{
		if(((pow(20*xp-20*200,2)+pow(50*yp-50*385,2)-pow(20*50,2))<0)&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			lf2();
			//chtkn=6;
			l2=0;
			randomize();
			tva=random(20);
			tva+=13;
			tvb=random(20);
			tvb+=13;
			tvc=random(20);
			tvc+=13;
			tvd=100-tva-tvb-tvc;
			if(tvd>=35)
			{
				tva+=4;
				tvb+=5;
				tvc+=3;
				tvd-=12;
			}
			ta[1]=tva%10+48;
			ta[0]=tva/10+48;
			tb[1]=tvb%10+48;
			tb[0]=tvb/10+48;
			tc[1]=tvc%10+48;
			tc[0]=tvc/10+48;
			td[1]=tvd%10+48;
			td[0]=tvd/10+48;
			audience_vote(ta,tb,tc,td);
			//exit(0);
		}
	}
	if(lc==1)
	{
		nolp=0;
		if(((pow(20*xp-20*330,2)+pow(50*yp-50*385,2)-pow(20*50,2))<0)&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			lf3();
			//chtkn=7;
			l3=0;
			call3(cans);
			//exit(0);
		}
	}
	if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
	{
		sound(400);
		delay(250);
		nosound();
		main();
	}
}
void call1(int cans)
{
			if(cans==1)
			{
				B();C();
				while(nolp==0)
				{
					optn(1,0,0,1,0,0,0,cans);
				}
			}
			else if(cans==2)
			{
				A();D();
				while(nolp==0)
				{
					optn(0,1,1,0,0,0,0,cans);
				}
			}
			else if(cans==3)
			{
				A();D();
				while(nolp==0)
				{
					optn(0,1,1,0,0,0,0,cans);
				}
			}
			else if(cans==4)
			{
				B();C();
				while(nolp==0)
				{
					optn(1,0,0,1,0,0,0,cans);
				}
			}
}
void call3(int cans)
{
	t1=1;t2=1;t3=1;t4=1;
			while(nolp<=1)
			{
				optn(t1,t2,t3,t4,0,0,0,cans);
				if(cans==chtkn)
					goto x;
			}
			x:nolp=0;
}
int quesbank(int i)
{
	int rn;
	setcolor(4);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	if(i==1)
	{
		rn=random(45);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.1 What is the Parliament name of America ?");
			outtextxy(60,220,"A. Congress");
			outtextxy(370,220,"B. Diat");
			outtextxy(60,295,"C. Yuan");
			outtextxy(370,295,"D. Peoples Assembly");
			return 1;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.1 Who wrote the book 'The Discovery of India ?");
			outtextxy(60,220,"A. Premchand");
			outtextxy(370,220,"B. Mahatama Gandhi");
			outtextxy(60,295,"C. Pt. Jwahar Lal Nehru");
			outtextxy(370,295,"D. Ravindra Nath Tagore");
			return 3;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.1 What is the capital of Sri lanka ?");
			outtextxy(60,220,"A. Dhaka");
			outtextxy(370,220,"B. Colombo");
			outtextxy(60,295,"C. Ankara");
			outtextxy(370,295,"D. Baghdad");
			return 2;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.1 Who is the first President of India ?");
			outtextxy(60,220,"A. Dr. Rajendra Prasad");
			outtextxy(370,220,"B. Pt. Jawahar Lal Nehru");
			outtextxy(60,295,"C. Indira Gandhi");
			outtextxy(370,295,"D. Jakir Hussain");
			return 1;
		}
		else if(rn==4)
		{
			outtextxy(70,90,"Q.1 How many ring does Olympic logo have ?");
			outtextxy(60,220,"A. 2");
			outtextxy(370,220,"B. 3");
			outtextxy(60,295,"C. 4");
			outtextxy(370,295,"D. 5");
			return 4;
		}
		else if(rn==5)
		{
			outtextxy(70,90,"Q.1 Which country is called as BLUE Elephant ?");
			outtextxy(60,220,"A. America");
			outtextxy(370,220,"B. Thailand");
			outtextxy(60,295,"C. England");
			outtextxy(370,295,"D. Russia");
			return 2;
		}
		else if(rn==6)
		{
			outtextxy(70,90,"Q.1 What was the old name of Chennai ?");
			outtextxy(60,220,"A. Patliputra");
			outtextxy(370,220,"B. Madras");
			outtextxy(60,295,"C. Bihar");
			outtextxy(370,295,"D. Jharkhand");
			return 2;
		}
		else if(rn==7)
		{
			outtextxy(70,90,"Q.1 Who was not a Railway Minister ?");
			outtextxy(60,220,"A. Mamta Banerjee");
			outtextxy(370,220,"B. Lal Bahadur Shastri");
			outtextxy(60,295,"C. Geeta Mukherjee");
			outtextxy(370,295,"D. George Frandis");
			return 3;
		}
		else if(rn==8)
		{
			outtextxy(70,90,"Q.1 What is the Currency of Japan ?");
			outtextxy(60,220,"A. Dollar");
			outtextxy(370,220,"B. Zen");
			outtextxy(60,295,"C. Jen");
			outtextxy(370,295,"D. Yen");
			return 4;
		}
		else if(rn==9)
		{
			outtextxy(70,90,"Q.1 Who was the mother of Rama in Ramayana ?");
			outtextxy(60,220,"A. Kousalya");
			outtextxy(370,220,"B. Kaikei");
			outtextxy(60,295,"C. Sumithra");
			outtextxy(370,295,"D. Manthara");
			return 1;
		}
		else if(rn==10)
		{
			outtextxy(70,90,"Q.1 Which is the Indian National Flower ?");
			outtextxy(60,220,"A. Sunflower");
			outtextxy(370,220,"B. Rose");
			outtextxy(60,295,"C. Tiger lilly");
			outtextxy(370,295,"D. Lotus");
			return 4;
		}
		else if(rn==11)
		{
			outtextxy(70,90,"Q.1 Which of these is not a Ocean ?");
			outtextxy(60,220,"A. Arabian");
			outtextxy(370,220,"B. Indian");
			outtextxy(60,295,"C. Pacific");
			outtextxy(370,295,"D. Atlantic");
			return 1;
		}
		else if(rn==12)
		{
			outtextxy(70,90,"Q.1 Who was the first women indian rulers ?");
			outtextxy(60,220,"A. Razia Sultan");
			outtextxy(370,220,"B. Laxmibai");
			outtextxy(60,295,"C. Victoria");
			outtextxy(370,295,"D. Indira Gandhi");
			return 1;
		}
		else if(rn==13)
		{
			outtextxy(70,90,"Q.1 Which is the first Wholly Synthetic fibre ?");
			outtextxy(60,220,"A. Rayon");
			outtextxy(370,220,"B. Wool");
			outtextxy(60,295,"C. Nylon");
			outtextxy(370,295,"D. Teflon");
			return 3;
		}
		else if(rn==14)
		{
			outtextxy(70,90,"Q.1 Who built Taj Mahal ?");
			outtextxy(60,220,"A. Babar");
			outtextxy(370,220,"B. Akbar");
			outtextxy(60,295,"C. Himayun");
			outtextxy(370,295,"D. Shah Jahan");
			return 4;
		}
		else if(rn==15)
		{
			outtextxy(70,90,"Q.1 Which is the largest continent in the World ?");
			outtextxy(60,220,"A. Africa");
			outtextxy(370,220,"B. Asia");
			outtextxy(60,295,"C. Europe");
			outtextxy(370,295,"D. Antartica");
			return 2;
		}
		else if(rn==16)
		{
			outtextxy(70,90,"Q.1 Who was the first women Prime Minister of India ?");
			outtextxy(60,220,"A. Indira Gandhi");
			outtextxy(370,220,"B. Suchita Kriplani");
			outtextxy(60,295,"C. Pratibha Patil");
			outtextxy(370,295,"D. Kalpana Chawla");
			return 1;
		}
		else if(rn==17)
		{
			O(70,90,"Q.1 Which is responsible for converting milk into curd ?");
			O(60,220,"A. Virus");
			O(370,220,"B. Yeast");
			O(60,295,"C. Fungi");
			O(370,295,"D. Bacteria");
			return 4;
		}
		else if(rn==18)
		{
			O(70,90,"Q.1 The planet closest to the sun is :-");
			O(60,220,"A. Venus");
			O(370,220,"B. Mars");
			O(60,295,"C. Mercury");
			O(370,295,"D. Earth");
			return 3;
		}
		else if(rn==19)
		{
			O(70,90,"Q.1 Speed of sound is maximum in :-");
			O(60,220,"A. Liquid");
			O(370,220,"B. Solid");
			O(60,295,"C. Gas");
			O(370,295,"D. Same in all");
			return 2;
		}
		else if(rn==20)
		{
			O(70,90,"Q.1 Which country is the world's largest consumer of petrolium ?");
			O(60,220,"A. United States");
			O(370,220,"B. India");
			O(60,295,"C. Russia");
			O(370,295,"D. China");
			return 1;
		}
		else if(rn==21)
		{
			O(70,90,"Q.1 Which of these is not a card game ?");
			O(60,220,"A. Rummy");
			O(370,220,"B. Bridge");
			O(60,295,"C. Solitaire");
			O(370,295,"D. Ektara");
			return 4;
		}
		else if(rn==22)
		{
			O(70,90,"Q.1 Which of these sports is also the name of an insect ?");
			O(60,220,"A. Polo");
			O(370,220,"B. Cricket");
			O(60,295,"C. Squash");
			O(370,295,"D. Football");
			return 2;
		}
		else if(rn==23)
		{
			O(70,90,"Q.1 Samsung is headquatered at :-");
			O(60,220,"A. South Korea");
			O(370,220,"B. Japan");
			O(60,295,"C. United States");
			O(370,295,"D. Taiwan");
			return 1;
		}
		else if(rn==24)
		{
			O(70,90,"Q.1 The sky appears blue due to :-");
			O(60,220,"A. Refraction of light");
			O(370,220,"B. Reflection of light");
			O(60,295,"C. Scattering of light");
			O(370,295,"D. Diffraction of light");
			return 3;
		}
		else if(rn==25)
		{
			O(70,90,"Q.1 Decibel unit is used to measure :-");
			O(60,220,"A. Sound");
			O(370,220,"B. Light");
			O(60,295,"C. Earthquake");
			O(370,295,"D. None of these");
			return 1;
		}
		else if(rn==26)
		{
			O(70,90,"Q.1 How many minutes are there in a day ?");
			O(60,220,"A. 1480");
			O(370,220,"B. 1416");
			O(60,295,"C. 1420");
			O(370,295,"D. 1440");
			return 4;
		}
		else if(rn==27)
		{
			O(70,90,"Q.1 Which of the following is type of LAN ?");
			O(a,"A. Ethernet");
			O(b,"B. Token Ring");
			O(c,"C. FDDI");
			O(d,"D. All of these");
			return 1;
		}
		else if(rn==28)
		{
			O(70,90,"Q.1 Which one of the following is not a state ?");
			O(a,"A. France");
			O(b,"B. Australia");
			O(c,"C. New York");
			O(d,"D. Gambia");
			return 3;
		}
		else if(rn==29)
		{
			O(70,90,"Q.1 Virtual memory is :-");
			O(a,"A. A form of ROM");
			O(b,"B. A form of RAM");
			O(c,"C. Both A and B");
			O(d,"D. None of these");
			return 2;
		}
		else if(rn==30)
		{
			O(70,90,"Q.1 The absorption law in Boolean Algebra say that :-");
			O(a,"A. X + X.Y = X");
			O(b,"B. X + X = X");
			O(c,"C. X.X = X");
			O(d,"D. None of these");
			return 1;
		}
		else if(rn==31)
		{
			O(70,90,"Q.1 Which return type is used in constructor ?");
			O(a,"A. int");
			O(b,"B. long int");
			O(c,"C. short int");
			O(d,"D. None of these");
			return 4;
		}
		else if(rn==32)
		{
			O(70,90,"Q.1 Who is the Brand Ambassdor of Boost ?");
			O(a,"A. Sehwag");
			O(b,"B. Sachin");
			O(c,"C. Virat Kohli");
			O(d,"D. Dhoni");
			return 3;
		}
		else if(rn==33)
		{
			O(70,90,"Q.1 Who baged the highest bid in IPL 2014 ?");
			O(a,"A. M.S Dhoni");
			O(b,"B. Yuvraj Singh");
			O(c,"C. Sehwag");
			O(d,"D. Virat Kohli");
			return 2;
		}
		else if(rn==34)
		{
			O(70,90,"Q.1 How many states are there in India ?");
			O(a,"A. 24");
			O(b,"B. 28");
			O(c,"C. 29");
			O(d,"D. 27");
			return 3;
		}
		else if(rn==35)
		{
			O(70,90,"Q.1 What is the default value of static variable in C ?");
			O(a,"A. 0");
			O(b,"B. Garbage");
			O(c,"C. Can't be specified");
			O(d,"D. None of these");
			return 1;
		}
		else if(rn==36)
		{
			O(70,90,"Q.1 Which of these consists citric acid ?");
			O(a,"A. Banana");
			O(b,"B. Jalebi");
			O(c,"C. Apple");
			O(d,"D. Lemon");
			return 4;
		}
		else if(rn==37)
		{
			O(70,90,"Q.1 Who was first woman to climb mount everest ?");
			O(a,"A. Kalpana Chawla");
			O(b,"B. Bechandri Pal");
			O(c,"C. Tang Suo");
			O(d,"D. Serena Williams");
			return 2;
		}
		else if(rn==38)
		{
			O(70,90,"Q.1 Which actor has got maximum number of filmfare awards ?");
			O(a,"A. A.Bachchan");
			O(b,"B. Salman Khan");
			O(c,"C. S.R.Khan");
			O(d,"D. Hritik Roshan");
			return 3;
		}
		else if(rn==39)
		{
			O(70,90,"Q.1 Which was first branch of GIET,GUNUPUR ?");
			O(a,"A. CSE");
			O(b,"B. MECH");
			O(c,"C. CHEM");
			O(d,"D. CIVIL");
			return 1;
		}
		else if(rn==40)
		{
			O(70,90,"Q.1 White light can be spread in how many colours ?");
			O(a,"A. 3");
			O(b,"B. 5");
			O(c,"C. 4");
			O(d,"D. 7");
			return 4;
		}
		else if(rn==41)
		{
			O(70,90,"Q.1 Who was founder of Indian National Army ?");
			O(a,"A. Sardar V Patel");
			O(b,"B. S.C.Bose");
			O(c,"C. J.Nehru");
			O(d,"D. C.Rajagopalchari");
			return 2;
		}
		else if(rn==42)
		{
			O(70,90,"Q.1 Who was winner of first IPL ?");
			O(a,"A. RR");
			O(b,"B. CSK");
			O(c,"C. MI");
			O(d,"D. PW");
			return 1;
		}
		else if(rn==43)
		{
			O(70,90,"Q.1 What is full form of ATM ?");
			O(a,"A. Any Time Machine");
			O(b,"B. Automated Transfer machine");
			O(c,"C. Automated Teller Machine");
			O(d,"D. Anti Trimony Machine");
			return 3;
		}
		else if(rn==44)
		{
			O(70,90,"Q.1 Which movie crossed the income level of 500crores ?");
			O(a,"A. Dhoom3");
			O(b,"B. Krish3");
			O(c,"C. Chennai Express");
			O(d,"D. Jai Ho");
			return 1;
		}
	}
	else if(i==2)
	{
		rn=random(31);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.2 Which sport is the National sport of Japan ?");
			outtextxy(60,220,"A. Hockey");
			outtextxy(370,220,"B. Cricket");
			outtextxy(60,295,"C. Football");
			outtextxy(370,295,"D. Judo");
			return 4;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.2 Who got first Bharat Ratna award ?");
			outtextxy(60,220,"A. Sarvpalli Radha Krishna");
			outtextxy(370,220,"B. Subhash Ch. Bose");
			outtextxy(60,295,"C. Jakir Hussain");
			outtextxy(370,295,"D. Indira Gandhi");
			return 1;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.2 What is the smallest unit of classification ?");
			outtextxy(60,220,"A. Kingdoms");
			outtextxy(370,220,"B. Phylum");
			outtextxy(60,295,"C. Species");
			outtextxy(370,295,"D. Sironus");
			return 3;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.2 Who discovered Centrosome ?");
			outtextxy(60,220,"A. Baron");
			outtextxy(370,220,"B. Bobery");
			outtextxy(60,295,"C. Spencer");
			outtextxy(370,295,"D. Darwin");
			return 2;
		}
		else if(rn==4)
		{
			outtextxy(70,90,"Q.2 What is the chemical formula of ethyl alcohol ?");
			outtextxy(60,220,"A. CH3CH2OH");
			outtextxy(370,220,"B. H2O3");
			outtextxy(60,295,"C. NaCl");
			outtextxy(370,295,"D. CH6H2O14");
			return 1;
		}
		else if(rn==5)
		{
			outtextxy(70,90,"Q.2 Who was the first women king of britishers ?");
			outtextxy(60,220,"A. Victoria");
			outtextxy(370,220,"B. Zen");
			outtextxy(60,295,"C. Kalpana");
			outtextxy(370,295,"D. Suchita");
			return 2;
		}
		else if(rn==6)
		{
			outtextxy(70,90,"Q.2 Which city is known as pop city ?");
			outtextxy(60,220,"A. Rome");
			outtextxy(370,220,"B. Paris");
			outtextxy(60,295,"C. Newyork");
			outtextxy(370,295,"D. Cuba");
			return 1;
		}
		else if(rn==7)
		{
			outtextxy(70,90,"Q.2 Who first discovered Gravitational force ?");
			outtextxy(60,220,"A. Archimedes");
			outtextxy(370,220,"B. Alexander");
			outtextxy(60,295,"C. Newton");
			outtextxy(370,295,"D. Herbet spencer");
			return 3;
		}
		else if(rn==8)
		{
			outtextxy(70,90,"Q.2 Who wrote Prem vatika ?");
			outtextxy(60,220,"A. Anand");
			outtextxy(370,220,"B. Mulkraj");
			outtextxy(60,295,"C. Vishnu sharma");
			outtextxy(370,295,"D. Raskhan");
			return 4;
		}
		else if(rn==9)
		{
			outtextxy(70,90,"Q.2 Who won the first dada saheb falke award ?");
			outtextxy(60,220,"A. Yash chopra");
			outtextxy(370,220,"B. Prithvi raj kapoor");
			outtextxy(60,295,"C. Amitabh bachhan");
			outtextxy(370,295,"D. Devika rani rorik");
			return 4;
		}
		else if(rn==10)
		{
			outtextxy(70,90,"Q.2 In which year the second world war end ?");
			outtextxy(60,220,"A. 1914");
			outtextxy(370,220,"B. 1945");
			outtextxy(60,295,"C. 1939");
			outtextxy(370,295,"D. 1918");
			return 2;
		}
		else if(rn==11)
		{
			outtextxy(70,90,"Q.2 In which year the world Bank was established ?");
			outtextxy(60,220,"A. 1945");
			outtextxy(370,220,"B. 1914");
			outtextxy(60,295,"C. 1939");
			outtextxy(370,295,"D. 1918");
			return 1;
		}
		else if(rn==12)
		{
			outtextxy(70,90,"Q.2 TASS news agency is located in which country ?");
			outtextxy(60,220,"A. India");
			outtextxy(370,220,"B. Italy");
			outtextxy(60,295,"C. Russia");
			outtextxy(370,295,"D. Germany");
			return 3;
		}
		else if(rn==13)
		{
			outtextxy(70,90,"Q.2 In which does opera house is located ?");
			outtextxy(60,220,"A. Paris");
			outtextxy(370,220,"B. Agra");
			outtextxy(60,295,"C. Mexico");
			outtextxy(370,295,"D. Sydney");
			return 4;
		}
		else if(rn==14)
		{
			outtextxy(70,90,"Q.2 What is the symbol of Turkey ?");
			outtextxy(60,220,"A. Lion");
			outtextxy(370,220,"B. Eagle");
			outtextxy(60,295,"C. Water");
			outtextxy(370,295,"D. Moon-star");
			return 4;
		}
		else if(rn==15)
		{
			outtextxy(70,90,"Q.2 Which is the smallest country in the world ?");
			outtextxy(60,220,"A. Mexico city");
			outtextxy(370,220,"B. Vatican city");
			outtextxy(60,295,"C. Magadascar");
			outtextxy(370,295,"D. Kenya");
			return 2;
		}
		else if(rn==16)
		{
			outtextxy(70,90,"Q.2 Which is the world first religion ?");
			outtextxy(60,220,"A. Hindu");
			outtextxy(370,220,"B. Muslim");
			outtextxy(60,295,"C. Sanatan");
			outtextxy(370,295,"D. Sikh");
			return 3;
		}
		else if(rn==17)
		{
			outtextxy(70,90,"Q.2 Which is the first Indian nuclear reactor ?");
			outtextxy(60,220,"A. Apsara");
			outtextxy(370,220,"B. Natraj");
			outtextxy(60,295,"C. Reynolds");
			outtextxy(370,295,"D. Agni");
			return 1;
		}
		else if(rn==18)
		{
			outtextxy(70,90,"Q.2 Who wrote the book 'The origin of species' ?");
			outtextxy(60,220,"A. Newton");
			outtextxy(370,220,"B. Herbert spencer");
			outtextxy(60,295,"C. Gallelio");
			outtextxy(370,295,"D. Charles Darwin");
			return 4;
		}
		else if(rn==19)
		{
			O(70,90,"Q.2 Who invented number ZERO ?");
			O(60,220,"A. Indian");
			O(370,220,"B. Romans");
			O(60,295,"C. Egyptians");
			O(370,295,"D. Chinesse");
			return 1;
		}
		else if(rn==20)
		{
			O(70,90,"Q.2 What does the C in VCR stands for ?");
			O(60,220,"A. Cable");
			O(370,220,"B. Compact");		
			O(60,295,"C. Cassette");
			O(370,295,"D. Cinema");
			return 3;
		}
		else if(rn==21)
		{
			O(70,90,"Q.2 main() function in c/c++ is :-");
			O(60,220,"A. Can't be specified");
			O(370,220,"B. User-defined");
			O(60,295,"C. Pre-defined");
			O(370,295,"D. Not a function");
			return 2;
		}
		else if(rn==22)
		{
			O(70,90,"Q.2 The Exact value of pie is :-");
			O(60,220,"A. Can't be specified");
			O(370,220,"B. 22/7");
			O(60,295,"C. 3.141");
			O(370,295,"D. None of these");
			return 1;
		}
		else if(rn==23)
		{
			O(70,90,"Q.2 Which of the following is tallest building in the world?");
			O(a,"A. Qutub Minar");
			O(b,"B. Statue of liberty");
			O(c,"C. Effiel Tower");
			O(d,"D. Burj Khilifa");
			return 4;
		}
		else if(rn==24)
		{
			O(70,90,"Q.2 In which direction does a Muslim Pray ?");
			O(a,"A. East");
			O(b,"B.Nearby Mosque's Direction");
			O(c,"C. South");
			O(360,295,"D. Mecca's Direction");
			return 4;
		}
		else if(rn==25)
		{
			O(70,90,"Q.2 What is the holy book of Islam ?");
			O(a,"A. Bible");
			O(b,"B. Bhagvath Gita");
			O(c,"C. Khuran");
			O(d,"D. Mahabharat");
			return 3;
		}
		else if(rn==26)
		{
			O(70,90,"Q.2 Who is the mother of Rama in Ramayana ?");
			O(a,"A. Sumithra");
			O(b,"B. Kaikei");
			O(c,"C. Kousalya");
			O(d,"D. Manthara");
			return 3;
		}
		else if(rn==27)
		{
			O(70,90,"Q.2 Which day is celebrated as Engineers Day ?");
			O(a,"A. 7th July");
			O(b,"B. 8th Feb");
			O(c,"C. 12th Jan");
			O(d,"D. 24th Jan");
			return 4;
		}
		else if(rn==28)
		{
			O(70,90,"Q.2 Which country is leading producer of Gold ?");
			O(a,"A. India");
			O(b,"B. S.Africa");
			O(c,"C. Zaire");
			O(d,"D. New Zealand");
			return 2;
		}
		else if(rn==29)
		{
			O(70,90,"Q.2 What is the new name of Persia ?");
			O(a,"A. Afghanistan");
			O(b,"B. Iraq");
			O(c,"C. Iran");
			O(d,"D. Sironus");
			return 3;
		}
		else if(rn==30)
		{
			O(70,90,"Q.2 Which state is the most literate state ?");
			O(a,"A. Kerala");
			O(b,"B. A.Pradesh");
			O(c,"C. M.Pradesh");
			O(d,"D. Odisha");
			return 1;
		}
	}
	else if(i==3)
	{
		rn=random(13);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.3 Which force is needed to make an object travel in a");
			outtextxy(100,105,"circular path ?");
			outtextxy(60,220,"A. Gravitational force");
			outtextxy(370,220,"B. Centripetal force");
			outtextxy(60,295,"C. Magnetic force");
			outtextxy(370,295,"D. Contact force");
			return 2;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.3 Which is not a header file in C/C++ ?");
			outtextxy(60,220,"A. dos.h");
			outtextxy(370,220,"B. graphics.h");
			outtextxy(60,295,"C. time.h");
			outtextxy(370,295,"D. buffer.h");
			return 4;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.3 What is the chemical formula of kiscerite ?");
			outtextxy(60,220,"A. MgSO4.7H2O");
			outtextxy(370,220,"B. MgCO3.CaCO3");
			outtextxy(60,295,"C. MgSO4.H2O");
			outtextxy(370,295,"D. MgCO3");
			return 3;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.3 What is the chemical formula of sodium carbonate ?");
			outtextxy(60,220,"A. Na2CO3");
			outtextxy(370,220,"B. NaCl");
			outtextxy(60,295,"C. NaHCO3");
			outtextxy(370,295,"D. NaOH");
			return 1;
		}
		else if(rn==4)
		{
			O(70,90,"Q.3 A person of which of these blood groups is called a");
			O(100,105,"Universal donor ?");
			O(60,220,"A. O");
			O(370,220,"B. B+");
			O(60,295,"C. AB");
			O(370,295,"D. A+");
			return 1;
		}
		else if(rn==5)
		{
			O(70,90,"Q.3 Which of these is not associated with the number twelve ?");
			//O(100,105,"circular path ?");
			O(60,220,"A. Mid-night");
			O(370,220,"B. Dozen");
			O(60,295,"C. Noon");
			O(370,295,"D. Decade");
			return 4;
		}
		else if(rn==6)
		{
			O(70,90,"Q.3 What is the source of hydroelectric power ?");
			//O(100,105,"circular path ?");
			O(60,220,"A. Wind");
			O(370,220,"B. Sun");
			O(60,295,"C. Water");
			O(370,295,"D. Uranium");
			return 3;
		}
		else if(rn==7)
		{
			O(70,90,"Q.3 Who heads Reserve Bank of India");
			//O(100,105,"circular path ?");
			O(a,"A. Finance Minister");
			O(b,"B. Governor");
			O(c,"C. Commissioner");
			O(d,"D. Chief Minister");
			return 2;
		}
		else if(rn==8)
		{
			O(70,90,"Q.3 Who was not a railway not a railway minister ?");
			//O(100,105,"circular path ?");
			O(a,"A. Geeta Mukharjee");
			O(b,"B. Lal Bahadur Shastri");
			O(c,"C. Mamata Banarjee");
			O(d,"D. George Fernandis");
			return 1;
		}
		else if(rn==9)
		{
			O(70,90,"Q.3 Which is the largest mammal ?");
			//O(100,105,"circular path ?");
			O(a,"A. Hippo");
			O(b,"B. Lion");
			O(c,"C. Blue Whale");
			O(d,"D. Elephant");
			return 3;
		}
		else if(rn==10)
		{
			O(70,90,"Q.3 Which game is related to Rangaswami Cup");
			O(a,"A. Hockey");
			O(b,"B. Badmiunton");
			O(c,"C. Kabbadi");
			O(d,"D. Tennis");
			return 1;
		}
		else if(rn==11)
		{
			O(70,90,"Q.3 Who is the man who has largest number of world records ?");
			O(a,"A. Sachin Tendulkar");
			O(b,"B. Ussain Bolt");
			O(c,"C. Arundhati Roy");
			O(d,"D. Micheal Phelps");
			return 4;
		}
		else if(rn==12)
		{
			O(70,90,"Q.3 Which actor has most number of national awards ?");
			O(a,"A. Nawazuddin Shah");
			O(b,"B. Shah Rukh Khan");
			O(c,"C. Amitabh Bachchan");
			O(d,"D. Irfan Khan");
			return 3;
		}
	}
	else if(i==4)
	{
		rn=random(13);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.4 Which is not a C or C++ Compiler ?");
			outtextxy(60,220,"A. Eclipse");
			outtextxy(370,220,"B. Turbo");
			outtextxy(60,295,"C. GCC");
			outtextxy(370,295,"D. Linux");
			return 1;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.4 Which is not a Hardware ?");
			outtextxy(60,220,"A. Monitor");
			outtextxy(370,220,"B. CPU");
			outtextxy(60,295,"C. Mouse");
			outtextxy(370,295,"D. Microsoft Office");
			return 4;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.4 What is the chemical formula of Zinc Sulphate ?");
			outtextxy(60,220,"A. ZnSO4");
			outtextxy(370,220,"B. ZnSO4.7H2O");
			outtextxy(60,295,"C. ZnSO3");
			outtextxy(370,295,"D. ZnSO4.5H2O");
			return 2;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.4 Which is not a computer language ?");
			outtextxy(60,220,"A. C++");
			outtextxy(370,220,"B. Pascal");
			outtextxy(60,295,"C. php");
			outtextxy(370,295,"D. Basic");
			return 3;
		}
		else if(rn==4)
		{
			O(70,90,"Q.4 The single acid which dissolves gold is :-");
			O(60,220,"A. Hydrochloric");
			O(370,220,"B. Selenic");
			O(60,295,"C. Nitric");
			O(370,295,"D. Aqua Regia");
			return 4;
		}
		else if(rn==5)
		{
			O(70,90,"Q.4 Which Singh is the central character in the film");
			O(100,105," 'Singh is King' ?");
			O(60,220,"A. Happy");
			O(370,220,"B. Peppy");
			O(60,295,"C. Chirpy");
			O(370,295,"D. Merry");
			return 1;
		}
		else if(rn==6)
		{
			O(70,90,"Q.4 Which is the hardest known substance ?");
			O(60,220,"A. Granide");
			O(370,220,"B. Graphite");
			O(60,295,"C. Diamond");
			O(370,295,"D. None of these");
			return 3;
		}
		else if(rn==7)
		{
			O(70,90,"Q.4 Where is the Nalanda University ?");
			O(a,"A. Nepal");
			O(b,"B. Madhya Pradesh");
			O(c,"C. West Bengal");
			O(d,"D. Bihar");
			return 4;
		}
		else if(rn==8)
		{
			O(70,90,"Q.4 Which is the tallest grass ?");
			O(a,"A. Wheat");
			O(b,"B. Bamboo");
			O(c,"C. Palm");
			O(d,"D. Sugar Cane");
			return 2;
		}
		else if(rn==9)
		{
			O(70,90,"Q.4 What is the power voltage available at home ?");
			O(a,"A. 230 volts");
			O(b,"B. 5 volts");
			O(c,"C. 10 volts");
			O(d,"D. 500 volts");
			return 1;
		}
		else if(rn==10)
		{
			O(70,90,"Q.4 How many union territories are there in India ?");
			O(a,"A. 10");
			O(b,"B. 08");
			O(c,"C. 06");
			O(d,"D. 07");
			return 4;
		}
		else if(rn==11)
		{
			O(70,90,"Q.4 Who was Chairman of Drafting Commitee ?");
			O(a,"A. S.C.Bose");
			O(b,"B. B.R.Ambedkar");
			O(c,"C. Rajendra Prasad");
			O(d,"D. Sachidanand sinha");
			return 2;
		}
		else if(rn==12)
		{
			O(70,90,"Q.4 What is Full Form of Hp ?");
			O(a,"A. Hindustan Petroleum");
			O(b,"B. Hawlett Packard");
			O(c,"C. Both A and B");
			O(d,"D. None of these");
			return 3;
		}
	}
	else if(i==5)
	{
		rn=random(13);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.5 Who was the first Prime Minister of China ?");
			outtextxy(60,220,"A. Herosima");
			outtextxy(370,220,"B. Dr. sanyath sen");
			outtextxy(60,295,"C. George washington");
			outtextxy(370,295,"D. Robert whittaker");
			return 2;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.5 In which city first atom bomb was planted ?");
			outtextxy(60,220,"A. Turkey");
			outtextxy(370,220,"B. California");
			outtextxy(60,295,"C. Herosima");
			outtextxy(370,295,"D. Agra");
			return 3;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.5 Who won the first miss world in India ?");
			outtextxy(60,220,"A. Sushmita Sen");
			outtextxy(370,220,"B. Hema Malini");
			outtextxy(60,295,"C. Aishwariya Rai");
			outtextxy(370,295,"D. Rumari Rita Pharia");
			return 4;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.5 Who was the first women Airbus Pilot in India ?");
			outtextxy(60,220,"A. Duba Banarjee");
			outtextxy(370,220,"B. Kujrani");
			outtextxy(60,295,"C. Sushma Chauhan");
			outtextxy(370,295,"D. Sushmita Sen");
			return 1;
		}
		else if(rn==4)
		{
			O(70,90,"Q.5 Which country has the world's largest Highways systems ?");
			O(60,220,"A. India");
			O(370,220,"B. United States");
			O(60,295,"C. Russia");
			O(370,295,"D. China");
			return 2;
		}
		else if(rn==5)
		{
			O(70,90,"Q.5 Who is the writer of 'God Of Small Things' ?");
			O(60,220,"A. Mihir Sen");
			O(370,220,"B. Nicolus Spark");
			O(60,295,"C. Arundati Roy");
			O(370,295,"D. Chetan Bhagat");
			return 3;
		}
		else if(rn==6)
		{
			O(70,90,"Q.5 The area of Asia is more than ______ million sq.Km ?");
			O(60,220,"A. 31");
			O(370,220,"B. 50");
			O(60,295,"C. 65");
			O(370,295,"D. 60");
			return 1;
		}
		else if(rn==7)
		{
			O(70,90,"Q.5 Which of these is not an Epic ?");
			O(a,"A. Odessey");
			O(b,"B. Mein Kampf");
			O(c,"C. Ramayan");
			O(d,"D. Mahabhartha");
			return 2;
		}
		else if(rn==8)
		{
			O(70,90,"Q.5 Who among these was not assainated ?");
			O(a,"A. John Henin");
			O(b,"B. Mahatma Gandhi");
			O(c,"C. Sanjay Gandhi");
			O(d,"D. Mount Batten");
			return 3;
		}
		else if(rn==9)
		{
			O(70,90,"Q.5 When did soviet union breakdown ?");
			O(a,"A. 1999");
			O(b,"B. 1969");
			O(c,"C. 1979");
			O(d,"D. 1989");
			return 4;
		}
		else if(rn==10)
		{
			O(70,90,"Q.5 What is the no. of international airports in India ?");
			O(a,"A. 15");
			O(b,"B. 12");
			O(c,"C. 10");
			O(d,"D. 16");
			return 2;
		}
		else if(rn==11)
		{
			O(70,90,"Q.5 Which of these is not a musical instrument ?");
			O(a,"A. Mandolin");
			O(b,"B. Sarod");
			O(c,"C. Chaluk");
			O(d,"D. Violin");
			return 3;
		}
		else if(rn==12)
		{
			O(70,90,"Q.5 Who is first Citizen of India ?");
			O(a,"A. President");
			O(b,"B. Governer");
			O(c,"C. Home Minister");
			O(d,"D. Prime Minister");
			return 1;
		}
	}
	else if(i==6)
	{
		rn=random(13);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.6 What is the full form of IBM ?");
			outtextxy(60,220,"A. Internet Business Machine");
			outtextxy(370,220,"B. Internet Bank Machine");
			outtextxy(60,295,"C. International Bank Machine");
			outtextxy(370,295,"D. International Business Machine");
			return 4;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.6 What is the full form of OMR ?");
			outtextxy(60,220,"A. Optical Marker Reader");
			outtextxy(370,220,"B. Optical Mark Reader");
			outtextxy(60,295,"C. Optic Mark Reader");
			outtextxy(370,295,"D. Optic Marker Reader");
			return 2;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.6 What is the full form of DOS ?");
			outtextxy(60,220,"A. Disk Operating System");
			outtextxy(370,220,"B. Desk Operating System");
			outtextxy(60,295,"C. Disk Oriented System");
			outtextxy(370,295,"D. Desk Oriented System");
			return 1;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.6 What is the full form of VDU ?");
			outtextxy(60,220,"A. Virtual Display Unit");
			outtextxy(370,220,"B. Virtual Desk Unit");
			outtextxy(60,295,"C. Visual Display Unit");
			outtextxy(370,295,"D. Visual Desk Unit");
			return 3;
		}
		else if(rn==4)
		{
			O(70,90,"Q.6 Which is the latest android version ?");
			O(a,"A. Jelly Bean");
			O(b,"B. Honeycomb");
			O(c,"C. Kit Kat");
			O(d,"D. Donut");
			return 3;
		}
		else if(rn==5)
		{
			O(70,90,"Q.6 Who hosted the reality TV show 'Lift Kara De' ?");
			O(a,"A. Karan Johar");
			O(b,"B. Adnam Sami");
			O(c,"C. Sajid Khan");
			O(d,"D. Farah Khan");
			return 1;
		}
		else if(rn==6)
		{
			O(70,90,"Q.6 In which year, pascal invented the calculation machine ?");
			O(a,"A. 1842");
			O(b,"B. 1642");
			O(c,"C. 1542");
			O(d,"D. 1742");
			return 2;
		}
		else if(rn==7)
		{
			O(70,90,"Q.6 Where is the Kohinoor Diamond ?");
			O(a,"A. USA");
			O(b,"B. Persia");
			O(c,"C. England");
			O(d,"D. India");
			return 3;
		}
		else if(rn==8)
		{
			O(70,90,"Q.6 Where was Buddha born ?");
			O(a,"A. Lumbinvana");
			O(b,"B. Saranath");
			O(c,"C. Bodhgaya");
			O(d,"D. Ayodhya");
			return 1;
		}
		else if(rn==9)
		{
			O(70,90,"Q.6 What was the symbol of Nazi's ?");
			O(a,"A. Owl");
			O(b,"B. Skull and Bones");
			O(c,"C. Swasthika");
			O(d,"D. Cross");
			return 4;
		}
		else if(rn==10)
		{
			O(70,90,"Q.6 Which country will host IPL 2013 ?");
			O(a,"A. India");
			O(b,"B. Bangladesh");
			O(c,"C. Australia");
			O(d,"D. New Zealand");
			return 2;
		}
		else if(rn==11)
		{
			O(70,90,"Q.6 Which state is largest producer of Gram ?");
			O(a,"A. M.Pradesh");
			O(b,"B. A.Pradesh");
			O(c,"C. H.Pradesh");
			O(d,"D. Assam");
			return 1;
		}
		else if(rn==12)
		{
			O(70,90,"Q.6 We are currently in which 5-year Plan ?");
			O(a,"A. 2013-2018");
			O(b,"B. 2011-2016");
			O(c,"C. 2012-2017");
			O(d,"D. 2010-2015");
			return 4;
		}
	}
	else if(i==7)
	{
		rn=random(13);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.7 Which oxide of water is called as heavy water ?");
			outtextxy(60,220,"A. D2O");
			outtextxy(370,220,"B. H2O");
			outtextxy(60,295,"C. B2O");
			outtextxy(370,295,"D. T2O");
			return 1;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.7 Which state has the largest area in India ?");
			outtextxy(60,220,"A. Chhatisgarh");
			outtextxy(370,220,"B. Madhya pradesh");
			outtextxy(60,295,"C. Rajasthan");
			outtextxy(370,295,"D. Orissa");
			return 2;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.7 Which state has largest production of grain in India?");
			outtextxy(60,220,"A. Haryana");
			outtextxy(370,220,"B. Jharkhand");
			outtextxy(60,295,"C. Punjab");
			outtextxy(370,295,"D. Kerala");
			return 3;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.7 Which is the chemical formula of Borex ?");
			outtextxy(60,220,"A. Nacl");
			outtextxy(370,220,"B. Na2CO3.2NaHCO3");
			outtextxy(60,295,"C. NaNO3");
			outtextxy(370,295,"D. Na2B4O7");
			return 4;
		}
		else if(rn==4)
		{
			O(70,90,"Q.7 When C program was first developed ?");
			O(a,"A. 1971");
			O(b,"B. 1972");
			O(c,"C. 1973");
			O(d,"D. 1974");
			return 2;
		}
		else if(rn==5)
		{
			O(70,90,"Q.7 Which of these States has a separate winter and summer");
			O(100,105,"capital ?");
			O(a,"A. Rajasthan");
			O(b,"B. Punjab");
			O(c,"C. Jammu and Kashmir");
			O(d,"D. Himachal Pradesh");
			return 3;
		}
		else if(rn==6)
		{
			O(70,90,"Q.7 Which of the following is not an enzyme ?");
			O(a,"A. Somatotropin");
			O(b,"B. Pepsin");
			O(c,"C. Trypsin");
			O(d,"D. Amylase");
			return 4;
		}
		else if(rn==7)
		{
			O(70,90,"Q.7 What is the starting number for Chennai's pincode ?");
			O(a,"A. 5");
			O(b,"B. 6");
			O(c,"C. 7");
			O(d,"D. 4");
			return 2;
		}
		else if(rn==8)
		{
			O(70,90,"Q.7 What is the system of governance in China ?");
			O(a,"A. Democracy");
			O(b,"B. Monarchy");
			O(c,"C. Communism");
			O(d,"D. Communalism");
			return 3;
		}
		else if(rn==9)
		{
			O(70,90,"Q.7 Who lost his teeth while writing Mahabharat ?");
			O(a,"A. Ganesh");
			O(b,"B. Veda Vyas");
			O(c,"C. Valmiki");
			O(d,"D. Dushasan");
			return 1;
		}
		else if(rn==10)
		{
			O(70,90,"Q.7 City of seven islands refers to ?");
			O(a,"A. Delhi");
			O(b,"B. Panaji");
			O(c,"C. Kota");
			O(d,"D. Mumbai");
			return 4;
		}
		else if(rn==11)
		{
			O(70,90,"Q.7 Which is major newspaper of India ?");
			O(a,"A. Times of India");
			O(b,"B. Navbharat times");
			O(c,"C. Hindustan Times");
			O(d,"D. Dainik Jagran");
			return 3;
		}
		else if(rn==12)
		{
			O(70,90,"Q.7 Who won the Deodhar Trophy 2013 ?");
			O(a,"A. West Zone");
			O(b,"B. South Zone");
			O(c,"C. East Zone ");
			O(d,"D. North Zone");
			return 1;
		}
	}
	else if(i==8)
	{
		rn=random(13);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.8 Which animal is crying like animal when injured ?");
			outtextxy(60,220,"A. Tiger");
			outtextxy(370,220,"B. Bear");
			outtextxy(60,295,"C. Lion");
			outtextxy(370,295,"D. Monkey");
			return 2;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.8 Which river of india flow down in Arabian sea");
			outtextxy(60,220,"A. Narmada");
			outtextxy(370,220,"B. Tapi");
			outtextxy(60,295,"C. Brahamputra");
			outtextxy(370,295,"D. Ganga");
			return 1;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.8 Which city has the biggest railway station in world ?");
			outtextxy(60,220,"A. Kolkata");
			outtextxy(370,220,"B. Kharagpur");
			outtextxy(60,295,"C. Newyork");
			outtextxy(370,295,"D. Hong kong");
			return 3;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.8 Which microorganism is said to be both living");
			outtextxy(100,105,"and non living thing ?");
			outtextxy(60,220,"A. Bacteria");
			outtextxy(370,220,"B. Fungi");
			outtextxy(60,295,"C. Protozoa");
			outtextxy(370,295,"D. Virus");
			return 4;
		}
		else if(rn==4)
		{
			O(70,90,"Q.8 Current standard version of C is known as :-");
			//O(100,105,"and non living thing ?");
			O(a,"A. C11");
			O(b,"B. C");
			O(c,"C. ANSI C");
			O(d,"D. C99");
			return 1;
		}
		else if(rn==5)
		{
			O(70,90,"Q.8 Which of these words literally means 'Surrender' in Arabic?");
			//O(100,105,"and non living thing ?");
			O(a,"A. Ramadan");
			O(b,"B. Khalifa");
			O(c,"C. Islam");
			O(d,"D. Muhammad");
			return 3;
		}
		else if(rn==6)
		{
			O(70,90,"Q.8 How many schedules are there in the constitution of India?");
			O(a,"A. 9");
			O(b,"B. 11");
			O(c,"C. 10");
			O(d,"D. 12");
			return 2;
		}
		else if(rn==7)
		{
			O(70,90,"Q.8 Who is the first women chief Prime Minister in India ?");
			//O(100,105,"and non living thing ?");
			O(a,"A. Mamata Banarjee");
			O(b,"B. Vijayalakshni Pandit");
			O(c,"C. Sushma Swaraj");
			O(d,"D. Sucheta Kripalini");
			return 4;
		}
		else if(rn==8)
		{
			O(70,90,"Q.8 Who declares the first page of Indian Constitution ?");
			//O(100,105,"and non living thing ?");
			O(a,"A. President of India");
			O(b,"B. Mahathma Gandhi");
			O(c,"C. Prime Minister");
			O(d,"D. People of India");
			return 4;
		}
		else if(rn==9)
		{
			O(70,90,"Q.8 Which of these animals 'laughs' ?");
			//O(100,105,"and non living thing ?");
			O(a,"A. Rhino");
			O(b,"B. Zeebra");
			O(c,"C. Hyna");
			O(d,"D. Tiger");
			return 3;
		}
		else if(rn==10)
		{
			O(70,90,"Q.8 Who is the only scientist with more than 1000 inventions ?");
			//O(100,105,"and non living thing ?");
			O(a,"A. T.A.Edison");
			O(b,"B. Einstien");
			O(c,"C. J.L.Beard");
			O(d,"D. Marconi");
			return 1;
		}
		else if(rn==11)
		{
			O(70,90,"Q.8 What is capital of Cannada ?");
			//O(100,105,"and non living thing ?");
			O(a,"A. Peso");
			O(b,"B. Brussels");
			O(c,"C. Ottawa");
			O(d,"D. Lisbon");
			return 3;
		}
		else if(rn==12)
		{
			O(70,90,"Q.8 What is the largest bone called ?");
			O(a,"A. Arnold");
			O(b,"B. Femur");
			O(c,"C. Pseudosis");
			O(d,"D. Orthosis");
			return 2;
		}
	}
	else if(i==9)
	{
		rn=random(13);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.9 What was the name of kerala before independence ?");
			outtextxy(60,220,"A. Traban core cochin");
			outtextxy(370,220,"B. Madras");
			outtextxy(60,295,"C. Kurela");
			outtextxy(370,295,"D. Sonepur");
			return 1;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.9 Which party was formed by hitler ?");
			outtextxy(60,220,"A. Congress party");
			outtextxy(370,220,"B. GJP");
			outtextxy(60,295,"C. BJP");
			outtextxy(370,295,"D. Nazi party");
			return 4;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.9 Who was the first Muslim manager of Indian National");
			outtextxy(100,105,"Congress ?");
			outtextxy(60,220,"A. Nagendra sinha");
			outtextxy(370,220,"B. Hasrat Mohani");
			outtextxy(60,295,"C. Budruddin Tayeb");
			outtextxy(370,295,"D. Abdul kalam azad");
			return 3;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.9 How many times does human heart beats in one minute ?");
			outtextxy(60,220,"A. 15 times");
			outtextxy(370,220,"B. 16 times");
			outtextxy(60,295,"C. 17 times");
			outtextxy(370,295,"D. 18 times");
			return 1;
		}
		else if(rn==4)
		{
			O(70,90,"Q.9 South Africa is the chief producer of :-");
			//O(100,105,"Congress ?");
			O(a,"A. Tin");
			O(b,"B. Copper");
			O(c,"C. Gold");
			O(d,"D. Iron Ore");
			return 3;
		}
		else if(rn==5)
		{
			O(70,90,"Q.9 In Which state would you find the Districts of Bastar");
			O(100,105,"and Dantiwada ?");
			O(a,"A. Andhra Pradesh");
			O(b,"B. Orissa");
			O(c,"C. Jharkhand");
			O(d,"D. chattisgarh");
			return 4;
		}
		else if(rn==6)
		{
			O(70,90,"Q.9 The National Judical academy is located at :-");
			O(a,"A. New Delhi");
			O(b,"B. Bhopal");
			O(c,"C. hyderabad");
			O(d,"D. Bangalore");
			return 2;
		}
		else if(rn==7)
		{
			O(70,90,"Q.9 Which is the other name of Red Cross ?");
			//O(100,105,"Congress ?");
			O(a,"A. CARE");
			O(b,"B. Red Cresent");
			O(c,"C. Doctors without borders");
			O(d,"D. World Health Organisation");
			return 2;
		}
		else if(rn==8)
		{
			O(70,90,"Q.9 Who among these was blind ?");
			O(a,"A. Ram Das");
			O(b,"B. Tulsi Das");
			O(c,"C. Purandar Das");
			O(d,"D. Soor Das");
			return 4;
		}
		else if(rn==9)
		{
			O(70,90,"Q.9 Who wrote the Book war and peace ?");
			O(a,"A. Leo Tolstoy");
			O(b,"B. Bill Gates");
			O(c,"C. Adolf Hitler");
			O(d,"D. George Bernard Shaw");
			return 1;
		}
		else if(rn==10)
		{
			O(70,90,"Q.9 What is the boundary line between India and China ?");
			O(a,"A. LOC");
			O(b,"B. Durand Line");
			O(c,"C. Mac Mohan");
			O(d,"D. Indo-Chinese wall");
			return 3;
		}
		else if(rn==11)
		{
			O(70,90,"Q.9 Which movie won Oscar 2013 for best picture category ?");
			O(a,"A. Life of Pi");
			O(b,"B. Argo");
			O(c,"C. Lincoln");
			O(d,"D. Skyfall");
			return 2;
		}
		else if(rn==12)
		{
			O(70,90,"Q.9 Who was first to reach Mt.Everest without oxygen ?");
			O(a,"A. S.S.Kurup");
			O(b,"B. Lalu Yadav");
			O(c,"C. A.S.Kurup");
			O(d,"D. S.A.Dorje");
			return 1;
		}
	}
	else if(i==10)
	{
		rn=random(10);
		randomize();
		if(rn==0)
		{
			outtextxy(70,90,"Q.10 One Days of Moon is equal to how many days of");
			outtextxy(100,105,"earth ?");
			outtextxy(60,220,"A. 14");
			outtextxy(370,220,"B. 12");
			outtextxy(60,295,"C. 15");
			outtextxy(370,295,"D. 13");
			return 1;
		}
		else if(rn==1)
		{
			outtextxy(70,90,"Q.10 What is the name of parliament in Turkey ?");
			outtextxy(60,220,"A. Grand people assembly");
			outtextxy(370,220,"B. Fedral Assembly");
			outtextxy(60,295,"C. National people assembly");
			outtextxy(370,295,"D. Grand national assembly");
			return 4;
		}
		else if(rn==2)
		{
			outtextxy(70,90,"Q.10 The cartesian system named in honour of_____ ?");
			outtextxy(60,220,"A. Leibnitz");
			outtextxy(370,220,"B. Euclid");
			outtextxy(60,295,"C. Laplace");
			outtextxy(370,295,"D. Rene Descartes");
			return 4;
		}
		else if(rn==3)
		{
			outtextxy(70,90,"Q.10 Which road is the biggest road ?");
			outtextxy(60,220,"A. Four way road");
			outtextxy(370,220,"B. Track road");
			outtextxy(60,295,"C. Grand track road");
			outtextxy(370,295,"D. Gandhi road");
			return 3;
		}
		else if(rn==4)
		{
			O(70,90,"Q.10 Who invented Kodak Camera ?");
			O(a,"A. Gottlieb Daimbler");
			O(b,"B. Nicolas Cugnet");
			O(c,"C. Walker Eastman");
			O(d,"D. Joseph Aspdin");
			return 3;
		}
		else if(rn==5)
		{
			O(70,90,"Q.10 How many pairs of ribs does a human body usually have ?");
			O(a,"A. 12");
			O(b,"B. 8");
			O(c,"C. 6");
			O(d,"D. 14");
			return 1;
		}
		else if(rn==6)
		{
			O(70,90,"Q.10 How do you say Good Bye in Japan ?");
			O(a,"A. Na Honda");
			O(b,"B. Sayonara");
			O(c,"C. Waka");
			O(d,"D. Sho yu");
			return 2;
		}
		else if(rn==7)
		{
			O(70,90,"Q.10 Who wrote Majn-ul-Bahrain ?");
			O(a,"A. Babar");
			O(b,"B. Darashikoh");
			O(c,"C. Shahjahan");
			O(d,"D. Akbar");
			return 2;
		}
		else if(rn==8)
		{
			O(70,90,"Q.10 Who discovered Sethoscope ?");
			O(a,"A. T.Albert");
			O(b,"B. Joseph Lister");
			O(c,"C. G.Sethos");
			O(d,"D. R.Lacnnec");
			return 4;
		}
		else if(rn==9)
		{
			O(70,90,"Q.10 When was the first football Confederation Cup held ?");
			O(a,"A. 1994");
			O(b,"B. 1996");
			O(c,"C. 1992");
			O(d,"D. 1990");
			return 3;
		}
	}
	return 0;
}
void kbc()
{
	int cans,txp=100,typ=150;
	cleardevice();
	callmouse();
	setposi(txp,typ);
	for(int i=1;i<=10;i++)
	{
		st(i);
		setcolor(RED);
		settextstyle(DEFAULT_FONT,0,2);
		if(i==1)
			outtextxy(255,340,"000");
		else if(i==2)
		{
			setcolor(13);
			outtextxy(290,340,"000");
			setcolor(RED);
			outtextxy(290,340,"1000");
		}
		else if(i==3)
		{
			setcolor(13);
			outtextxy(290,340,"1000");
			setcolor(RED);
			outtextxy(290,340,"5000");
		}
		else if(i==4)
		{
			setcolor(13);
			outtextxy(290,340,"5000");
			setcolor(RED);
			outtextxy(290,340,"20,000");
		}
		else if(i==5)
		{
			setcolor(13);
			outtextxy(290,340,"20,000");
			setcolor(RED);
			outtextxy(290,340,"50,000");
		}
		else if(i==6)
		{
			setcolor(13);
			outtextxy(290,340,"50,000");
			setcolor(RED);
			outtextxy(290,340,"1,00,000");
		}
		else if(i==7)
		{
			setcolor(13);
			outtextxy(290,340,"1,00,000");
			setcolor(RED);
			outtextxy(290,340,"5,00,000");
		}
		else if(i==8)
		{
			setcolor(13);
			outtextxy(290,340,"5,00,000");
			setcolor(RED);
			outtextxy(290,340,"10,00,000");
		}
		else if(i==9)
		{
			setcolor(13);
			outtextxy(290,340,"10,00,000");
			setcolor(RED);
			outtextxy(290,340,"20,00,000");
		}
		else
		{
			setcolor(13);
			outtextxy(290,340,"20,00,000");
			setcolor(RED);
			outtextxy(290,340,"50,00,000");
		}
		chtkn=0;
		callmouse();
		setposi(txp,typ);
		cans=quesbank(i);
		while(1)
		{
			optn(1,1,1,1,l1,l2,l3,cans);
			if(cans==chtkn)
			{
				if(i==10)
				{
					page();
					settextstyle(SCRIPT_FONT,HORIZ_DIR,3);
					callmouse();
					while(1)
					{
						for(int j=1;j<=8;j++)
						{
							setcolor(j);
							outtextxy(70,100,"!!!! CONGRATS !!!!");
							outtextxy(70,200,"NOW YOU ARE CROREPATI");
							outtextxy(70,300,"YOU WIN RS 1 CRORE");
							outtextxy(70,400,"YOU ARE A GENIUS..");
							delay(100);
						}
						mouseposi(xp,yp,cl);
						if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
						{
							sound(400);
							delay(250);
							nosound();
							main();
						}
					}
				}
				delay(500);
				mousehide();
				cleardevice();
				goto xx;
			}
			else if(chtkn!=0)
			{
				page();
				outtextxy(170,100,"!!!! SORRY !!!!");
				outtextxy(10,200,"WRONG ANSWER YOU LOSE THE GAME..");
				outtextxy(10,300,"TOTAL PRIZES WINS = RS");
				if(i==1)
					outtextxy(440,300,"000");
				else if(i==2)
					outtextxy(440,300,"1000");
				else if(i==3)
					outtextxy(440,300,"5000");
				else if(i==4)
					outtextxy(440,300,"20,000");
				else if(i==5)
					outtextxy(440,300,"50,000");
				else if(i==6)
					outtextxy(440,300,"1,00,000");
				else if(i==7)
					outtextxy(440,300,"5,00,000");
				else if(i==8)
					outtextxy(440,300,"10,00,000");
				else if(i==9)
					outtextxy(440,300,"20,00,000");
				else
					outtextxy(440,300,"50,00,000");
				callmouse();
				while(1)
				{
					mouseposi(xp,yp,cl);
					if(xp>=getmaxx()-20&&xp<=getmaxx()&&yp>=0&&yp<=20&&cl==1)
					{
						sound(400);
						delay(250);
						nosound();
						main();
					}
				}
			}
			chtkn=0;
		}
		xx:
	}
}
void mmenu()
{
	char s[50];
	setcolor(GREEN);
	setbkcolor(BLACK);
	setfillstyle(1,15);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	outtextxy(60,5,"LET'S PLAY \" KAUN BANEGA");
	outtextxy(280,45,"CROREPATI \" (KBC)");
	outtextxy(255,100,"MENU");
	rectangle(230,180,380,230);
	outtextxy(260,175,"PLAY");
	//rectangle(230,250,380,300);
	//outtextxy(240,245,"MEDIUM");
	rectangle(230,320,380,370);
	outtextxy(260,315,"HELP");
	//rectangle(230,390,380,440);
	//outtextxy(260,385,"HELP");
	floodfill(240,190,GREEN);
	//floodfill(231,251,GREEN);
	floodfill(241,331,GREEN);
	//floodfill(231,391,GREEN);
	rectangle(639-100,479-60,639,479);
	outtextxy(639-90,479-60,"EXIT");
	floodfill(550,430,GREEN);
	callmouse();
	while(1)
	{
		mouseposi(xp,yp,cl);
		if(xp>=539&&xp<=639&&yp>=419&&yp<=479&&cl==1)
		{
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
		else if(xp>=230&&xp<=380&&yp>=180&&yp<=230&&cl==1)
		{
			mousehide();
			sound(400);
			delay(250);
			nosound();
			kbc();
		}
		else if(xp>=230&&xp<=380&&yp>=320&&yp<=370&&cl==1)
		{
			sound(400);
			delay(250);
			nosound();
			closegraph();
			cout<<"\n\t\t\tHELP SECTION\n\n\t10 Questions Are There\n\tAnd Each Questions Has Four Options In Which One Is Correct";
			cout<<"\n\n\tThree Lifelines Are There And You Can Choose Only One Lifeline At A Time";
			cout<<"\n\t\t\"EXCEPT THE AUDIENCE VOTE\"\n";
			cout<<"\n\tIf You Give 10 Correct Answers Then You Are A GENIUS..\n";
			cout<<"\n\n\t\tALL THE BEST\n\n\n\n\t\tPress Any Key To EXIT";
			getch();
			main();
		}
	}
}
void main()
{
	int gd=DETECT,gm;
	closegraph();
	initgraph(&gd,&gm,"");
	setlinestyle(0,1,3);
	randomize();
	chtkn=0;l1=1;l2=1;l3=1;
	mmenu();
	kbc();
	getch();
	closegraph();
}