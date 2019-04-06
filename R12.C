			/*KAUN BANEGA CROREPATI*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void ques1_1();
void structure(char);
char s_page();
void st()
{
	setbkcolor(WHITE);
	setcolor(GREEN);
	ellipse(300,100,0,360,240,50);
	line(300,150,150,200);
	line(300,150,450,200);
	ellipse(150,225,0,360,120,25);
	ellipse(450,225,0,360,120,25);
	ellipse(150,300,0,360,120,25);
	ellipse(450,300,0,360,120,25);
	line(270,225,285,243.25);
	line(315,281.25,330,300);
	line(330,225,315,243.25);
	line(285,281.25,270,300);
	circle(300,262.5,25);
	setcolor(BLUE);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(288,237,"R");
	setcolor(RED);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
	outtextxy(140,2,"WELCOME TO KBC");
	setcolor(4);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
	outtextxy(20,400,"MADE BY :- ROSHAN RAHUL");
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
}
void ques10_3()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.10 What is the name of parliament in Turkey ?");
	outtextxy(60,220,"A. Grand people assembly");
	outtextxy(370,220,"B. Fedral Assembly");
	outtextxy(60,295,"C. National people assembly");
	outtextxy(370,295,"D. Grand national assembly");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1 crore");
			outtextxy(80,220,"You Are The WINNER");
			outtextxy(80,260,"Press any key to EXIT");
			if((in=getch())=='a')
				exit(0);
			else
				exit(0);
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 50 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in-3);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques10_3();
		}
}
void ques9_3()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.9 Who was the first Muslim manager of Indian National");
	outtextxy(100,105,"Congress ?");
	outtextxy(60,220,"A. Nagendra sinha");
	outtextxy(370,220,"B. Hasrat Mohani");
	outtextxy(60,295,"C. Budruddin Tayeb");
	outtextxy(370,295,"D. Abdul kalam azad");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 50 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques10_3();
			else
				ques10_3();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 20 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in-4);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques9_3();
		}
}
void ques8_3()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.8 Which river of india flow down in Arabian sea");
	//outtextxy(100,105,"and non living thing ?");
	outtextxy(60,220,"A. Narmada");
	outtextxy(370,220,"B. Tapi");
	outtextxy(60,295,"C. Brahamputra");
	outtextxy(370,295,"D. Ganga");
	if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 20 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques9_3();
			else
				ques9_3();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='3'||in=='d'||in=='D'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 10 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in-5);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques8_3();
		}
}
void ques7_3()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.7 Which state has largest production of grain in India?");
	outtextxy(60,220,"A. Haryana");
	outtextxy(370,220,"B. Punjab");
	outtextxy(60,295,"C. Jharkhand");
	outtextxy(370,295,"D. Kerala");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 10 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques8_3();
			else
				ques8_3();
		}
		else if((in=getch())=='1'||in=='a'||in=='A'||in=='4'||in=='3'||in=='d'||in=='D'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 5 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in-6);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques7_3();
		}
}
void ques6_3()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.6 What is the full form of OMR ?");
	outtextxy(60,220,"A. Optical Marker Reader");
	outtextxy(370,220,"B. Optic Mark Reader");
	outtextxy(60,295,"C. Optical Mark Reader");
	outtextxy(370,295,"D. Optic Marker Reader");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques7_3();
			else
				ques7_3();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1 lakh");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in-7);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques6_3();
		}
}
void ques5_3()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.5 Who won the first miss world in India ?");
	outtextxy(60,220,"A. Sushmita Sen");
	outtextxy(370,220,"B. Rumari Rita Pharia");
	outtextxy(60,295,"C. Aishwariya Rai");
	outtextxy(370,295,"D. Hema Malini");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1 lakh");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques6_3();
			else
				ques6_3();
		}
		else if((in=getch())=='3'||in=='c'||in=='C'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 50,000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in-8);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques5_3();
		}
}
void ques4_3()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.4 Which is not a Hardware ?");
	outtextxy(60,220,"A. Monitor");
	outtextxy(370,220,"B. CPU");
	outtextxy(60,295,"C. Mouse");
	outtextxy(370,295,"D. Microsoft Office");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 50,000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques5_3();
			else
				ques5_3();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 20,000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in-9);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques4_3();
		}
}
void ques3_3()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.3 What is the chemical formula of kiscerite ?");
	//outtextxy(100,105,"circular path ?");
	outtextxy(60,220,"A. MgSO4.7H2O");
	outtextxy(370,220,"B. MgCO3.CaCO3");
	outtextxy(60,295,"C. MgSO4.H2O");
	outtextxy(370,295,"D. MgCO3");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 20,000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques4_3();
			else
				ques4_3();
		}
		else if((in=getch())=='4'||in=='d'||in=='D'||in=='2'||in=='1'||in=='b'||in=='B'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 5000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in-10);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques3_3();
		}
}
void ques10_2()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.10 The cartesian system named in honour of_____ ?");
	outtextxy(60,220,"A. Leibnitz");
	outtextxy(370,220,"B. Euclid");
	outtextxy(60,295,"C. Laplace");
	outtextxy(370,295,"D. Rene Descartes");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1 crore");
			outtextxy(80,220,"You Are The WINNER");
			outtextxy(80,260,"Press any key to EXIT");
			if((in=getch())=='a')
				exit(0);
			else
				exit(0);
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 50 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+5);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques10_2();
		}
}
void ques9_2()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.9 Which party was formed by hitler ?");
	outtextxy(60,220,"A. Congress party");
	outtextxy(370,220,"B. GJP");
	outtextxy(60,295,"C. BJP");
	outtextxy(370,295,"D. Nazi party");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 50 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques10_2();
			else
				ques10_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='1'||in=='3'||in=='a'||in=='A'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 20 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+31);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques9_2();
		}
}
void ques8_2()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.8 Which city has the biggest railway station in world ?");
	//outtextxy(100,105,"and non living thing ?");
	outtextxy(60,220,"A. Kolkata");
	outtextxy(370,220,"B. Kharagpur");
	outtextxy(60,295,"C. Newyork");
	outtextxy(370,295,"D. Hong kong");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 20 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques9_2();
			else
				ques9_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 10 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+4);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques8_2();
		}
}
void ques7_2()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.7 Which state has the largest area in India ?");
	outtextxy(60,220,"A. Chhatisgarh");
	outtextxy(370,220,"B. Madhya pradesh");
	outtextxy(60,295,"C. Rajasthan");
	outtextxy(370,295,"D. Orissa");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 10 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques8_2();
			else
				ques8_2();
		}
		else if((in=getch())=='1'||in=='a'||in=='A'||in=='4'||in=='3'||in=='d'||in=='D'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 5 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+6);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques7_2();
		}
}
void ques6_2()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.6 What is the full form of DOS ?");
	outtextxy(60,220,"A. Disk Operating System");
	outtextxy(370,220,"B. Desk Operating System");
	outtextxy(60,295,"C. Disk Oriented System");
	outtextxy(370,295,"D. Desk Oriented System");
	if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques7_2();
			else
				ques7_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='3'||in=='d'||in=='D'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1 lakh");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+7);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques6_2();
		}
}
void ques5_2()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.5 In which city first atom bomb was planted ?");
	outtextxy(60,220,"A. Turkey");
	outtextxy(370,220,"B. California");
	outtextxy(60,295,"C. Herosima");
	outtextxy(370,295,"D. Agra");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1 lakh");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques6_2();
			else
				ques6_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 50,000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+8);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques5_2();
		}
}
void ques4_2()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.4 What is the chemical formula of Zinc Sulphate ?");
	outtextxy(60,220,"A. ZnSO4");
	outtextxy(370,220,"B. ZnSO4.7H2O");
	outtextxy(60,295,"C. ZnSO3");
	outtextxy(370,295,"D. ZnSO4.5H2O");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 50,000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques5_2();
			else
				ques5_2();
		}
		else if((in=getch())=='3'||in=='c'||in=='C'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 20,000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+9);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques4_2();
		}
}
void ques3_2()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.3 Which is not a header file in C++ ?");
	//outtextxy(100,105,"circular path ?");
	outtextxy(60,220,"A. graphics.h");
	outtextxy(370,220,"B. conio.h");
	outtextxy(60,295,"C. iostream.h");
	outtextxy(370,295,"D. stdio.h");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 20,000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques4_2();
			else
				ques4_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 5000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in-2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques3_2();
		}
}
void ques10_1()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.10 Which road is the biggest road ?");
	outtextxy(60,220,"A. Four way road");
	outtextxy(370,220,"B. Track road");
	outtextxy(60,295,"C. Grand track road");
	outtextxy(370,295,"D. Gandhi road");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1 crore");
			outtextxy(80,220,"You Are The WINNER");
			outtextxy(80,260,"Press any key to EXIT");
			if((in=getch())=='a')
				exit(0);
			else
				exit(0);
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 50 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+3);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques10_1();
		}
}
void ques9_1()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.9 What was the name of kerala before independence ?");
	outtextxy(60,220,"A. Traban core cochin");
	outtextxy(370,220,"B. Madras");
	outtextxy(60,295,"C. Kurela");
	outtextxy(370,295,"D. Sonepur");
	if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 50 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques10_1();
			else
				ques10_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='3'||in=='d'||in=='D'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 20 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+3);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques9_1();
		}
}
void ques8_1()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.8 Which microorganism is said to be both living");
	outtextxy(100,105,"and non living thing ?");
	outtextxy(60,220,"A. Bacteria");
	outtextxy(370,220,"B. Fungi");
	outtextxy(60,295,"C. Virus");
	outtextxy(370,295,"D. Protozoa");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 20 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques9_1();
			else
				ques9_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 10 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+3);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques8_1();
		}
}
void ques7_1()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.7 Which oxide of water is called as heavy water ?");
	outtextxy(60,220,"A. D2O");
	outtextxy(370,220,"B. H2O");
	outtextxy(60,295,"C. B2O");
	outtextxy(370,295,"D. T2O");
	if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 10 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques8_1();
			else
				ques8_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='3'||in=='d'||in=='D'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 5 lakhs");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+3);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques7_1();
		}
}
void ques6_1()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.6 What is the full form of VDU ?");
	outtextxy(60,220,"A. Virtual Display Unit");
	outtextxy(370,220,"B. Virtual Desk Unit");
	outtextxy(60,295,"C. Visual Display Unit");
	outtextxy(370,295,"D. Visual Desk Unit");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5 lakhs");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques7_1();
			else
				ques7_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1 lakh");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+3);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques6_1();
		}
}
void ques5_1()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.5 Who was the first Prime Minister of China ?");
	outtextxy(60,220,"A. Herosima");
	outtextxy(370,220,"B. Dr. sanyath sen");
	outtextxy(60,295,"C. George washington");
	outtextxy(370,295,"D. Robert whittaker");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1 lakh");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques6_1();
			else
				ques6_1();
		}
		else if((in=getch())=='3'||in=='c'||in=='C'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 50,000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+3);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques5_1();
		}
}
void ques4_1()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.4 Which is not a computer language ?");
	outtextxy(60,220,"A. C++");
	outtextxy(370,220,"B. Pascal");
	outtextxy(60,295,"C. php");
	outtextxy(370,295,"D. Basic");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 50,000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques5_1();
			else
				ques5_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 20,000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+3);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques4_1();
		}
}
void ques3_1()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.3 Which force is needed to make an object travel in a");
	outtextxy(100,105,"circular path ?");
	outtextxy(60,220,"A. Gravitational force");
	outtextxy(370,220,"B. Centripetal force");
	outtextxy(60,295,"C. Magnetic force");
	outtextxy(370,295,"D. Contact force");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 20,000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques4_1();
			else
				ques4_1();
		}
		else if((in=getch())=='4'||in=='d'||in=='D'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 5000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques3_1();
		}
}
void ques2_1()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Which sport is the National sport of Japan ?");
	outtextxy(60,220,"A. Hockey");
	outtextxy(370,220,"B. Cricket");
	outtextxy(60,295,"C. Football");
	outtextxy(370,295,"D. Judo");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_1();
			else
				ques3_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_1();
		}
}
void ques2_2()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Who got first Bharat Ratna award ?");
	outtextxy(60,220,"A. Subhash Ch. Bose");
	outtextxy(370,220,"B. Sarvpalli Radha Krishna");
	outtextxy(60,295,"C. Jakir Hussain");
	outtextxy(370,295,"D. Indira Gandhi");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_2();
			else
				ques3_2();
		}
		else if((in=getch())=='4'||in=='d'||in=='D'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_2();
		}
}
void ques2_3()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 What is the smallest unit of classification ?");
	outtextxy(60,220,"A. Kingdoms");
	outtextxy(370,220,"B. Phylum");
	outtextxy(60,295,"C. Species");
	outtextxy(370,295,"D. Sironus");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_3();
			else
				ques3_3();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_3();
		}
}
void ques2_4()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Who discovered Centrosome ?");
	outtextxy(60,220,"A. Bobery");
	outtextxy(370,220,"B. Baron");
	outtextxy(60,295,"C. Spencer");
	outtextxy(370,295,"D. Darwin");
	if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_1();
			else
				ques3_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_4();
		}
}
void ques2_5()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 What is the chemical formula of ethyl alcohol ?");
	outtextxy(60,220,"A. CH6H2O14");
	outtextxy(370,220,"B. H2O3");
	outtextxy(60,295,"C. NaCl");
	outtextxy(370,295,"D. CH3CH2OH");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_1();
			else
				ques3_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_5();
		}
}
void ques2_6()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Who was the first women king of britishers ?");
	outtextxy(60,220,"A. Victoria");
	outtextxy(370,220,"B. Zen");
	outtextxy(60,295,"C. Kalpana");
	outtextxy(370,295,"D. Suchita");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_2();
			else
				ques3_2();
		}
		else if((in=getch())=='4'||in=='d'||in=='D'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_6();
		}
}
void ques2_7()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Which city is known as pop city ?");
	outtextxy(60,220,"A. Rome");
	outtextxy(370,220,"B. Paris");
	outtextxy(60,295,"C. Newyork");
	outtextxy(370,295,"D. Cuba");
	if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_3();
			else
				ques3_3();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_7();
		}
}
void ques2_8()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Who first discovered Gravitational force ?");
	outtextxy(60,220,"A. Archimedes");
	outtextxy(370,220,"B. Alexander");
	outtextxy(60,295,"C. Newton");
	outtextxy(370,295,"D. Herbet spencer");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_2();
			else
				ques3_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_8();
		}
}
void ques2_9()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Who wrote Prem vatika ?");
	outtextxy(60,220,"A. Anand");
	outtextxy(370,220,"B. Mulkraj");
	outtextxy(60,295,"C. Vishnu sharma");
	outtextxy(370,295,"D. Raskhan");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_1();
			else
				ques3_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_9();
		}
}
void ques2_10()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Who won the first dada saheb falke award ?");
	outtextxy(60,220,"A. Devika rani rorik");
	outtextxy(370,220,"B. Prithvi raj kapoor");
	outtextxy(60,295,"C. Amitabh bachhan");
	outtextxy(370,295,"D. Yash chopra");
	if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_2();
			else
				ques3_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_10();
		}
}
void ques2_11()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 In which year the second world war end ?");
	outtextxy(60,220,"A. 1914");
	outtextxy(370,220,"B. 1945");
	outtextxy(60,295,"C. 1939");
	outtextxy(370,295,"D. 1918");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_3();
			else
				ques3_3();
		}
		else if((in=getch())=='4'||in=='d'||in=='D'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_11();
		}
}
void ques2_12()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 In which year the world Bank was established ?");
	outtextxy(60,220,"A. 1914");
	outtextxy(370,220,"B. 1945");
	outtextxy(60,295,"C. 1939");
	outtextxy(370,295,"D. 1918");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_3();
			else
				ques3_3();
		}
		else if((in=getch())=='4'||in=='d'||in=='D'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_12();
		}
}
void ques2_13()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 TASS news agency is located in which country ?");
	outtextxy(60,220,"A. Russia");
	outtextxy(370,220,"B. Italy");
	outtextxy(60,295,"C. India");
	outtextxy(370,295,"D. Germany");
	if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_1();
			else
				ques3_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_13();
		}
}
void ques2_14()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 In which does opera house is located ?");
	outtextxy(60,220,"A. Paris");
	outtextxy(370,220,"B. Agra");
	outtextxy(60,295,"C. Mexico");
	outtextxy(370,295,"D. Sydney");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_2();
			else
				ques3_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_14();
		}
}
void ques2_15()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 What is the symbol of Turkey ?");
	outtextxy(60,220,"A. Lion");
	outtextxy(370,220,"B. Eagle");
	outtextxy(60,295,"C. Water");
	outtextxy(370,295,"D. Moon-star");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_3();
			else
				ques3_3();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_15();
		}
}
void ques2_16()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Which is the smallest country in the world ?");
	outtextxy(60,220,"A. Mexico city");
	outtextxy(370,220,"B. Vatican city");
	outtextxy(60,295,"C. Magadascar");
	outtextxy(370,295,"D. Kenya");
	if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_1();
			else
				ques3_1();
		}
		else if((in=getch())=='4'||in=='d'||in=='D'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_16();
		}
}
void ques2_17()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Which is the world first religion ?");
	outtextxy(60,220,"A. Hindu");
	outtextxy(370,220,"B. Muslim");
	outtextxy(60,295,"C. Sanatan");
	outtextxy(370,295,"D. Sikh");
	if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_1();
			else
				ques3_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='4'||in=='1'||in=='d'||in=='D'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_17();
		}
}
void ques2_18()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Which is the first Indian nuclear reactor ?");
	outtextxy(60,220,"A. Apsara");
	outtextxy(370,220,"B. Natraj");
	outtextxy(60,295,"C. Reynolds");
	outtextxy(370,295,"D. Agni");
	if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_2();
			else
				ques3_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_18();
		}
}
void ques2_19()
{
	int gd=DETECT,gm;
	char in;
	closegraph();
	initgraph(&gd,&gm,"");
	st();
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.2 Who wrote the book 'The origin of species' ?");
	outtextxy(60,220,"A. Newton");
	outtextxy(370,220,"B. Herbert spencer");
	outtextxy(60,295,"C. Gallelio");
	outtextxy(370,295,"D. Charles Darwin");
	if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 5000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques3_2();
			else
				ques3_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 1000");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((in=getch())=='a'||in=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(in);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			ques2_19();
		}
}
void ques1_2()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 What is the Parliament name of America ?");
	outtextxy(60,220,"A. Congress");
	outtextxy(370,220,"B. Diat");
	outtextxy(60,295,"C. Yuan");
	outtextxy(370,295,"D. Peoples Assembly");
}
void ques1_3()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Who wrote the book 'The Discovery of India ?");
	outtextxy(60,220,"A. Premchand");
	outtextxy(370,220,"B. Mahatama Gandhi");
	outtextxy(60,295,"C. Pt. Jwahar Lal Nehru");
	outtextxy(370,295,"D. Ravindra Nath Tagore");
}
void ques1_4()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 What is the capital of Sri lanka ?");
	outtextxy(60,220,"A. Dhaka");
	outtextxy(370,220,"B. Colombo");
	outtextxy(60,295,"C. Ankara");
	outtextxy(370,295,"D. Baghdad");
}
void ques1_5()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Who is the first President of India ?");
	outtextxy(60,220,"A. Dr. Rajendra Prasad");
	outtextxy(370,220,"B. Pt. Jawahar Lal Nehru");
	outtextxy(60,295,"C. Indira Gandhi");
	outtextxy(370,295,"D. Jakir Hussain");
}
void ques1_6()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 How many ring does Olympic logo have ?");
	outtextxy(60,220,"A. 2");
	outtextxy(370,220,"B. 3");
	outtextxy(60,295,"C. 4");
	outtextxy(370,295,"D. 5");
}
void ques1_7()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Which country is called as white Elephant ?");
	outtextxy(60,220,"A. America");
	outtextxy(370,220,"B. Thailand");
	outtextxy(60,295,"C. England");
	outtextxy(370,295,"D. Russia");
}
void ques1_8()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 What was the old name of Chennai ?");
	outtextxy(60,220,"A. Patliputra");
	outtextxy(370,220,"B. Madras");
	outtextxy(60,295,"C. Bihar");
	outtextxy(370,295,"D. Jharkhand");
}
void ques1_9()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Who was not a Railway Minister ?");
	outtextxy(60,220,"A. Mamta Banerjee");
	outtextxy(370,220,"B. Lal Bahadur Shastri");
	outtextxy(60,295,"C. Geeta Mukherjee");
	outtextxy(370,295,"D. George Frandis");
}
void ques1_10()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 What is the Currency of Japan ?");
	outtextxy(60,220,"A. Dollar");
	outtextxy(370,220,"B. Zen");
	outtextxy(60,295,"C. Jen");
	outtextxy(370,295,"D. Yen");
}
void ques1_11()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Who was the mother of Rama in Ramayana ?");
	outtextxy(60,220,"A. Kousalya");
	outtextxy(370,220,"B. Kaikei");
	outtextxy(60,295,"C. Sumithra");
	outtextxy(370,295,"D. Manthara");
}
void ques1_12()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 When did the first world war was started ?");
	outtextxy(60,220,"A. 1934");
	outtextxy(370,220,"B. 1914");
	outtextxy(60,295,"C. 1945");
	outtextxy(370,295,"D. 1947");
}

void ques1_13()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Which is the Indian National Flower ?");
	outtextxy(60,220,"A. Sunflower");
	outtextxy(370,220,"B. Rose");
	outtextxy(60,295,"C. Tiger lilly");
	outtextxy(370,295,"D. Lotus");
}
void ques1_14()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Which of these is not a Ocean ?");
	outtextxy(60,220,"A. Arabian");
	outtextxy(370,220,"B. Indian");
	outtextxy(60,295,"C. Pacific");
	outtextxy(370,295,"D. Atlantic");
}
void ques1_15()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Who was the first women indian rulers ?");
	outtextxy(60,220,"A. Razia Sultan");
	outtextxy(370,220,"B. Laxmibai");
	outtextxy(60,295,"C. Victoria");
	outtextxy(370,295,"D. Indira Gandhi");
}
void ques1_16()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Which is the first Wholly Synthetic fibre ?");
	outtextxy(60,220,"A. Rayon");
	outtextxy(370,220,"B. Wool");
	outtextxy(60,295,"C. Nylon");
	outtextxy(370,295,"D. Teflon");
}
void ques1_17()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Who built Taj Mahal ?");
	outtextxy(60,220,"A. Babar");
	outtextxy(370,220,"B. Akbar");
	outtextxy(60,295,"C. Himayun");
	outtextxy(370,295,"D. Shah Jahan");
}
void ques1_18()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Which is the largest continent in the World ?");
	outtextxy(60,220,"A. Africa");
	outtextxy(370,220,"B. Asia");
	outtextxy(60,295,"C. Europe");
	outtextxy(370,295,"D. Antartica");
}
void ques1_19()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 Who was the first women Prime Minister of India ?");
	outtextxy(60,220,"A. Indira Gandhi");
	outtextxy(370,220,"B. Suchita Kriplani");
	outtextxy(60,295,"C. Pratibha Patil");
	outtextxy(370,295,"D. Kalpana Chawla");
}
void main()
{
	int gd=DETECT,gm;
	char ch;
	clrscr();
	ch=s_page();
	initgraph(&gd,&gm,"");
	setbkcolor(WHITE);
	structure(ch);
	getch();
	closegraph();
}
void ques1_1()
{
	setcolor(9);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(70,90,"Q.1 What is the mother tongue of India ?");
	outtextxy(60,220,"A. Hindi");
	outtextxy(370,220,"B. Oriya");
	outtextxy(60,295,"C. Bengali");
	outtextxy(370,295,"D. Urdu");
}
void structure(char ch)
{
	int gd=DETECT,gm;
	char in,n;
	setcolor(GREEN);
	ellipse(300,100,0,360,240,50);
	line(300,150,150,200);
	line(300,150,450,200);
	ellipse(150,225,0,360,120,25);
	ellipse(450,225,0,360,120,25);
	ellipse(150,300,0,360,120,25);
	ellipse(450,300,0,360,120,25);
	line(270,225,285,243.25);
	line(315,281.25,330,300);
	line(330,225,315,243.25);
	line(285,281.25,270,300);
	circle(300,262.5,25);
	setcolor(BLUE);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(288,237,"R");
	setcolor(RED);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
	outtextxy(140,2,"WELCOME TO KBC");
	setcolor(4);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
	outtextxy(20,400,"MADE BY :- ROSHAN RAHUL");
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
	if(ch=='c'||ch=='C'||ch=='1')
	{
		ques1_1();
		if((in=getch())=='1'||in=='a'||in=='A')
		{
			floodfill(151,226,RED);
			delay(10000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_1();
			else
				ques2_1();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='x'||ch=='X'||ch=='2')
	{
		ques1_2();
		if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_2();
			else
				ques2_2();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+1);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='q'||ch=='Q'||ch=='3')
	{
		ques1_3();
		if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_3();
			else
				ques2_3();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='1'||in=='4'||in=='A'||in=='a'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+3);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='w'||ch=='W'||ch=='4')
	{
		ques1_4();
		if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_4();
			else
				ques2_4();
		}
		else if((in=getch())=='1'||in=='a'||in=='A'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='e'||ch=='E'||ch=='5')
	{
		ques1_5();
		if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_5();
			else
				ques2_5();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='r'||ch=='R'||ch=='6')
	{
		ques1_6();
		if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_6();
			else
				ques2_6();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='t'||ch=='T'||ch=='7')
	{
		ques1_7();
		if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_7();
			else
				ques2_7();
		}
		else if((in=getch())=='1'||in=='a'||in=='A'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='y'||ch=='Y'||ch==8)
	{
		ques1_8();
		if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_8();
			else
				ques2_8();
		}
		else if((in=getch())=='1'||in=='a'||in=='A'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='u'||ch=='U'||ch=='9')
	{
		ques1_9();
		if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_9();
			else
				ques2_9();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='1'||in=='4'||in=='a'||in=='A'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='i'||ch=='0')
	{
		ques1_10();
		if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_10();
			else
				ques2_10();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='o'||ch=='O'||ch=='p'||ch=='P')
	{
		ques1_11();
		if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_11();
			else
				ques2_11();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='a'||ch=='s'||ch=='A'||ch=='S')
	{
		ques1_12();
		if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_12();
			else
				ques2_12();
		}
		else if((in=getch())=='1'||in=='a'||in=='A'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='d'||ch=='f'||ch=='D'||ch=='F')
	{
		ques1_13();
		if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_13();
			else
				ques2_13();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='g'||ch=='G'||ch=='h'||ch=='H')
	{
		ques1_14();
		if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_14();
			else
				ques2_14();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='j'||ch=='J'||ch=='k'||ch=='K')
	{
		ques1_15();
		if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_15();
			else
				ques2_15();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='l'||ch=='L'||ch=='z'||ch=='Z')
	{
		ques1_16();
		if((in=getch())=='3'||in=='c'||in=='C')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_16();
			else
				ques2_16();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='1'||in=='4'||in=='a'||in=='A'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='v'||ch=='V'||ch=='b'||ch=='B')
	{
		ques1_17();
		if((in=getch())=='4'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_17();
			else
				ques2_17();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='1'||in=='c'||in=='C'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else if(ch=='n'||ch=='N'||ch=='m'||ch=='M')
	{
		ques1_18();
		if((in=getch())=='2'||in=='b'||in=='B')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_18();
			else
				ques2_18();
		}
		else if((in=getch())=='1'||in=='a'||in=='A'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
	else
	{
		ques1_19();
		if((in=getch())=='1'||in=='a'||in=='A')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"CONGRATS !!!!");
			outtextxy(80,140,"It's a correct Answer");
			outtextxy(80,180,"You win RS 1000");
			outtextxy(80,220,"Press Enter To Continue");
			if((in=getch())=='a')
				ques2_19();
			else
				ques2_19();
		}
		else if((in=getch())=='2'||in=='b'||in=='B'||in=='3'||in=='4'||in=='c'||in=='C'||in=='d'||in=='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"SORRY !!!!");
			outtextxy(80,140,"It's a WRONG answer");
			outtextxy(80,180,"You Win RS 0");
			outtextxy(80,220,"Press A To Play Again OR Any Key");
			outtextxy(80,260,"To EXIT");
			if((n=getch())=='a'||n=='A')
			{
				closegraph();
				initgraph(&gd,&gm,"");
				setbkcolor(WHITE);
				structure(ch+2);
			}
			else
				exit(0);
		}
		else if((in=getch())!='1'||in!='a'||in!='A'||in!='2'||in!='b'||in!='B'||in!='3'||in!='c'||in!='C'||in!='4'||in!='d'||in!='D')
		{
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(BLUE);
			setcolor(GREEN);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(100,100,"Please Enter Correct Choice");
			delay(2000);
			closegraph();
			initgraph(&gd,&gm,"");
			setbkcolor(WHITE);
			structure(ch);
		}
	}
}
char s_page()
{
	int gd=DETECT,gm;
	char ch1;
	initgraph(&gd,&gm,"");
	setbkcolor(WHITE);
	setcolor(GREEN);
	settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
	outtextxy(120,40,"WELCOME TO");
	outtextxy(190,120,"KAUN");
	outtextxy(170,200,"BANEGA");
	outtextxy(130,280,"CROREPATI");
	setcolor(RED);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	outtextxy(80,450,"MADE BY :- ROSHAN KUMAR");
	setcolor(12);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
	outtextxy(50,360,"Press any key to start the Game KBC");
	while(!kbhit())
	{
	sound(150);
	delay(50);
	sound(160);
	delay(100/2);
	sound(170);
	delay(100/2);
	sound(180);
	delay(100/2);
	sound(150);
	delay(100/2);
	sound(160);
	delay(100/2);
	sound(170);
	delay(100/2);
	sound(180);
	delay(100/2);
	sound(150);
	delay(100/2);
	sound(160);
	delay(100/2);
	sound(170);
	delay(100/2);
	sound(180);
	delay(100/2);
	sound(160);
	delay(100/2);
	sound(170);
	delay(100/2);
	sound(180);
	delay(100/2);
	sound(150);
	delay(100/2);
	sound(160);
	delay(100/2);
	sound(170);
	delay(100/2);
	sound(180);
	}
	nosound();
	ch1=getch();
	closegraph();
	return ch1;
}