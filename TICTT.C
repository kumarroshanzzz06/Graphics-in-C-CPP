#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void start_page();
void input_page();
int status ();
void game_page ();
void fill ();
char p1_name[50],p2_name[50];
int c1,c2,a1[9],a[3][3]={3,4,5,6,7,8,9,10,11};
char chh;
int main()
{
	char c,ch[2];
	int i,j,k;
	int gd=DETECT,gm;
	X:
	k=3;
	start_page ();
	input_page();
	game_page();

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(3);
	setcolor(4);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	outtextxy(100,180,"press y to play again");
	outtextxy(220,250,"OR");
	outtextxy(100,320,"Any other key to quit");
	fflush(stdin);

	while((c=getch())=='y' || c=='Y')
	{
		closegraph();
		for(i=0;i<9;i++){a1[i]=0;}
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
				a[i][j]=k++;
		goto X;
	}
		closegraph();
		return 0;

}
void start_page()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(3);
	setcolor(4);
	//settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(120,80,"!!!!!!!!!  LET US  !!!!!!!");
	setcolor(5);
	outtextxy(120,120,"!!!!!!!!!  PLAY !!!!!!!!!");
	setcolor(14);
	outtextxy(120,160,"!!!  TIC - TAC - TOE  !!!");
	outtextxy(120,300,"PLEASE  ENTER TO CONTINUE");
	getch ();
	closegraph();
}
void input_page()
{
	int i=0,k=0;

	char kolor[2]={'\0'};
	char ch;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(3);
	setcolor(4);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(60,40,"Enter your name and choose a Colour");
	setcolor(BLUE);outtextxy(140,80,"FOR  BLUE PRESS 1");
	setcolor(GREEN);outtextxy(140,120,"FOR GREEN PRESS 2");
	setcolor(LIGHTCYAN);outtextxy(140,160,"FOR  CYAN PRESS 3");
	setcolor(RED);outtextxy(140,200,"FOR   RED PRESS 4");
	setcolor(4);
	//name player1
	outtextxy(40,240,"PLAYER1-> ENTER YOUR NAME: ");
	fflush(stdin);
	while((ch=getch()) !=13 || (p1_name[0]=='\0'))
	{
	      if(ch==8)
	      {
	       setcolor(3);outtextxy(480,240,p1_name);

	       setcolor(4);
	       p1_name[i-1]='\0';i--;if(i<0){i=0;}

	       outtextxy(480,240,p1_name);
	       continue;
	      }
	      if(!((ch>='a' && ch<='z')||(ch>='A' && ch <='Z')))
	      {
		continue;  //backspace ASCII code is 8
	      }
	      else
	      {
	      p1_name[i++]=ch;//l++;
	      p1_name[i]='\0';
	      }
	      outtextxy(480,240,p1_name);

	}
	//end name player 1

	//colour player 1
	outtextxy(40,280,"PLAYER1-> CHOOSE YOUR COLOUR: ");
	fflush(stdin);
	while(k==0)
	{
		ch=getch();
		if(ch==8)
		{
		setcolor(3);outtextxy(500,280,kolor);setcolor(4);k=0;kolor[k]='\0';
		setcolor(3);outtextxy(50,400,"WRONG CHOICE OF COLOUR ENTER AGAIN");setcolor(4);
		continue;
		}
		if(!(ch<='4' && ch>='1'))
		{
		setcolor(3);outtextxy(500,280,kolor);setcolor(4);
		kolor[k++]=ch;kolor[k]='\0';outtextxy(500,280,kolor);
		outtextxy(50,400,"WRONG CHOICE OF COLOUR ENTER AGAIN");
		k=0;continue;
		}
		else
		{
		setcolor(3);outtextxy(500,280,kolor);outtextxy(50,400,"WRONG CHOICE OF COLOUR ENTER AGAIN");setcolor(4);
		kolor[k++]=ch;
		kolor[k]='\0';
		outtextxy(500,280,kolor);
		c1=atoi(kolor);
		}

		if((ch=getch())==8)
		{
		setcolor(3);outtextxy(500,280,kolor);setcolor(4);
		k=0;kolor[k]='\0';
		outtextxy(500,280,kolor);continue;
		}

	}
	//end colour player1
	//name player 2
	outtextxy(40,320,"PLAYER2-> ENTER YOUR NAME: ");
	fflush(stdin);
	i=0;k=0;
	while(((ch=getch()) !=13 )||(p2_name[0]=='\0'))
	{
	      if(ch==8)
	      {
	       setcolor(3);outtextxy(480,320,p2_name);setcolor(4);
	       p2_name[i-1]='\0';i--;if(i<0){i=0;}
	       outtextxy(480,320,p2_name);
	       continue;
	      }
	      if(!((ch>='a' && ch<='z')||(ch>='A' && ch <='Z')))
	      {
		continue;  //backspace ASCII code is 8
	      }
	      else
	      {
	      p2_name[i]=ch;
	      p2_name[i+1]='\0';
	      }
	      outtextxy(480,320,p2_name);
	      i++;
	}
	//end name player2

	//colour player2
	outtextxy(40,360,"PLAYER2-> CHOOSE YOUR COLOUR: ");
	//B:
	fflush(stdin);
	while(k==0)
	{
		ch=getch();
		if(ch==8)
		{
		setcolor(3);outtextxy(500,360,kolor);setcolor(4);k=0;kolor[k]='\0';
		setcolor(3);outtextxy(50,400,"WRONG CHOICE OF COLOUR ENTER AGAIN");setcolor(4);
		continue;
		}
		if(!(ch<='4' && ch>='1'))
		{
		setcolor(3);outtextxy(500,360,kolor);setcolor(4);
		kolor[k++]=ch;kolor[k]='\0';outtextxy(500,360,kolor);
		outtextxy(50,400,"WRONG CHOICE OF COLOUR ENTER AGAIN");
		k=0;continue;
		}
		else
		{
		setcolor(3);outtextxy(500,360,kolor);outtextxy(50,400,"WRONG CHOICE OF COLOUR ENTER AGAIN");setcolor(4);
		kolor[k++]=ch;kolor[k]='\0';outtextxy(500,360,kolor);
		c2=atoi(kolor);
			if(c2==c1)
			{
				outtextxy(50,400,"WRONG CHOICE OF COLOUR ENTER AGAIN");
				k=0;continue;
			}
		}
		if((ch=getch())==8)
		{
		setcolor(3);outtextxy(500,360,kolor);setcolor(4);
		k=0;kolor[k]='\0';
		outtextxy(500,360,kolor);continue;
		}

	}
	//end colour player2
	closegraph();
}
int status(void)
{
	int i,j;
	setcolor(WHITE);
	setlinestyle(SOLID_LINE, 4, 3);
	for(i=0,j=0;i<3;i++,j+=50)
	{
		if(a[i][0]==a[i][1] && a[i][1]==a[i][2])
		{
			line(160,175+j,290,175+j);
			return a[i][0];
		}
	}
	for(i=0,j=0;i<3;i++,j+=50)
	{
		if(a[0][i]==a[1][i] && a[1][i]==a[2][i])
		{
			line(175+j,160,175+j,290);
			return a[0][i];
		}
	}
	if(a[0][0]==a[1][1] && a[1][1]==a[2][2])
	{
			line(150,150,300,300);
			return a[0][0];
	}
	if(a[0][2]==a[1][1] && a[1][1]==a[2][0])
	{
			line(300,150,150,300);
			return a[0][2];
	}

	return 0;
}

/*function to fill the rectangle*/

void fill(int p,int q) /* P is box no and q is color choosed by player*/
{

	setfillstyle(SOLID_FILL, q);
	switch(p)
	{
		case 1:
			floodfill(160,160,6);
			break;
		case 2:
			floodfill(210,160,6);
			break;
		case 3:
			floodfill(260,160,6);
			break;
		case 4:
			floodfill(160,210,6);
			break;
		case 5:
			floodfill(210,210,6);
			break;
		case 6:
			floodfill(260,210,6);
			break;
		case 7:
			floodfill(160,260,6);
			break;
		case 8:
			floodfill(210,260,6);
			break;
		case 9:
			floodfill(260,260,6);
			break;
	}

}

void game_page()
{
	int gd=DETECT,gm,z=1,s=0,i;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(10);
	setcolor(6);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(125,65,"!!!CHOOSE YOUR SQUARE NO!!!" );
	settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	outtextxy(125,85,"!!!TIC TAC TOE!!!" );
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	rectangle(150,150,200,200);
	outtextxy(175,175,"1");
	rectangle(200,150,250,200);
	outtextxy(225,175,"2");
	rectangle(250,150,300,200);
	outtextxy(275,175,"3");
	rectangle(150,200,200,250);
	outtextxy(175,225,"4");
	rectangle(200,200,250,250);
	outtextxy(225,225,"5");
	rectangle(250,200,300,250);
	outtextxy(275,225,"6");
	rectangle(150,250,200,300);
	outtextxy(175,275,"7");
	rectangle(200,250,250,300);
	outtextxy(225,275,"8");
	rectangle(250,250,300,300);
	outtextxy(275,275,"9");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	while(z<=9)
	{
		Y:
		if(z%2!=0)
		{
			setcolor(10);
			outtextxy(100,350,"move for: ");
			outtextxy(350,350,p2_name);
			outtextxy(100,400,"Your colour is:");
			setcolor(6);
			outtextxy(100,350,"move for: ");
			outtextxy(350,350,p1_name);
			outtextxy(100,430,"Your colour is:");
			setfillstyle(SOLID_FILL, c1);rectangle(350,426,390,446);floodfill(355,430,6);
			fflush(stdin);chh=getch();fflush(stdin);
		}
		else
		{
			setcolor(10);
			outtextxy(100,350,"move for: ");
			outtextxy(350,350,p1_name);
			outtextxy(100,430,"Your colour is:");
			setcolor(6);
			outtextxy(100,350,"move for: ");
			outtextxy(350,350,p2_name);
			outtextxy(100,430,"Your colour is:");
			setfillstyle(SOLID_FILL, c2);rectangle(350,426,390,446);floodfill(355,430,6);
			fflush(stdin);chh=getch ();fflush(stdin);
		}
		X:
		a1[z-1]=chh-48;
		setcolor(10);outtextxy(100,375,"position already filled reenter  :");setcolor(6);
		for(i=0;i<z-1;i++)
		{
			if(a1[i]==chh-48)
			{
				outtextxy(100,375,"position already filled reenter  :");
				fflush(stdin);chh=getch ();fflush(stdin);
				goto X;
			}
		}
		setcolor(10);outtextxy(20,20,"PLEASE SELECT A VALID RECTANGLE");setcolor(6);
		switch(chh)
		 {
		  case '1' : if(z%2!=0)
				{  a[0][0]=1;
				fill(1,c1);
				}
			       else
			       {
				a[0][0]=2;
				fill(1,c2);
				}
				break;
		    case '2' : if(z%2!=0)
				{
				 a[0][1]=1;
				 fill(2,c1);
				}
			       else
			       {
				a[0][1]=2;
				fill(2,c2);
				}
				break;
		    case '3' : if(z%2!=0)
				{
				 a[0][2]=1;
				 fill(3,c1);
				}
			       else
			       {
				a[0][2]=2;
				fill(3,c2);
				}
				break;
		       case '4' : if(z%2!=0)
				{
				 a[1][0]=1;
				 fill(4,c1);
				}
			       else
			       {
				a[1][0]=2;
				fill(4,c2);
				}
				break;
			case '5' : if(z%2!=0)
				{
				 a[1][1]=1;
				 fill(5,c1);
				}
			       else
			       {
				a[1][1]=2;
				fill(5,c2);
				}
				break;
		       case '6' : if(z%2!=0)
				{
				 a[1][2]=1;
				 fill(6,c1);
				}
			       else
			       {
				a[1][2]=2;
				fill(6,c2);
				}
				break;
			case '7' : if(z%2!=0)
				{
				 a[2][0]=1;
				 fill(7,c1);
				}
			       else
			       {
				a[2][0]=2;
				fill(7,c2);
				}
				break;
			  case '8' : if(z%2!=0)
				{
				 a[2][1]=1;
				 fill(8,c1);
				}
			       else
			       {
				a[2][1]=2;
				fill(8,c2);
				}
				break;
			  case '9' : if(z%2!=0)
				{
				 a[2][2]=1;
				 fill(9,c1);
				}
			       else
			       {
				a[2][2]=2;
				fill(9,c2);
				}
				break;
		       default:
			     {
			       outtextxy(20,20,"PLEASE SELECT A VALID RECTANGLE");
			       goto Y;
			     }
		}
		if(z>=5)
		{
			s=status();
			setlinestyle(SOLID_LINE, 1, 1);
			if(s==1)
			{
				sleep(2);
				cleardevice();
				setbkcolor(3);
				setcolor(4);
				settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
				outtextxy(50,200,p1_name);
				outtextxy(300,200,"YOU WON");
				break;
			}
			else if(s==2)
			{

			    sleep(2);
			    cleardevice();
			    setbkcolor(3);
			    setcolor(4);
			    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
			    outtextxy(50,200,p2_name);
			    outtextxy(300,200,"YOU WON");
			    break;
			}
		}
		z++;
	}

	   if(z>9)
		{

			sleep(2);
			cleardevice();
			setbkcolor(3);
			setcolor(4);
			settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
			outtextxy(200,200,"match is drawn");

		}
		fflush(stdin);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(50,350,"PRESS ENTER");
		while(getch()!=13);

		closegraph();
       //}  COMMENTED BY ME
}