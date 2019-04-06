			  /*KAUN BANEGA CROREPATI*/
//#include<cstdlib>
//#include<msoftcon.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#define I initgraph(&gd,&gm,"");
#define K closegraph();
#define O outtextxy
#define G getch();
#define S setcolor
#define T settextstyle
#define SB setbkcolor
#define DF DEFAULT_FONT
#define v void
#define HD HORIZ_DIR
#define SW "Sorry !! It's Wrong Answer Choose Another..");
#define IF1 if(in=='1'||in=='a'||in=='A')
#define IF2 if(in=='2'||in=='b'||in=='B')
#define IF3 if(in=='3'||in=='c'||in=='C')
#define IF4 if(in=='4'||in=='d'||in=='D')
#define EIF3 else if(in=='2'||in=='b'||in=='B'||in=='1'||in=='a'||in=='A'||in=='4'||in=='d'||in=='D')
#define EIF1 else if(in=='2'||in=='b'||in=='B'||in=='3'||in=='c'||in=='C'||in=='4'||in=='d'||in=='D')
#define IF5 else if(in=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
#define IF6 else if(in=='1'||in=='a'||in=='A'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
#define LF "Sorry !! Only One Lifeline At A Time..");
#define CC "Please Enter Correct Choice !!");
#define WN while((in=getch())!='1'&&in!='a'&&in!='A'&&in!='2'&&in!='b'&&in!='B'&&in!='3'&&in!='c'&&in!='C')
#define WL3 while((in=getch())!='2'&&in!='b'&&in!='B'&&in!='1'&&in!='a'&&in!='A')
#define WL2 while((in=getch())!='1'&&in!='a'&&in!='A'&&in!='3'&&in!='c'&&in!='C')
#define WL1 while((in=getch())!='2'&&in!='b'&&in!='B'&&in!='3'&&in!='c'&&in!='C')
#define WL12 while((in=getch())!='3'&&in!='c'&&in!='C')
#define WL23 while((in=getch())!='1'&&in!='a'&&in!='A')
#define WL13 while((in=getch())!='2'&&in!='b'&&in!='B')
#define WL while(in!='1'&&in!='a'&&in!='A'&&in!='2'&&in!='b'&&in!='B'&&in!='3'&&in!='c'&&in!='C'&&in!='4'&&in!='d'&&in!='D'&&in!='l'&&in!='L')
#define qq 70,90
#define pp 80,180
#define a 60,220
#define b 370,220
#define c 60,295
#define d 370,295
#define CL while((in=getch())=='l'||in=='L')
#define CL1 if(in=='1'||in=='a'||in=='A'||in=='2'||in=='b'||in=='B'||in=='3'||in=='c'||in=='C'||in=='4'||in=='d'||in=='D')
#define IFE if(in=='e'||in=='E')
#define E ellipse
#define TF TRIPLEX_FONT
int gd=DETECT,gm;
int l1=0,l2=0,l3=0;
v ques1_1();
v ques4_1();
v ques9_1();
v ques4_2();
v ques5_2();
v ques7_2();
v ques10_1();
v ques10_2();
v ques6_1();
v structure(char);
char s_page();
char check(char);
v r12(char);v r13(char);v r14(char);v r16(char);v r17(char);v r18(char);v r19(char);v r20(char);v r21(char);v r22(char);
v r8(char);v r9(char);v r10(char);v r11(char);
v r23(char);v r24(char);v r25(char);v r26(char);v r27(char);v r28(char);v r29(char);v r30(char);v r31(char);v r32(char);v r33(char);v r34(char);v r35(char);
v ques12();v ques13();v ques14();
v ques16();v ques17();v ques18();v ques19();v ques20();v ques21();v ques22();v ques23();v ques24();v ques25();v ques26();v ques27();v ques28();v ques29();v ques30();v ques31();v ques32();v ques33();v ques34();v ques35();
v ques8();v ques9();v ques10();v ques11();
void f1()
{
	setfillstyle(SOLID_FILL,9);
	fillellipse(150,225,120,25);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(150,225,120,25);
	delay(400);
}
void f2()
{
	setfillstyle(SOLID_FILL,9);
	fillellipse(450,225,120,25);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(450,225,120,25);
	delay(400);
}
void f3()
{
	setfillstyle(SOLID_FILL,9);
	fillellipse(150,300,120,25);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(150,300,120,25);
	delay(400);
}
void f4()
{
	setfillstyle(SOLID_FILL,9);
	fillellipse(450,300,120,25);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(450,300,120,25);
	delay(400);
}
void lf1()
{
	setfillstyle(SOLID_FILL,9);
	fillellipse(120,230,80,30);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(120,230,80,30);
	delay(400);
}
void lf2()
{
	setfillstyle(SOLID_FILL,9);
	fillellipse(330,230,80,30);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(330,230,80,30);
	delay(400);
}
void lf3()
{
	setfillstyle(SOLID_FILL,9);
	fillellipse(530,230,80,30);
	delay(400);
	setfillstyle(SOLID_FILL,1);
	fillellipse(530,230,80,25);
	delay(400);
}
char ww(char in)
{
	WL
	{
		O(20,420,CC
		in=G
	}
	return in;
}
v xyz()
{
	char in1;
	while((in1=getch())!='e'&&in1!='E')
	{
		T(TF,HD,4);
		O(60,400,CC
	}
	closegraph();
}
v audience_vote(char a1[8],char a2[8],char a3[8],char a4[8])
{
	K
	I
	SB(LIGHTGRAY);
	S(BLUE);
	T(SANS_SERIF_FONT,HD,4);
	O(40,40,"For 1st Option ------");
	O(430,40,a1);
	O(40,100,"For 2nd Option ------");
	O(430,100,a2);
	O(40,160,"For 3rd Option ------");
	O(430,160,a3);
	O(40,220,"For 4th Option ------");
	O(430,220,a4);
	O(40,380,"Press Any Key To EXIT");
	G
	K
	I
}
v A()
{
	line(50,211,250,239);
	line(50,239,250,211);
}
v B()
{
	line(350,211,550,239);
	line(350,239,550,211);
}
v C()
{
	line(50,286,250,314);
	line(50,314,250,286);
}
v D()
{
	line(350,286,550,314);
	line(350,314,550,286);
}
v l_1()
{
		line(75,205,160,255);
		line(75,255,160,205);
}
v l_2()
{
		line(285,205,370,255);
		line(285,255,370,205);
}
v l_3()
{
		line(485,205,570,255);
		line(485,255,570,205);
}
v lifeline()
{
	K
	I
	SB(LIGHTGRAY);
	S(BLUE);
	E(120,230,0,360,80,30);
	E(330,230,0,360,80,30);
	E(530,230,0,360,80,30);
	line(0,230,40,230);
	line(200,230,250,230);
	line(410,230,450,230);
	line(610,230,639,230);
	T(GOTHIC_FONT,HD,3);
	O(120,40,"CHOOSE Your Lifeline !!!!");
	T(TF,HD,2);
	O(30,80,"1. Press A or 1 for 50-50");
	O(30,120,"2. Press B or 2 for Audience Vote");
	O(30,160,"3. Press C or 3 for Double dip");
	O(60,300,"Press E to EXIT Lifeline");
	T(SMALL_FONT,HD,5);
	O(65,220,"A. 50-50");
	O(275,220,"B. Audience Vote");
	O(465,220,"C. Double Dip");
}
v print()
{
	K
	I
	SB(BLUE);
	S(GREEN);
	T(TF,HD,4);
	O(100,100,"CONGRATS !!!!");
	O(80,140,"It's a correct Answer");
	O(80,260,"Press Enter To Continue");
}
v printw()
{
	K
	I
	SB(BLUE);
	S(GREEN);
	T(TF,HD,4);
	O(100,100,"SORRY !!!!");
	O(80,140,"It's a WRONG answer");
	O(80,220,"Press A To Play Again OR Any Key");
	O(80,260,"To EXIT");
}
v st(int n)
{
	SB(LIGHTMAGENTA);
	S(GREEN);
	E(300,100,0,360,240,50);
	line(300,150,150,200);
	line(300,150,450,200);
	E(150,225,0,360,120,25);
	E(450,225,0,360,120,25);
	E(150,300,0,360,120,25);
	E(450,300,0,360,120,25);
	line(270,225,285,243.25);
	line(315,281.25,330,300);
	line(330,225,315,243.25);
	line(285,281.25,270,300);
	circle(300,262.5,25);
	S(BLUE);
	T(TF,HD,5);
	O(288,237,"R");
	S(RED);
	T(SANS_SERIF_FONT,HD,5);
	O(130,1,"WELCOME TO KBC");
	S(4);
	T(TF,HD,2);
	O(20,440,"MADE BY :- ROSHAN KUMAR");
	T(SMALL_FONT,HD,9);
	S(17);
	O(20,360,"Press L For LIFELINE");
	T(SMALL_FONT,HD,5);
	S(17);
	rectangle(395,345,638,470);
	line(510,345,510,470);
	O(400,350,"Q.1 Rs 1000");
	O(400,370,"Q.2 Rs 5000");
	O(400,390,"Q.3 Rs 20,000");
	O(400,410,"Q.4 Rs 50,000");
	O(400,430,"Q.5 Rs 1 lakh");
	O(520,350,"Q.6 Rs 5 lakhs");
	O(520,370,"Q.7 Rs 10 lakhs");
	O(520,390,"Q.8 Rs 20 lakhs");
	O(520,410,"Q.9 Rs 50 lakhs");
	O(520,430,"Q.10 Rs 1 crore");
	S(6);
	switch(n)
	{
		case 1:O(400,350,"Q.1 Rs 1000");break;
		case 2:O(400,370,"Q.2 Rs 5000");break;
		case 3:O(400,390,"Q.3 Rs 20,000");break;
		case 4:O(400,410,"Q.4 Rs 50,000");break;
		case 5:O(400,430,"Q.5 Rs 1 lakh");break;
		case 6:O(520,350,"Q.6 Rs 5 lakhs");break;
		case 7:O(520,370,"Q.7 Rs 10 lakhs");break;
		case 8:O(520,390,"Q.8 Rs 20 lakhs");break;
		case 9:O(520,410,"Q.9 Rs 50 lakhs");break;
		case 10:O(520,430,"Q.10 Rs 1 crore");
	}
}
v ques9_3()
{

	char in;
	K
	I
	ques35();
	in=G
	p35:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 50 lakhs");
			G
				ques10_1();
		}
	 EIF3
		{
			printw();
			O(pp,"You Win RS 20 lakhs");

			if((in=getch())=='a'||in=='A')
			{
				structure(in-4);
			}
			else
				exit(0);
		}
      else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques9_3();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
			     r35(in);
			goto s35;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
			     r35(in);
			goto t35;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
			     r35(in);
			goto r35;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				     r35(in);
			IF2
				goto r35;
			else
				goto s35;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				     r35(in);
			IF1
				goto t35;
			else
				goto s35;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				     r35(in);
			IF1
				goto t35;
			else
				goto r35;
		}
		else
		{
			WN
				     r35(in);
			IF1
			{
				     t35:
				     lf1();
				l1=1;
				K
				I
				A();D();
				  ques35();
				     q35:
				CL
					O(20,400,LF
				if(in=='2'||in=='b'||in=='B'||in=='3'||in=='c'||in=='C')
				goto p35;
				else
				{
					O(20,420,CC
				goto q35;
				}
			}
			else IF2
			{
				     r35:
				     lf2();
				l2=1;
				audience_vote("30.24 %","13.40 %","40.46 %","15.90 %");
				  ques35();
				     w35:
				CL
					O(20,400,LF
				CL1
				goto p35;
				else
				{
					O(20,420,CC
				goto w35;
				}
			}
			else
			{
				     s35:
				     lf3();
				l3=1;
				K
				I
				  ques35();
				     v69:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 50,000");
					G
					ques10_2();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
				goto p35;
				}
				else
				{
					O(20,420,CC
				goto v69;
				}
			}
		}
	}
}
v ques8_3()
{

	char in;
	K
	I
	ques34();
	in=G
	p34:
	in=ww(in);
	IF1
		{       f1();
			print();
			O(pp,"You win RS 20 lakhs");
			G
				ques9_3();
		}
       EIF1
		{
			printw();
			O(pp,"You Win RS 10 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in-5);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques8_3();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
			     r34(in);
			goto s34;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
			     r34(in);
			goto t34;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
			     r34(in);
			goto r34;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				     r34(in);
			IF2
				goto r34;
			else
				goto s34;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				     r34(in);
			IF1
				goto t34;
			else
				goto s34;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				     r34(in);
			IF1
				goto t34;
			else
				goto r34;
		}
		else
		{
			WN
				     r34(in);
			IF1
			{
				     t34:  lf1();
				l1=1;
				K
				I
				B();C();
				  ques34();
				     q34:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='4'||in=='d'||in=='D')
				goto p34;
				else
				{
					O(20,420,CC
				goto q34;
				}
			}
			else IF2
			{
				     r34:        lf2();
				l2=1;
				audience_vote("40.24 %","33.40 %","10.46 %","15.90 %");
				  ques34();
				     w34:
				CL
					O(20,400,LF
				CL1
				goto p34;
				else
				{
					O(20,420,CC
				goto w34;
				}
			}
			else
			{
				     s34:              lf3();
				l3=1;
				K
				I
				  ques34();
				     v68:
				CL
					O(20,410,LF
				IF1
				{       f1();
					print();
					O(pp,"You win RS 50,000");
					G
					ques9_1();
				}
				EIF1
				{
					O(20,400,SW
					CL
						O(20,430,LF
				goto p34;
				}
				else
				{
					O(20,420,CC
				goto v68;
				}
			}
		}
	}
}
v ques7_3()
{

	char in;
	K
	I
	ques33();
	in=G
	p33:
	in=ww(in);
	IF2
		{       f2();
			print();
			O(pp,"You win RS 10 lakhs");
			G
				ques8_3();
		}
       IF6
		{
			printw();
			O(pp,"You Win RS 5 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in-6);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques7_3();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
			     r33(in);
			goto s33;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
			     r33(in);
			goto t33;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
			     r33(in);
			goto r33;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				     r33(in);
			IF2
				goto r33;
			else
				goto s33;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				     r33(in);
			IF1
				goto t33;
			else
				goto s33;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				     r33(in);
			IF1
				goto t33;
			else
				goto r33;
		}
		else
		{
			WN
				     r33(in);
			IF1
			{
				     t33:lf1();
				l1=1;
				K
				I
				A();C();
				  ques33();
				     q33:
				CL
					O(20,400,LF
				if(in=='2'||in=='b'||in=='B'||in=='4'||in=='d'||in=='D')
				goto p33;
				else
				{
					O(20,420,CC
				goto q33;
				}
			}
			else IF2
			{
				     r33:      lf2();
				l2=1;
				audience_vote("30.24 %","43.40 %","10.46 %","15.90 %");
				  ques33();
				     w33:
				CL
					O(20,400,LF
				CL1
				goto p33;
				else
				{
					O(20,420,CC
				goto w33;
				}
			}
			else
			{
				     s33:            lf3();
				l3=1;
				K
				I
				  ques33();
				     v67:
				CL
					O(20,410,LF
				IF2
				{       f2();
					print();
					O(pp,"You win RS 50,000");
					G
					ques8_3();
				}
				IF6
				{
					O(20,400,SW
					CL
						O(20,430,LF
				goto p33;
				}
				else
				{
					O(20,420,CC
				goto v67;
				}
			}
		}
	}
}
v ques6_3()
{

	char in;
	K
	I
	ques32();
	in=G
	p32:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 5 lakhs");
			G
				ques7_3();
		}
       EIF3
		{
			printw();
			O(pp,"You Win RS 1 lakh");

			if((in=getch())=='a'||in=='A')
			{

				structure(in-7);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques6_3();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
			     r32(in);
			goto s32;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
			     r32(in);
			goto t32;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
			     r32(in);
			goto r32;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				     r32(in);
			IF2
				goto r32;
			else
				goto s32;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				     r32(in);
			IF1
				goto t32;
			else
				goto s32;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				     r32(in);
			IF1
				goto t32;
			else
				goto r32;
		}
		else
		{
			WN
				     r32(in);
			IF1
			{
				     t32:lf1();
				l1=1;
				K
				I
				A();D();
				  ques32();
				     q32:
				CL
					O(20,400,LF
				if(in=='2'||in=='b'||in=='B'||in=='3'||in=='c'||in=='C')
				goto p32;
				else
				{
					O(20,420,CC
				goto q32;
				}
			}
			else IF2
			{
				     r32:      lf2();
				l2=1;
				audience_vote("20.24 %","23.40 %","30.46 %","25.90 %");
				  ques32();
				     w32:
				CL
					O(20,400,LF
				CL1
				goto p32;
				else
				{
					O(20,420,CC
				goto w32;
				}
			}
			else
			{
				     s32:            lf3();
				l3=1;
				K
				I
				  ques32();
				     v66:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 50,000");
					G
					ques7_2();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
				goto p32;
				}
				else
				{
					O(20,420,CC
				goto v66;
				}
			}
		}
	}
}
v ques5_3()
{

	char in;
	K
	I
	ques31();
	in=G
	p31:
	in=ww(in);
	IF2
		{       f2();
			print();
			O(pp,"You win RS 1 lakh");
			G
				ques6_3();
		}
       IF6
		{
			printw();
			O(pp,"You Win RS 50,000");

			if((in=getch())=='a'||in=='A')
			{
				structure(in-8);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques5_3();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
			     r31(in);
			goto s31;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
			     r31(in);
			goto t31;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
			     r31(in);
			goto r31;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				     r31(in);
			IF2
				goto r31;
			else
				goto s31;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				     r31(in);
			IF1
				goto t31;
			else
				goto s31;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				     r31(in);
			IF1
				goto t31;
			else
				goto r31;
		}
		else
		{
			WN
				     r31(in);
			IF1
			{
				     t31:      lf1();
				l1=1;
				K
				I
				A();C();
				  ques31();
				     q31:
				CL
					O(20,400,LF
				if(in=='2'||in=='b'||in=='B'||in=='4'||in=='d'||in=='D')
				goto p31;
				else
				{
					O(20,420,CC
				goto q31;
				}
			}
			else IF2
			{
				     r31:            lf2();
				l2=1;
				audience_vote("20.24 %","33.40 %","20.46 %","25.90 %");
				  ques31();
				     w31:
				CL
					O(20,400,LF
				CL1
				goto p31;
				else
				{
					O(20,420,CC
				goto w31;
				}
			}
			else
			{
				     s31:                  lf3();
				l3=1;
				K
				I
				  ques31();
				     v65:
				CL
					O(20,410,LF
				IF2
				{       f2();
					print();
					O(pp,"You win RS 50,000");
					G
					ques6_1();
				}
				IF6
				{
					O(20,400,SW
					CL
						O(20,430,LF
				goto p31;
				}
				else
				{
					O(20,420,CC
				goto v65;
				}
			}
		}
	}
}
v ques4_3()
{

	char in;
	K
	I
	ques30();
	in=G
	p30:
	in=ww(in);
	IF4
		{       f4();
			print();
			O(pp,"You win RS 50,000");
			G
				ques5_3();
		}
		IF5
		{
			printw();
			O(pp,"You Win RS 20,000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in-9);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques4_3();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
			     r30(in);
			goto s30;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
			     r30(in);
			goto t30;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
			     r30(in);
			goto r30;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				     r30(in);
			IF2
				goto r30;
			else
				goto s30;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				     r30(in);
			IF1
				goto t30;
			else
				goto s30;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				     r30(in);
			IF1
				goto t30;
			else
				goto r30;
		}
		else
		{
			WN
				     r30(in);
			IF1
			{
				     t30:lf1();
				l1=1;
				K
				I
				B();C();
				  ques30();
				     q30:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='4'||in=='d'||in=='D')
				goto p30;
				else
				{
					O(20,420,CC
				goto q30;
				}
			}
			else IF2
			{
				     r30:      lf2();
				l2=1;
				audience_vote("20.24 %","23.40 %","20.46 %","35.90 %");
				  ques30();
				     w30:
				CL
					O(20,400,LF
				CL1
				goto p30;
				else
				{
					O(20,420,CC
				goto w30;
				}
			}
			else
			{
				     s30:            lf3();
				l3=1;
				K
				I
				  ques30();
				     v64:
				CL
					O(20,410,LF
				IF4
				{       f4();
					print();
					O(pp,"You win RS 50,000");
					G
					ques5_3();
				}
				IF5
				{
					O(20,400,SW
					CL
						O(20,430,LF
				goto p30;
				}
				else
				{
					O(20,420,CC
				goto v64;
				}
			}
		}
	}
}
v ques3_3()
{

	char in;
	K
	I
	ques14();
	in=G
	p14:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 20,000");
			G
				ques4_3();
		}
	       EIF3
		{
			printw();
			O(pp,"You Win RS 5000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in-1);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r14(in);
			goto s14;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r14(in);
			goto t14;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r14(in);
			goto r14;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r14(in);
			IF2
				goto r14;
			else
				goto s14;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r14(in);
			IF1
				goto t14;
			else
				goto s14;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r14(in);
			IF1
				goto t14;
			else
				goto r14;
		}
		else
		{
			WN
				r14(in);
			IF1
			{
				t14:lf1();
				l1=1;
				K
				I
				D();A();
				ques14();
				q14:
				CL
					O(20,400,LF
				if(in=='2'||in=='b'||in=='B'||in=='3'||in=='c'||in=='C')
					goto p14;
				else
				{
					O(20,420,CC
					goto q14;
				}
			}
			else IF2
			{
				r14:      lf2();
				l2=1;
				audience_vote("24.24 %","23.43 %","31.43 %","20.90 %");
				ques14();
				w14:
				CL
					O(20,400,LF
				CL1
					goto p14;
				else
				{
					O(20,420,CC
					goto w14;
				}
			}
			else
			{
				s14:  lf3();
				l3=1;
				K
				I
				ques14();
				v37:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 20,000");
					G
					ques4_1();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p14;
				}
				else
				{
					O(20,420,CC
					goto v37;
				}
			}
		}
	}
}
v ques10_2()
{

	char in;
	K
	I
	ques29();
	in=G
	p29:
	in=ww(in);
	IF4
		{    vict:
		     f4();
			K
			I
			SB(BLUE);
			S(2);
			T(TF,HD,4);
			O(80,140,"It's a correct Answer");
			O(80,260,"Press A To Play Again OR Any Key");
			O(80,300,"To EXIT");
			O(pp,"You win RS 1 crore");
			O(80,220,"You Are The WINNER");
			while(!kbhit())
			{
				delay(100);
				S(14);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(2);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(3);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(4);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(5);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(15);
				O(100,100,"CONGRATS !!!!");
			}
			in=G
			if(in=='a'||in=='A')
				structure(in+8);
			else
				exit(0);
		}
		IF5
		{
			printw();
			O(pp,"You Win RS 50 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+5);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques10_2();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
			     r29(in);
			goto s29;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
			     r29(in);
			goto t29;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
			     r29(in);
			goto r29;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				     r29(in);
			IF2
				goto r29;
			else
				goto s29;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				     r29(in);
			IF1
				goto t29;
			else
				goto s29;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				     r29(in);
			IF1
				goto t29;
			else
				goto r29;
		}
		else
		{
			WN
				     r29(in);
			IF1
			{
				     t29:   lf1();
				l1=1;
				K
				I
				B();C();
				  ques29();
				     q29:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='4'||in=='d'||in=='D')
				goto p29;
				else
				{
					O(20,420,CC
				goto q29;
				}
			}
			else IF2
			{
				     r29:         lf2();
				l2=1;
				audience_vote("25.24 %","23.40 %","25.46 %","25.90 %");
				  ques29();
				     w29:
				CL
					O(20,400,LF
				CL1
				goto p29;
				else
				{
					O(20,420,CC
				goto w29;
				}
			}
			else
			{
				     s29:               lf3();
				l3=1;
				K
				I
				  ques29();
				     v63:
				CL
					O(20,410,LF
				IF4
				{
					goto vict;
				}
				IF5
				{
					O(20,400,SW
					CL
						O(20,430,LF
				goto p29;
				}
				else
				{
					O(20,420,CC
				goto v63;
				}
			}
		}
	}
}
v ques9_2()
{
	char in;
	K
	I
	ques28();
	in=G
	p28:
	in=ww(in);
	IF4
		{       f4();
			print();
			O(pp,"You win RS 50 lakhs");
			G
				ques10_2();
		}
	 IF5
		{
			printw();
			O(pp,"You Win RS 20 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+31);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques9_2();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
			     r28(in);
			goto s28;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
			     r28(in);
			goto t28;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
			     r28(in);
			goto r28;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				     r28(in);
			IF2
				goto r28;
			else
				goto s28;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				     r28(in);
			IF1
				goto t28;
			else
				goto s28;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				     r28(in);
			IF1
				goto t28;
			else
				goto r28;
		}
		else
		{
			WN
				     r28(in);
			IF1
			{
				     t28:lf1();
				l1=1;
				K
				I
				B();C();
				  ques28();
				     q28:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='4'||in=='d'||in=='D')
				goto p28;
				else
				{
					O(20,420,CC
				goto q28;
				}
			}
			else IF2
			{
				     r28:      lf2();
				l2=1;
				audience_vote("25.24 %","23.40 %","25.46 %","25.90 %");
				  ques28();
				     w28:
				CL
					O(20,400,LF
				CL1
				goto p28;
				else
				{
					O(20,420,CC
				goto w28;
				}
			}
			else
			{
				     s28:            lf3();
				l3=1;
				K
				I
				  ques28();
				     v62:
				CL
					O(20,410,LF
				IF4
				{       f4();
					print();
					O(pp,"You win RS 20 lakhs");
					G
				   ques10_1();
				}
				IF5
				{
					O(20,400,SW
					CL
						O(20,430,LF
				goto p28;
				}
				else
				{
					O(20,420,CC
				goto v62;
				}
			}
		}
	}
}
v ques8_2()
{

	char in;
	K
	I
	ques27();
	in=G
	p27:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 20 lakhs");
			G
				ques9_2();
		}
	EIF3
		{
			printw();
			O(pp,"You Win RS 10 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+4);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques8_2();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
			     r27(in);
			goto s27;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
			     r27(in);
			goto t27;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
			     r27(in);
			goto r27;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				     r27(in);
			IF2
				goto r27;
			else
				goto s27;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				     r27(in);
			IF1
				goto t27;
			else
				goto s27;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				     r27(in);
			IF1
				goto t27;
			else
				goto r27;
		}
		else
		{
			WN
				     r27(in);
			IF1
			{
				t27:lf1();
				l1=1;
				K
				I
				A();D();
				  ques27();
				     q27:
				CL
					O(20,400,LF
				if(in=='3'||in=='c'||in=='C'||in=='2'||in=='b'||in=='B')
				goto p27;
				else
				{
					O(20,420,CC
				goto q27;
				}
			}
			else IF2
			{
				     r27:  lf2();
				l2=1;
				audience_vote("25.24 %","25.40 %","28.46 %","20.90 %");
				  ques27();
				     w27:
				CL
					O(20,400,LF
				CL1
				goto p27;
				else
				{
					O(20,420,CC
				goto w27;
				}
			}
			else
			{
				     s27:        lf3();
				l3=1;
				K
				I
				  ques27();
				     v61:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 20 lakhs");
					G
				   ques9_3();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
				goto p27;
				}
				else
				{
					O(20,420,CC
				goto v61;
				}
			}
		}
	}
}
v ques7_2()
{

	char in;
	K
	I
	ques26();
	in=G
	p26:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 10 lakhs");
			G
				ques8_2();
		}
	EIF3
		{
			printw();
			O(pp,"You Win RS 5 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+6);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques7_2();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r26(in);
			goto s26;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r26(in);
			goto t26;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r26(in);
			goto r26;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r26(in);
			IF2
				goto r26;
			else
				goto s26;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r26(in);
			IF1
				goto t26;
			else
				goto s26;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r26(in);
			IF1
				goto t26;
			else
				goto r26;
		}
		else
		{
			WN
				r26(in);
			IF1
			{
				t26:lf1();
				l1=1;
				K
				I
				A();D();
				ques26();
				q26:
				CL
					O(20,400,LF
				if(in=='3'||in=='c'||in=='C'||in=='2'||in=='b'||in=='B')
					goto p26;
				else
				{
					O(20,420,CC
					goto q26;
				}
			}
			else IF2
			{
				r26:      lf2();
				l2=1;
				audience_vote("28.24 %","20.40 %","30.46 %","20.90 %");
				ques26();
				w26:
				CL
					O(20,400,LF
				CL1
					goto p26;
				else
				{
					O(20,420,CC
					goto w26;
				}
			}
			else
			{
				s26:            lf3();
				l3=1;
				K
				I
				ques26();
				v60:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 5 lakhs");
					G
					ques8_3();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p26;
				}
				else
				{
					O(20,420,CC
					goto v60;
				}
			}
		}
	}
}
v ques6_2()
{

	char in;
	K
	I
	ques25();
	in=G
	p25:
	in=ww(in);
	IF1
		{       f1();
			print();
			O(pp,"You win RS 5 lakhs");
			G
				ques7_2();
		}
	EIF1
		{
			printw();
			O(pp,"You Win RS 1 lakh");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+7);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques6_2();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r25(in);
			goto s25;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r25(in);
			goto t25;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r25(in);
			goto r25;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r25(in);
			IF2
				goto r25;
			else
				goto s25;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r25(in);
			IF1
				goto t25;
			else
				goto s25;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r25(in);
			IF1
				goto t25;
			else
				goto r25;
		}
		else
		{
			WN
				r25(in);
			IF1
			{
				t25:lf1();
				l1=1;
				K
				I
				C();D();
				ques25();
				q25:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='2'||in=='b'||in=='B')
					goto p25;
				else
				{
					O(20,420,CC
					goto q25;
				}
			}
			else IF2
			{
				r25:      lf2();
				l2=1;
				audience_vote("34.24 %","24.43 %","20.43 %","20.90 %");
				ques25();
				w25:
				CL
					O(20,400,LF
				CL1
					goto p25;
				else
				{
					O(20,420,CC
					goto w25;
				}
			}
			else
			{
				s25:            lf3();
				l3=1;
				K
				I
				ques25();
				v59:
				CL
					O(20,410,LF
				IF1
				{       f1();
					print();
					O(pp,"You win RS 5 lakhs");
					G
					ques7_3();
				}
				EIF1
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p25;
				}
				else
				{
					O(20,420,CC
					goto v59;
				}
			}
		}
	}
}
v ques5_2()
{

	char in;
	K
	I
	ques24();
	in=G
	p24:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 1 lakh");
			G
				ques6_2();
		}
	EIF3
		{
			printw();
			O(pp,"You Win RS 50,000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+8);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques5_2();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r24(in);
			goto s24;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r24(in);
			goto t24;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r24(in);
			goto r24;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r24(in);
			IF2
				goto r24;
			else
				goto s24;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r24(in);
			IF1
				goto t24;
			else
				goto s24;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r24(in);
			IF1
				goto t24;
			else
				goto r24;
		}
		else
		{
			WN
				r24(in);
			IF1
			{
				t24:lf1();
				l1=1;
				K
				I
				B();D();
				ques24();
				q24:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='3'||in=='c'||in=='C')
					goto p24;
				else
				{
					O(20,420,CC
					goto q24;
				}
			}
			else IF2
			{
				r24:      lf2();
				l2=1;
				audience_vote("24.24 %","24.43 %","30.43 %","20.90 %");
				ques24();
				w24:
				CL
					O(20,400,LF
				CL1
					goto p24;
				else
				{
					O(20,420,CC
					goto w24;
				}
			}
			else
			{
				s24:            lf3();
				l3=1;
				K
				I
				ques24();
				v58:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 1 lakh");
					G
					ques6_3();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p24;
				}
				else
				{
					O(20,420,CC
					goto v58;
				}
			}
		}
	}
}
v ques4_2()
{

	char in;
	K
	I
	ques23();
	in=G
	p23:
	in=ww(in);
	IF2
		{       f2();
			print();
			O(pp,"You win RS 50,000");
			G
				ques5_2();
		}
	  IF6
		{
			printw();
			O(pp,"You Win RS 20,000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+9);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques4_2();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r23(in);
			goto s23;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r23(in);
			goto t23;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r23(in);
			goto r23;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r23(in);
			IF2
				goto r23;
			else
				goto s23;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r23(in);
			IF1
				goto t23;
			else
				goto s23;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r23(in);
			IF1
				goto t23;
			else
				goto r23;
		}
		else
		{
			WN
				r23(in);
			IF1
			{
				t23:lf1();
				l1=1;
				K
				I
				C();D();
				ques23();
				q23:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='2'||in=='b'||in=='B')
					goto p23;
				else
				{
					O(20,420,CC
					goto q23;
				}
			}
			else IF2
			{
				r23:      lf2();
				l2=1;
				audience_vote("24.24 %","34.43 %","20.43 %","20.90 %");
				ques23();
				w23:
				CL
					O(20,400,LF
				CL1
					goto p23;
				else
				{
					O(20,420,CC
					goto w23;
				}
			}
			else
			{
				s23:            lf3();
				l3=1;
				K
				I
				ques23();
				v57:
				CL
					O(20,410,LF
				IF2
				{       f2();
					print();
					O(pp,"You win RS 50,000");
					G
					ques5_3();
				}
				IF6
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p23;
				}
				else
				{
					O(20,420,CC
					goto v57;
				}
			}
		}
	}
}
v ques3_2()
{

	char in;
	K
	I
	ques13();
	in=G
	p13:
	in=ww(in);
	IF4
		{       f4();
			print();
			O(pp,"You win RS 20,000");
			G
				ques4_2();
		}
		IF5
		{
			printw();
			O(pp,"You Win RS 5000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in-2);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r13(in);
			goto s13;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r13(in);
			goto t13;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r13(in);
			goto r13;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r13(in);
			IF2
				goto r13;
			else
				goto s13;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r13(in);
			IF1
				goto t13;
			else
				goto s13;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r13(in);
			IF1
				goto t13;
			else
				goto r13;
		}
		else
		{
			WN
				r13(in);
			IF1
			{
				t13:lf1();
				l1=1;
				K
				I
				B();A();
				ques13();
				q13:
				CL
					O(20,400,LF
				if(in=='4'||in=='d'||in=='D'||in=='3'||in=='c'||in=='C')
					goto p13;
				else
				{
					O(20,420,CC
					goto q13;
				}
			}
			else IF2
			{
				r13:      lf2();
				l2=1;
				audience_vote("24.24 %","31.43 %","11.43 %","32.90 %");
				ques13();
				w13:
				CL
					O(20,400,LF
				CL1
					goto p13;
				else
				{
					O(20,420,CC
					goto w13;
				}
			}
			else
			{
				s13:   lf3();
				l3=1;
				K
				I
				ques13();
				v36:
				CL
					O(20,410,LF
				IF4
				{       f4();
					print();
					O(pp,"You win RS 20,000");
					G
					ques4_2();
				}
				IF5
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p13;
				}
				else
				{
					O(20,420,CC
					goto v36;
				}
			}
		}
	}
}
v ques10_1()
{

	char in;
	K
	I
	ques22();
	in=G
	p22:
	in=ww(in);
	IF3
		{
			vic:
			f3();
			K
			I
			SB(BLUE);
			S(GREEN);
			T(TF,HD,4);
			O(100,100,"CONGRATS !!!!");
			O(80,140,"It's a correct Answer");
			O(80,260,"Press A To Play Again OR Any Key");
			O(80,300,"To EXIT");
			O(pp,"You win RS 1 crore");
			O(80,220,"You Are The WINNER");
			while(!kbhit())
			{
				delay(100);
				S(14);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(2);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(3);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(4);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(5);
				O(100,100,"CONGRATS !!!!");
				delay(100);
				S(15);
				O(100,100,"CONGRATS !!!!");
			}
			in=G
			if(in=='a'||in=='A')
				structure(in-2);
			else
				exit(0);
		}
	EIF3
		{
			printw();
			O(pp,"You Win RS 50 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+3);
			}
			else
				exit(0);
		}
       else
       {
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques10_1();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r22(in);
			goto s22;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r22(in);
			goto t22;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r22(in);
			goto r22;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r22(in);
			IF2
				goto r22;
			else
				goto s22;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r22(in);
			IF1
				goto t22;
			else
				goto s22;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r22(in);
			IF1
				goto t22;
			else
				goto r22;
		}
		else
		{
			WN
				r22(in);
			IF1
			{
				t22:lf1();
				l1=1;
				K
				I
				D();A();
				ques22();
				q22:
				CL
					O(20,400,LF
				if(in=='2'||in=='b'||in=='B'||in=='3'||in=='c'||in=='C')
					goto p22;
				else
				{
					O(20,420,CC
					goto q22;
				}
			}
			else IF2
			{
				r22:      lf2();
				l2=1;
				audience_vote("19.24 %","30.43 %","30.43 %","19.90 %");
				ques22();
				w22:
				CL
					O(20,400,LF
				CL1
					goto p22;
				else
				{
					O(20,420,CC
					goto w22;
				}
			}
			else
			{
				s22: lf3();
				l3=1;
				K
				I
				ques22();
				v56:
				CL
					O(20,410,LF
				IF3
				{
					goto vic;
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p22;
				}
				else
				{
					O(20,420,CC
					goto v56;
				}
			}
		}
	}
}
v ques9_1()
{

	char in;
	K
	I
	ques21();
	in=G
	p21:
	in=ww(in);
	IF1
		{       f1();
			print();
			O(pp,"You win RS 50 lakhs");
			G
				ques10_1();
		}
	EIF1
		{
			printw();
			O(pp,"You Win RS 20 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+3);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques9_1();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r21(in);
			goto s21;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r21(in);
			goto t21;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r21(in);
			goto r21;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r21(in);
			IF2
				goto r21;
			else
				goto s21;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r21(in);
			IF1
				goto t21;
			else
				goto s21;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r21(in);
			IF1
				goto t21;
			else
				goto r21;
		}
		else
		{
			WN
				r21(in);
			IF1
			{
				t21: lf1();
				l1=1;
				K
				I
				C();D();
				ques21();
				q21:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='2'||in=='b'||in=='B')
					goto p21;
				else
				{
					O(20,420,CC
					goto q21;
				}
			}
			else IF2
			{
				r21: lf2();
				l2=1;
				audience_vote("25.94 %","24.43 %","24.43 %","25.20 %");
				ques21();
				w21:
				CL
					O(20,400,LF
				CL1
					goto p21;
				else
				{
					O(20,420,CC
					goto w21;
				}
			}
			else
			{
				s21:     lf3();
				l3=1;
				K
				I
				ques21();
				v55:
				CL
					O(20,410,LF
				IF1
				{       f1();
					print();
					O(pp,"You win RS 50 lakhs");
					G
					ques10_1();
				}
				EIF1
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p21;
				}
				else
				{
					O(20,420,CC
					goto v55;
				}
			}
		}
	}
}
v ques8_1()
{

	char in;
	K
	I
	ques20();
	in=G
	p20:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 20 lakhs");
			G
				ques9_1();
		}
		EIF3
		{
			printw();
			O(pp,"You Win RS 10 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+3);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques8_1();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r20(in);
			goto s20;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r20(in);
			goto t20;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r20(in);
			goto r20;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r20(in);
			IF2
				goto r20;
			else
				goto s20;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r20(in);
			IF1
				goto t20;
			else
				goto s20;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r20(in);
			IF1
				goto t20;
			else
				goto r20;
		}
		else
		{
			WN
				r20(in);
			IF1
			{
				t20:      lf1();
				l1=1;
				K
				I
				B();A();
				ques20();
				q20:
				CL
					O(20,400,LF
				if(in=='4'||in=='d'||in=='D'||in=='3'||in=='c'||in=='C')
					goto p20;
				else
				{
					O(20,420,CC
					goto q20;
				}
			}
			else IF2
			{
				r20:lf2();
				l2=1;
				audience_vote("24.24 %","13.43 %","31.43 %","30.90 %");
				ques20();
				w20:
				CL
					O(20,400,LF
				CL1
					goto p20;
				else
				{
					O(20,420,CC
					goto w20;
				}
			}
			else
			{
				s20:   lf3();
				l3=1;
				K
				I
				ques20();
				v54:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 20 lakhs");
					G
					ques9_1();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p20;
				}
				else
				{
					O(20,420,CC
					goto v54;
				}
			}
		}
	}
}
v ques7_1()
{

	char in;
	K
	I
	ques19();
	in=G
	p19:
	in=ww(in);
	IF1
		{       f1();
			print();
			O(pp,"You win RS 10 lakhs");
			G
				ques8_1();
		}
	      EIF1
		{
			printw();
			O(pp,"You Win RS 5 lakhs");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+3);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques7_1();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r19(in);
			goto s19;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r19(in);
			goto t19;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r19(in);
			goto r19;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r19(in);
			IF2
				goto r19;
			else
				goto s19;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r19(in);
			IF1
				goto t19;
			else
				goto s19;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r19(in);
			IF1
				goto t19;
			else
				goto r19;
		}
		else
		{
			WN
				r19(in);
			IF1
			{
				t19:            lf1();
				l1=1;
				K
				I
				B();C();
				ques19();
				q19:
				CL
					O(20,400,LF
				if(in=='4'||in=='d'||in=='D'||in=='1'||in=='a'||in=='A')
					goto p19;
				else
				{
					O(20,420,CC
					goto q19;
				}
			}
			else IF2
			{
				r19:      lf2();
				l2=1;
				audience_vote("29.24 %","23.43 %","21.43 %","25.90 %");
				ques19();
				w19:
				CL
					O(20,400,LF
				CL1
					goto p19;
				else
				{
					O(20,420,CC
					goto w19;
				}
			}
			else
			{
				s19:lf3();
				l3=1;
				K
				I
				ques19();
				v53:
				CL
					O(20,410,LF
				IF1
				{       f1();
					print();
					O(pp,"You win RS 10 lakhs");
					G
					ques8_2();
				}
				EIF1
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p19;
				}
				else
				{
					O(20,420,CC
					goto v53;
				}
			}
		}
	}
}
v ques6_1()
{

	char in;
	K
	I
	ques18();
	in=G
	p18:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 5 lakhs");
			G
				ques7_1();
		}
	    EIF3
		{
			printw();
			O(pp,"You Win RS 1 lakh");
			if((in=getch())=='a'||in=='A')
			{

				structure(in+3);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques6_1();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r18(in);
			goto s18;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r18(in);
			goto t18;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r18(in);
			goto r18;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r18(in);
			IF2
				goto r18;
			else
				goto s18;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r18(in);
			IF1
				goto t18;
			else
				goto s18;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r18(in);
			IF1
				goto t18;
			else
				goto r18;
		}
		else
		{
			WN
				r18(in);
			IF1
			{
				t18:      lf1();
				l1=1;
				K
				I
				B();A();
				ques18();
				q18:
				CL
					O(20,400,LF
				if(in=='4'||in=='d'||in=='D'||in=='3'||in=='c'||in=='C')
					goto p18;
				else
				{
					O(20,420,CC
					goto q18;
				}
			}
			else IF2
			{
				r18:lf2();
				l2=1;
				audience_vote("22.24 %","11.43 %","37.43 %","28.90 %");
				ques18();
				w18:
				CL
					O(20,400,LF
				CL1
					goto p18;
				else
				{
					O(20,420,CC
					goto w18;
				}
			}
			else
			{
				s18:      lf3();
				l3=1;
				K
				I
				ques18();
				v52:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 5 lakhs");
					G
					ques7_3();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p18;
				}
				else
				{
					O(20,420,CC
					goto v52;
				}
			}
		}
	}
}
v ques5_1()
{

	char in;
	K
	I
	ques17();
	in=G
	p17:
	in=ww(in);
	IF2
		{       f2();
			print();
			O(pp,"You win RS 1 lakh");
			G
				ques6_1();
		}
	IF6
		{
			printw();
			O(pp,"You Win RS 50,000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+3);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques5_1();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r17(in);
			goto s17;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r17(in);
			goto t17;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r17(in);
			goto r17;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r17(in);
			IF2
				goto r17;
			else
				goto s17;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r17(in);
			IF1
				goto t17;
			else
				goto s17;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r17(in);
			IF1
				goto t17;
			else
				goto r17;
		}
		else
		{
			WN
				r17(in);
			IF1
			{
				t17:lf1();
				l1=1;
				K
				I
				C();A();
				ques17();
				q17:
				CL
					O(20,400,LF
				if(in=='4'||in=='d'||in=='D'||in=='2'||in=='b'||in=='B')
					goto p17;
				else
				{
					O(20,420,CC
					goto q17;
				}
			}
			else IF2
			{
				r17: lf2();
				l2=1;
				audience_vote("24.24 %","33.43 %","21.43 %","20.90 %");
				ques17();
				w17:
				CL
					O(20,400,LF
				CL1
					goto p17;
				else
				{
					O(20,420,CC
					goto w17;
				}
			}
			else
			{
				s17:         lf3();
				l3=1;
				K
				I
				ques17();
				v51:
				CL
					O(20,410,LF
				IF2
				{       f2();
					print();
					O(pp,"You win RS 1 lakh");
					G
					ques6_1();
				}
				IF6
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p17;
				}
				else
				{
					O(20,420,CC
					goto v51;
				}
			}
		}
	}
}
v ques4_1()
{

	char in;
	K
	I
	ques16();
	in=G
	p16:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 50,000");
			G
				ques5_1();
		}
	     EIF3
		{
			printw();
			O(pp,"You Win RS 20,000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+3);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1&&l2==1&&l3==1)
		{
			l_1();l_2();l_3();
			xyz();
			ques4_1();
		}
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r16(in);
			goto s16;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r16(in);
			goto t16;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r16(in);
			goto r16;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r16(in);
			IF2
				goto r16;
			else
				goto s16;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r16(in);
			IF1
				goto t16;
			else
				goto s16;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r16(in);
			IF1
				goto t16;
			else
				goto r16;
		}
		else
		{
			WN
				r16(in);
			IF1
			{
				t16:   lf1();
				l1=1;
				K
				I
				B();A();
				ques16();
				q16:
				CL
					O(20,400,LF
				if(in=='4'||in=='d'||in=='D'||in=='3'||in=='c'||in=='C')
					goto p16;
				else
				{
					O(20,420,CC
					goto q16;
				}
			}
			else IF2
			{
				r16:      lf2();
				l2=1;
				audience_vote("24.24 %","13.43 %","31.43 %","30.90 %");
				ques16();
				w16:
				CL
					O(20,400,LF
				CL1
					goto p16;
				else
				{
					O(20,420,CC
					goto w16;
				}
			}
			else
			{
				s16:lf3();
				l3=1;
				K
				I
				ques16();
				v50:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 50,000");
					G
					ques5_2();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p16;
				}
				else
				{
					O(20,420,CC
					goto v50;
				}
			}
		}
	}
}
v ques3_1()
{

	char in;
	K
	I
	ques12();
	in=G
	p12:
	in=ww(in);
	IF2
		{       f2();
			print();
			O(pp,"You win RS 20,000");
			G
				ques4_1();
		}
	       IF6
		{
			printw();
			O(pp,"You Win RS 5000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+2);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1&&l2==1)
		{
			l_1();l_2();
			WL12
				r12(in);
			goto s12;
		}
		else if(l2==1&&l3==1)
		{
			l_2();l_3();
			WL23
				r12(in);
			goto t12;
		}
		else if(l1==1&&l3==1)
		{
			l_1();l_3();
			WL13
				r12(in);
			goto r12;
		}
		else if(l1==1)
		{
			l_1();
			WL1
				r12(in);
			IF2
				goto r12;
			else
				goto s12;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r12(in);
			IF1
				goto t12;
			else
				goto s12;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r12(in);
			IF1
				goto t12;
			else
				goto r12;
		}
		else
		{
			WN
				r12(in);
			IF1
			{
				t12:             lf1();
				l1=1;
				K
				I
				D();A();
				ques12();
				q12:
				CL
					O(20,400,LF
				if(in=='2'||in=='b'||in=='B'||in=='3'||in=='c'||in=='C')
					goto p12;
				else
				{
					O(20,420,CC
					goto q12;
				}
			}
			else IF2
			{
				r12:       lf2();
				l2=1;
				audience_vote("24.24 %","33.43 %","11.43 %","30.90 %");
				ques12();
				w12:
				CL
					O(20,400,LF
				CL1
					goto p12;
				else
				{
					O(20,420,CC
					goto w12;
				}
			}
			else
			{
				s12: lf3();
				l3=1;
				K
				I
				ques12();
				v35:
				CL
					O(20,410,LF
				IF2
				{       f2();
					print();
					O(pp,"You win RS 20,000");
					G
					ques4_3();
				}
				IF6
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p12;
				}
				else
				{
					O(20,420,CC
					goto v35;
				}
			}
		}
	}
}
v ques2_1()
{

	char in;
	K
	I
	ques11();
	in=G
	p11:
	in=ww(in);
	IF4
		{       f4();
			print();
			O(pp,"You win RS 5000");
			G
				ques3_1();
		}
		IF5
		{
			printw();
			O(pp,"You Win RS 1000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+4);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1)
		{
			l_1();
			WL1
				r11(in);
			IF2
				goto r11;
			else
				goto s11;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r11(in);
			IF1
				goto t11;
			else
				goto s11;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r11(in);
			IF1
				goto t11;
			else
				goto r11;
		}
		else
		{
			WN
				r11(in);
			IF1
			{
				t11:       lf1();
				l1=1;
				K
				I
				B();C();
				ques11();
				q11:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='4'||in=='d'||in=='D')
					goto p11;
				else
				{
					O(20,420,CC
					goto q11;
				}
			}
			else IF2
			{
				r11: lf2();
				l2=1;
				audience_vote("24.12 %","24.55 %","11.73 %","39.60 %");
				ques11();
				w11:
				CL
					O(20,400,LF
				CL1
					goto p11;
				else
				{
					O(20,420,CC
					goto w11;
				}
			}
			else
			{
				s11:        lf3();
				l3=1;
				K
				I
				ques11();
				v34:
				CL
					O(20,410,LF
				IF4
				{       f4();
					print();
					O(pp,"You win RS 5000");
					G
					ques3_1();
				}
				IF5
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p11;
				}
				else
				{
					O(20,420,CC
					goto v34;
				}
			}
		}
	}
}
v ques2_2()
{

	char in;
	K
	I
	ques10();
	in=G
	p10:
	in=ww(in);
	IF2
		{       f2();
			print();
			O(pp,"You win RS 5000");
			G
				ques3_2();
		}
	   IF6
		{
			printw();
			O(pp,"You Win RS 1000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in-4);
			}
			else
				exit(0);
		}
       else
	{
		lifeline();
		if(l1==1)
		{
			l_1();
			WL1
				r10(in);
			IF2
				goto r10;
			else
				goto s10;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r10(in);
			IF1
				goto t10;
			else
				goto s10;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r10(in);
			IF1
				goto t10;
			else
				goto r10;
		}
		else
		{
			WN
				r10(in);
			IF1
			{
				t10:  lf1();
				l1=1;
				K
				I
				A();D();
				ques10();
				q10:
				CL
					O(20,400,LF
				if(in=='2'||in=='b'||in=='B'||in=='3'||in=='c'||in=='C')
					goto p10;
				else
				{
					O(20,420,CC
					goto q10;
				}
			}
			else IF2
			{
				r10:       lf2();
				l2=1;
				audience_vote("34.12 %","34.55 %","11.73 %","19.60 %");
				ques10();
				w10:
				CL
					O(20,400,LF
				CL1
					goto p10;
				else
				{
					O(20,420,CC
					goto w10;
				}
			}
			else
			{
				s10: lf3();
				l3=1;
				K
				I
				ques10();
				v33:
				CL
					O(20,410,LF
				IF2
				{       f2();
					print();
					O(pp,"You win RS 5000");
					G
					ques3_1();
				}
				IF6
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p10;
				}
				else
				{
					O(20,420,CC
					goto v33;
				}
			}
		}
	}
}
v ques2_3()
{

	char in;
	K
	I
	ques9();
	in=G
	p9:
	in=ww(in);
	IF3
		{       f3();
			print();
			O(pp,"You win RS 5000");
			G
				ques3_3();
		}
	   EIF3
		{
			printw();
			O(pp,"You Win RS 1000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in+5);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1)
		{
			l_1();
			WL1
				r9(in);
			IF2
				goto r9;
			else
				goto s9;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r9(in);
			IF1
				goto t9;
			else
				goto s9;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r9(in);
			IF1
				goto t9;
			else
				goto r9;
		}
		else
		{
			WN
				r9(in);
			IF1
			{
				t9:      lf1();
				l1=1;
				K
				I
				B();A();
				ques9();
				q9:
				CL
					O(20,400,LF
				if(in=='3'||in=='c'||in=='C'||in=='4'||in=='d'||in=='D')
					goto p9;
				else
				{
					O(20,420,CC
					goto q9;
				}
			}
			else IF2
			{
				r9:lf2();
				l2=1;
				audience_vote("14.12 %","24.55 %","41.73 %","19.60 %");
				ques9();
				w9:
				CL
					O(20,400,LF
				CL1
					goto p9;
				else
				{
					O(20,420,CC
					goto w9;
				}
			}
			else
			{
				s9:       lf3();
				l3=1;
				K
				I
				ques9();
				v32:
				CL
					O(20,410,LF
				IF3
				{       f3();
					print();
					O(pp,"You win RS 5000");
					G
					ques3_2();
				}
				EIF3
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p9;
				}
				else
				{
					O(20,420,CC
					goto v32;
				}
			}
		}
	}
}
v ques2_4()
{

	char in;
	K
	I
	ques8();
	in=G
	p8:
	in=ww(in);
	IF1
		{       f1();
			print();
			O(pp,"You win RS 5000");
			G
				ques3_1();
		}
	      EIF1
		{
			printw();
			O(pp,"You Win RS 1000");

			if((in=getch())=='a'||in=='A')
			{

				structure(in-5);
			}
			else
				exit(0);
		}
	else
	{
		lifeline();
		if(l1==1)
		{
			l_1();
			WL1
				r8(in);
			IF2
				goto r8;
			else
				goto s8;
		}
		else if(l2==1)
		{
			l_2();
			WL2
				r8(in);
			IF1
				goto t8;
			else
				goto s8;
		}
		else if(l3==1)
		{
			l_3();
			WL3
				r8(in);
			IF1
				goto t8;
			else
				goto r8;
		}
		else
		{
			WN
				r8(in);
			IF1
			{
				t8: lf1();
				l1=1;
				K
				I
				B();D();
				ques8();
				q8:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='3'||in=='c'||in=='C')
					goto p8;
				else
				{
					O(20,420,CC
					goto q8;
				}
			}
			else IF2
			{
				r8:         lf2();
				l2=1;
				audience_vote("39.12 %","19.55 %","16.73 %","24.60 %");
				ques8();
				w8:
				CL
					O(20,400,LF
				CL1
					goto p8;
				else
				{
					O(20,420,CC
					goto w8;
				}
			}
			else
			{
				s8:   lf3();
				l3=1;
				K
				I
				ques8();
				v31:
				CL
					O(20,410,LF
				IF1
				{       f1();
					print();
					O(pp,"You win RS 5000");
					G
					ques3_2();
				}
				EIF1
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto p8;
				}
				else
				{
					O(20,420,CC
					goto v31;
				}
			}
		}
	}
}
v ques1_2()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 What is the Parliament name of America ?");
	O(a,"A. Congress");
	O(b,"B. Diat");
	O(c,"C. Yuan");
	O(d,"D. Peoples Assembly");
}
v ques1_3()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 Who wrote the book 'The Discovery of India ?");
	O(a,"A. Premchand");
	O(b,"B. Mahatama Gandhi");
	O(c,"C. Pt. Jwahar Lal Nehru");
	O(d,"D. Ravindra Nath Tagore");
}
v ques1_4()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 What is the capital of Sri lanka ?");
	O(a,"A. Dhaka");
	O(b,"B. Colombo");
	O(c,"C. Ankara");
	O(d,"D. Baghdad");
}
v ques1_5()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 Who is the first President of India ?");
	O(a,"A. Dr. Rajendra Prasad");
	O(b,"B. Pt. Jawahar Lal Nehru");
	O(c,"C. Indira Gandhi");
	O(d,"D. Jakir Hussain");
}
v ques1_6()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 How many ring does Olympic logo have ?");
	O(a,"A. 2");
	O(b,"B. 3");
	O(c,"C. 4");
	O(d,"D. 5");
}
v ques1_7()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 Which country is called as BLUE Elephant ?");
	O(a,"A. America");
	O(b,"B. Thailand");
	O(c,"C. England");
	O(d,"D. Russia");
}
v ques1_8()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 What was the old name of Chennai ?");
	O(a,"A. Patliputra");
	O(b,"B. Madras");
	O(c,"C. Bihar");
	O(d,"D. Jharkhand");
}
v ques1_9()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 Who was not a Railway Minister ?");
	O(a,"A. Mamta Banerjee");
	O(b,"B. Lal Bahadur Shastri");
	O(c,"C. Geeta Mukherjee");
	O(d,"D. George Frandis");
}
/*v ques1_10()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 What is the Currency of Japan ?");
	O(a,"A. Dollar");
	O(b,"B. Zen");
	O(c,"C. Jen");
	O(d,"D. Yen");
}*/
v ques1_19()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 Who was the first women Prime Minister of India ?");
	O(a,"A. Indira Gandhi");
	O(b,"B. Suchita Kriplani");
	O(c,"C. Pratibha Patil");
	O(d,"D. Kalpana Chawla");
}
v main()
{
	char ch;
	clrscr();
	ch=s_page();
	structure(ch);
	G
	K
}
v ques1_1()
{
	S(9);
	T(DF,HD,1);
	O(qq,"Q.1 What is the mother tongue of India ?");
	O(a,"A. Hindi");
	O(b,"B. Oriya");
	O(c,"C. Bengali");
	O(d,"D. Urdu");
}
v structure(char ch)
{
	char in,n;
	l1=0;l2=0;l3=0;
	I
	st(1);
	if(ch=='c'||ch=='C'||ch=='1'||ch=='o'||ch=='O'||ch=='p'||ch=='P')
	{
		ques1_1();
		in=G
		Y:
		in=ww(in);
		IF1
		{
			f1();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_1();
		 }
		EIF1
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+2);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_1();
				B();C();
				V:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='4'||in=='d'||in=='D')
					goto Y;
				else
				{
					O(20,420,CC
					goto V;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("56.45 %","24.55 %","9.40 %","9.60 %");
				st(1);
				ques1_1();
				U:
				CL
					O(20,400,LF
				CL1
					goto Y;
				else
				{
					O(20,420,CC
					goto U;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_1();
				W:
				CL
					O(20,410,LF
				IF1
				{
					f1();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_2();
				}
				else if(in=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto Y;
				}
				else
				{
					O(20,420,CC
					goto W;
				}
			}
		}
	}
	else if(ch=='x'||ch=='X'||ch=='2'||ch=='k'||ch=='K'||ch=='l'||ch=='L')
	{
		ques1_2();
		in=G
		y1:
		in=ww(in);
		IF1
		{
			f1();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_2();
		}
		EIF1
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+1);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_2();
				B();D();
				V1:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='3'||in=='c'||in=='C')
					goto y1;
				else
				{
					O(20,420,CC
					goto V1;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("46.55 %","30.45 %","13.42 %","9.58 %");
				st(1);
				ques1_2();
				U1:
				CL
					O(20,400,LF
				CL1
					goto y1;
				else
				{
					O(20,420,CC
					goto U1;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_2();
				W1:
				CL
					O(20,410,LF
				IF1
				{
					f1();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_3();
				}
				else if(in=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y1;
				}
				else
				{
					O(20,420,CC
					goto W1;
				}
			}
		}
	}
	else if(ch=='q'||ch=='Q'||ch=='3'||ch=='j'||ch=='J'||ch=='h'||ch=='H')
	{
		ques1_3();
		in=G
		y2:
		in=ww(in);
		IF3
		{
			f3();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_3();
		}
		else if(in=='2'||in=='b'||in=='B'||in=='1'||in=='4'||in=='A'||in=='a'||in=='d'||in=='D')
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+3);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_3();
				B();D();
				V2:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='3'||in=='c'||in=='C')
					goto y2;
				else
				{
					O(20,420,CC
					goto V2;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("26.55 %","20.45 %","43.42 %","9.58 %");
				st(1);
				ques1_2();
				U2:
				CL
					O(20,400,LF
				CL1
					goto y2;
				else
				{
					O(20,420,CC
					goto U2;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_3();
				W2:
				CL
					O(20,410,LF
				IF3
				{
					f3();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_4();
				}
				else if(in=='2'||in=='b'||in=='B'||in=='1'||in=='4'||in=='a'||in=='A'||in=='d'||in=='D')
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y2;
				}
				else
				{
					O(20,420,CC
					goto W2;
				}
			}
		}
	}
	else if(ch=='w'||ch=='W'||ch=='4'||ch=='n'||ch=='N'||ch=='m'||ch=='M')
	{
		ques1_4();
		in=G
		y3:
		in=ww(in);
		IF2
		{
			f2();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_4();
		}
		IF6
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+2);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_4();
				C();D();
				V3:
				CL
					O(20,400,"Sorry !! Only One Lifeline At A Time..");
				if(in=='1'||in=='a'||in=='A'||in=='2'||in=='b'||in=='B')
					goto y3;
				else
				{
					O(20,420,CC
					goto V3;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("36.55 %","40.45 %","13.42 %","9.58 %");
				st(1);
				ques1_4();
				U3:
				CL
					O(20,400,"Sorry !! Only One Lifeline At A Time..");
				CL1
					goto y3;
				else
				{
					O(20,420,CC
					goto U3;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_4();
				W3:
				CL
					O(20,410,LF
				IF2
				{
					f2();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_1();
				}
				IF6
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y3;
				}
				else
				{
					O(20,420,CC
					goto W3;
				}
			}
		}
	}
	else if(ch=='e'||ch=='E'||ch=='5'||ch=='z'||ch=='Z'||ch=='v'||ch=='V')
	{
		ques1_5();
		in=G
		y4:
		in=ww(in);
		IF1
		{
			f1();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_1();
		}
		EIF1
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+2);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_5();
				C();D();
				V4:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='2'||in=='b'||in=='B')
					goto y4;
				else
				{
					O(20,420,CC
					goto V4;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("46.55 %","30.45 %","13.42 %","9.58 %");
				st(1);
				ques1_5();
				U4:
				CL
					O(20,400,LF
				CL1
					goto y3;
				else
				{
					O(20,420,CC
					goto U4;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_5();
				W4:
				CL
					O(20,410,LF
				IF1
				{
					f1();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_2();
				}
				else if(in=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y4;
				}
				else
				{
					O(20,420,CC
					goto W4;
				}
			}
		}
	}
	else if(ch=='r'||ch=='R'||ch=='6'||ch=='b'||ch=='B'||ch=='a'||ch=='A')
	{
		ques1_6();
		in=G
		y5:
		in=ww(in);
		IF4
		{
			f4();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_3();
		}
		IF5
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+2);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_6();
				C();A();
				V5:
				CL
					O(20,400,LF
				if(in=='4'||in=='d'||in=='D'||in=='2'||in=='b'||in=='B')
					goto y5;
				else
				{
					O(20,420,CC
					goto V5;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("26.55 %","20.45 %","13.42 %","39.58 %");
				st(1);
				ques1_6();
				U5:
				CL
					O(20,400,LF
				CL1
					goto y5;
				else
				{
					O(20,420,CC
					goto U5;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_6();
				W5:
				CL
					O(20,410,LF
				IF4
				{
					f4();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_4();
				}
				else if(in=='1'||in=='a'||in=='A'||in=='3'||in=='2'||in=='c'||in=='C'||in=='b'||in=='B')
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y5;
				}
				else
				{
					O(20,420,CC
					goto W5;
				}
			}
		}
	}
	else if(ch=='t'||ch=='T'||ch=='7'||ch=='s'||ch=='S')
	{
		ques1_7();
		in=G
		y6:
		in=ww(in);
		IF2
		{
			f2();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_1();
		}
		IF6
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+2);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_7();
				C();D();
				V6:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='2'||in=='b'||in=='B')
					goto y6;
				else
				{
					O(20,420,CC
					goto V6;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("36.55 %","40.45 %","13.42 %","9.58 %");
				st(1);
				ques1_7();
				U6:
				CL
					O(20,400,LF
				CL1
					goto y6;
				else
				{
					O(20,420,CC
					goto U6;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_7();
				W6:
				CL
					O(20,410,LF
				IF2
				{
					f2();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_2();
				}
				IF6
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y6;
				}
				else
				{
					O(20,420,CC
					goto W6;
				}
			}
		}
	}
	else if(ch=='y'||ch=='Y'||ch=='8'||ch=='d'||ch=='D'||ch=='i')
	{
		ques1_8();
		in=G
		y7:
		in=ww(in);
		IF2
		{
			f2();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_2();
		}
		IF6
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+2);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_8();
				C();D();
				V7:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='2'||in=='b'||in=='B')
					goto y7;
				else
				{
					O(20,420,CC
					goto V7;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("36.55 %","40.45 %","13.42 %","9.58 %");
				st(1);
				ques1_8();
				U7:
				CL
					O(20,400,LF
				CL1
					goto y7;
				else
				{
					O(20,420,CC
					goto U7;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_8();
				W7:
				CL
					O(20,410,LF
				IF2
				{
					f2();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_3();
				}
				IF6
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y7;
				}
				else
				{
					O(20,420,CC
					goto W7;
				}
			}
		}
	}
	else if(ch=='u'||ch=='U'||ch=='9'||ch=='f'||ch=='F'||ch=='0')
	{
		ques1_9();
		in=G
		y8:
		in=ww(in);
		IF3
		{
			f3();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_4();
		}
		else if(in=='2'||in=='b'||in=='B'||in=='1'||in=='4'||in=='a'||in=='A'||in=='d'||in=='D')
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+2);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_9();
				B();D();
				V8:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='3'||in=='c'||in=='C')
					goto y8;
				else
				{
					O(20,420,CC
					goto V8;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("31.55 %","20.45 %","38.42 %","9.58 %");
				st(1);
				ques1_9();
				U8:
				CL
					O(20,400,LF
				CL1
					goto y8;
				else
				{
					O(20,420,CC
					goto y8;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_9();
				W8:
				CL
					O(20,410,LF
				IF3
				{
					f3();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_1();
				}
				else if(in=='1'||in=='a'||in=='A'||in=='2'||in=='4'||in=='b'||in=='B'||in=='d'||in=='D')
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y8;
				}
				else
				{
					O(20,420,CC
					goto W8;
				}
			}
		}
	}
	/*else if(ch=='i'||ch=='0'||ch=='I'||ch=='g'||ch=='G')
	{
		ques1_10();
		in=G
		y9:
		in=ww(in);
		IF4
		{
			f4();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_1();
		}
		IF5
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{
				structure(ch+2);
			}
			else
				exit(0);
		 }
		 else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_10();
				C();B();
				V9:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='4'||in=='d'||in=='D')
					goto y9;
				else
				{
					O(20,420,CC
					goto V9;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("20.55 %","30.45 %","13.42 %","35.58 %");
				st(1);
				ques1_10();
				U9:
				CL
					O(20,400,LF
				CL1
					goto y9;
				else
				{
					O(20,420,CC
					goto U9;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_10();
				W9:
				CL
					O(20,410,LF
				IF4
				{
					f4();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_2();
				}
				else if(in=='1'||in=='a'||in=='A'||in=='3'||in=='2'||in=='c'||in=='C'||in=='b'||in=='B')
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y9;
				}
				else
				{
					O(20,420,CC
					goto W9;
				}
			}
		}
	}*/
	else
	{
		ques1_19();
		in=G
		y19:
		in=ww(in);
		IF1
		{
			f1();
			print();
			O(pp,"You win RS 1000");
			G
			ques2_3();
		}
		else if(in=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{

			printw();
			O(pp,"You Win RS 0");
			if((n=getch())=='a'||n=='A')
			{

				SB(BLUE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else
		{
			in=check(ch);
			IF1
			{       lf1();
				l1=1;
				K
				I
				st(1);
				ques1_19();
				C();B();
				V19:
				CL
					O(20,400,LF
				if(in=='1'||in=='a'||in=='A'||in=='4'||in=='d'||in=='D')
					goto y19;
				else
				{
					O(20,420,CC
					goto V19;
				}
			}
			else IF2
			{       lf2();
				l2=1;
				audience_vote("40.55 %","30.45 %","13.42 %","15.58 %");
				st(1);
				ques1_19();
				U19:
				CL
					O(20,400,LF
				CL1
					goto y19;
				else
				{
					O(20,420,CC
					goto U19;
				}
			}
			else
			{       lf3();
				l3=1;
				K
				I
				st(1);
				ques1_19();
				W19:
				CL
					O(20,410,LF
				IF1
				{
					f1();
					print();
					O(pp,"You win RS 1000");
					G
					ques2_4();
				}
				else if(in=='4'||in=='d'||in=='D'||in=='3'||in=='2'||in=='c'||in=='C'||in=='b'||in=='B')
				{
					O(20,400,SW
					CL
						O(20,430,LF
					goto y19;
				}
				else
				{
					O(20,420,CC
					goto W19;
				}
			}
		}
	}
}
char s_page()
{

	char ch1;
	I
	SB(BLUE);
	S(GREEN);
	T(GOTHIC_FONT,HD,5);
	O(120,40,"WELCOME TO");
	O(190,120,"KAUN");
	O(170,200,"BANEGA");
	O(130,280,"CROREPATI");
	S(RED);
	T(TF,HD,3);
	O(80,450,"MADE BY :- ROSHAN KUMAR");
	S(12);
	T(SANS_SERIF_FONT,HD,4);
	O(50,360,"Press any key to start the Game KBC");
	while(!kbhit())
	{
		sound(137);
		delay(100);
		sound(145);
		delay(100);
		sound(155);
		delay(100);
		sound(166);
		delay(100);
		sound(176);
		delay(100);
		sound(185);
		delay(100);
		sound(195);
		delay(100);
		sound(207);
		delay(100);
		sound(220);
		delay(100);
		sound(235);
		delay(100);
		sound(260);
		delay(100);
		sound(275);
		delay(100);
		sound(290);
		delay(100);
		sound(311);
		delay(100);
		sound(333);
		delay(100);
		sound(350);
		delay(100);
	}
	nosound();
	ch1=G
	K
	return ch1;
}
char check(char ch)
{
	char in;
	lifeline();
	while((in=getch())!='1'&&in!='a'&&in!='A'&&in!='2'&&in!='b'&&in!='B'&&in!='3'&&in!='c'&&in!='C')
	{
		IFE
		{
			K
			structure(ch);
		}
		T(TF,HD,4);
		O(60,400,CC
	}
	return(in);
}
v ques11()
{
	st(2);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.2 Which sport is the National sport of Japan ?");
	O(a,"A. Hockey");
	O(b,"B. Cricket");
	O(c,"C. Football");
	O(d,"D. Judo");
}
v ques10()
{
	st(2);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.2 Who got first Bharat Ratna award ?");
	O(a,"A. Subhash Ch. Bose");
	O(b,"B. Sarvpalli Radha Krishna");
	O(c,"C. Jakir Hussain");
	O(d,"D. Indira Gandhi");
}
v ques9()
{
	st(2);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.2 What is the smallest unit of classification ?");
	O(a,"A. Kingdoms");
	O(b,"B. Phylum");
	O(c,"C. Species");
	O(d,"D. Sironus");
}
v ques8()
{
	st(2);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.2 Who discovered Centrosome ?");
	O(a,"A. Bobery");
	O(b,"B. Baron");
	O(c,"C. Spencer");
	O(d,"D. Darwin");
}
v ques12()
{
	st(3);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.3 Which force is needed to make an object travel in a");
	O(100,105,"circular path ?");
	O(a,"A. Gravitational force");
	O(b,"B. Centripetal force");
	O(c,"C. Magnetic force");
	O(d,"D. Contact force");
}
v ques13()
{
	st(3);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.3 Which is not a header file in C++ ?");
	//O(100,105,"circular path ?");
	O(a,"A. graphics.h");
	O(b,"B. conio.h");
	O(c,"C. iostream.h");
	O(d,"D. stdio.h");
}
v ques14()
{
	st(3);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.3 What is the chemical formula of kiscerite ?");
	//O(100,105,"circular path ?");
	O(a,"A. MgSO4.7H2O");
	O(b,"B. MgCO3.CaCO3");
	O(c,"C. MgSO4.H2O");
	O(d,"D. MgCO3");
}
v ques43()
{
	st(10);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.10 One Days of Moon is equal to how many days of");
	O(100,105,"earth ?");
	O(a,"A. 14");
	O(b,"B. 12");
	O(c,"C. 15");
	O(d,"D. 13");
}
v ques35()
{
	st(9);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.9 Who was the first Muslim manager of Indian National");
	O(100,105,"Congress ?");
	O(a,"A. Nagendra sinha");
	O(b,"B. Hasrat Mohani");
	O(c,"C. Budruddin Tayeb");
	O(d,"D. Abdul kalam azad");
}
v ques34()
{
	st(8);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.8 Which river of india flow down in Arabian sea");
	//O(100,105,"and non living thing ?");
	O(a,"A. Narmada");
	O(b,"B. Tapi");
	O(c,"C. Brahamputra");
	O(d,"D. Ganga");
}
v ques33()
{
	st(7);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.7 Which state has largest production of grain in India?");
	O(a,"A. Haryana");
	O(b,"B. Punjab");
	O(c,"C. Jharkhand");
	O(d,"D. Kerala");
}
v ques32()
{
	st(6);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.6 What is the full form of OMR ?");
	O(a,"A. Optical Marker Reader");
	O(b,"B. Optic Mark Reader");
	O(c,"C. Optical Mark Reader");
	O(d,"D. Optic Marker Reader");
}
v ques31()
{
	st(5);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.5 Who won the first miss world in India ?");
	O(a,"A. Sushmita Sen");
	O(b,"B. Rumari Rita Pharia");
	O(c,"C. Aishwariya Rai");
	O(d,"D. Hema Malini");
}
v ques30()
{
	st(4);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.4 Which is not a Hardware ?");
	O(a,"A. Monitor");
	O(b,"B. CPU");
	O(c,"C. Mouse");
	O(d,"D. Microsoft Office");
}
v ques29()
{
	st(10);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.10 The cartesian system named in honour of_____ ?");
	O(a,"A. Leibnitz");
	O(b,"B. Euclid");
	O(c,"C. Laplace");
	O(d,"D. Rene Descartes");
}
v ques28()
{
	st(9);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.9 Which party was formed by hitler ?");
	O(a,"A. Congress party");
	O(b,"B. GJP");
	O(c,"C. BJP");
	O(d,"D. Nazi party");
}
v ques27()
{
	st(8);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.8 Which city has the biggest railway station in world ?");
	//O(100,105,"and non living thing ?");
	O(a,"A. Kolkata");
	O(b,"B. Kharagpur");
	O(c,"C. Newyork");
	O(d,"D. Hong kong");
}
v ques26()
{
	st(7);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.7 Which state has the largest area in India ?");
	O(a,"A. Chhatisgarh");
	O(b,"B. Madhya pradesh");
	O(c,"C. Rajasthan");
	O(d,"D. Orissa");
}
v ques25()
{
	st(6);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.6 What is the full form of DOS ?");
	O(a,"A. Disk Operating System");
	O(b,"B. Desk Operating System");
	O(c,"C. Disk Oriented System");
	O(d,"D. Desk Oriented System");
}
v ques24()
{
	st(5);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.5 In which city first atom bomb was planted ?");
	O(a,"A. Turkey");
	O(b,"B. California");
	O(c,"C. Herosima");
	O(d,"D. Agra");
}
v ques23()
{
	st(4);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.4 What is the chemical formula of Zinc Sulphate ?");
	O(a,"A. ZnSO4");
	O(b,"B. ZnSO4.7H2O");
	O(c,"C. ZnSO3");
	O(d,"D. ZnSO4.5H2O");
}
v ques22()
{

	st(10);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.10 Which road is the biggest road ?");
	O(a,"A. Four way road");
	O(b,"B. Track road");
	O(c,"C. Grand track road");
	O(d,"D. Gandhi road");
}
v ques21()
{
	st(9);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.9 What was the name of kerala before independence ?");
	O(a,"A. Traban core cochin");
	O(b,"B. Madras");
	O(c,"C. Kurela");
	O(d,"D. Sonepur");
}
v ques20()
{
	st(8);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.8 Which microorganism is said to be both living");
	O(100,105,"and non living thing ?");
	O(a,"A. Bacteria");
	O(b,"B. Fungi");
	O(c,"C. Virus");
	O(d,"D. Protozoa");
}
v ques19()
{
	st(7);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.7 Which oxide of water is called as heavy water ?");
	O(a,"A. D2O");
	O(b,"B. H2O");
	O(c,"C. B2O");
	O(d,"D. T2O");
}
v ques18()
{
	st(6);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.6 What is the full form of VDU ?");
	O(a,"A. Virtual Display Unit");
	O(b,"B. Virtual Desk Unit");
	O(c,"C. Visual Display Unit");
	O(d,"D. Visual Desk Unit");
}
v ques17()
{
	st(5);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.5 Who was the first Prime Minister of China ?");
	O(a,"A. Herosima");
	O(b,"B. Dr. sanyath sen");
	O(c,"C. George washington");
	O(d,"D. Robert whittaker");
}
v ques16()
{
	st(4);
	S(9);
	T(DF,HD,1);
	O(qq,"Q.4 Which is not a computer language ?");
	O(a,"A. C++");
	O(b,"B. Pascal");
	O(c,"C. php");
	O(d,"D. Basic");
}
v r8(char in)
{
	IFE
	{
		K
		ques2_4();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r9(char in)
{
	IFE
	{
		K
		ques2_3();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r10(char in)
{
	IFE
	{
		K
		ques2_2();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r11(char in)
{
	IFE
	{
		K
		ques2_1();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r12(char in)
{
	IFE
	{
		K
		ques3_1();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r13(char in)
{
	IFE
	{
		K
		ques3_2();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r14(char in)
{
	IFE
	{
		K
		ques3_3();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r16(char in)
{
	IFE
	{
		K
		ques4_1();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r17(char in)
{
	IFE
	{
		K
		ques5_1();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r18(char in)
{
	IFE
	{
		K
		ques6_1();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r19(char in)
{
	IFE
	{
		K
		ques7_1();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r20(char in)
{
	IFE
	{
		K
		ques8_1();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r21(char in)
{
	IFE
	{
		K
		ques9_1();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r22(char in)
{
	IFE
	{
		K
		ques10_1();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r23(char in)
{
	IFE
	{
		K
		ques4_2();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r24(char in)
{
	IFE
	{
		K
		ques5_2();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r25(char in)
{
	IFE
	{
		K
		ques6_2();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r26(char in)
{
	IFE
	{
		K
		ques7_2();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r27(char in)
{
	IFE
	{
		K
		ques8_2();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r28(char in)
{
	IFE
	{
		K
		ques9_2();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r29(char in)
{
	IFE
	{
		K
		ques10_2();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r30(char in)
{
	IFE
	{
		K
		ques4_3();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r31(char in)
{
	IFE
	{
		K
		ques5_3();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r32(char in)
{
	IFE
	{
		K
		ques6_3();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r33(char in)
{
	IFE
	{
		K
		ques7_3();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r34(char in)
{
	IFE
	{
		K
		ques8_3();
	}
	T(TF,HD,4);
	O(60,400,CC
}
v r35(char in)
{
	IFE
	{
		K
		ques9_3();
	}
	T(TF,HD,4);
	O(60,400,CC
}

