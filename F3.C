#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
char per[16];
char name[50];
char cmt[50];
int k;
void menu()
{
	int gd=DETECT,gm,i=0,l1=0,l2=0,l3=0,l=0,j=0,p1=0;
	char ch;
	initgraph(&gd,&gm,"");
	k=0;
	for(i=0;i<16;i++)
		per[i]='\0';
	for(i=0;i<50;i++)
		cmt[i]='\0';
	for(i=0;i<50;i++)
		name[i]='\0';
	i=0;
	setbkcolor(LIGHTBLUE);
	//setcolor(10);
	setcolor(RED);
	settextstyle(GOTHIC_FONT,0,4);
	outtextxy(25,0,"FEEDBACK MANAGEMENT SYSTEM");
	line(25,40,590,40);
	settextstyle(SANS_SERIF_FONT,0,4);
	outtextxy(5,150,"NAME :-");
	outtextxy(5,220,"FEEDBACK :-");
	outtextxy(5,290,"COMMENTS :-");
	rectangle(220,150,630,190); //name
	rectangle(220,220,450,260); //feedback
	rectangle(220,290,550,330); //comments
	setfillstyle(SOLID_FILL,15);
	floodfill(230,155,4); //name
	floodfill(250,230,4); //feedback
	floodfill(250,300,4); //comments
	rectangle(250,360,350,405);//submit
	setfillstyle(SOLID_FILL,8);
	floodfill(255,365,4);
	outtextxy(252,362,"SUBMIT");
	settextstyle(SMALL_FONT,0,6);
	//setcolor(BROWN);
	outtextxy(455,230,"(in percentage)");
	outtextxy(555,280,"*");
	outtextxy(554,300,"(optional)");
	settextstyle(SANS_SERIF_FONT,0,4);
	Y:
	while(!kbhit())
	{
		setcolor(128);
		line(225+l1,157,225+l1,183);
		delay(150);
		setcolor(15);
		line(225+l1,157,225+l1,183);
		delay(150);
	}
	setcolor(5);
	while(((ch=getch())!=13&&ch!=9) || (name[0]=='\0'))
	{
	      if(ch==8)
	      {
	       setcolor(15);
	       outtextxy(225,148,name);
	       setcolor(5);
	       name[i-1]='\0';i--;
	       if(i<0)
	       {
		i=0;
	       }
	       outtextxy(225,148,name);
	       l1-=18;
	       if(l1<0)
		l1=0;
	      while(!kbhit())
		{
		setcolor(128);
		line(225+l1,157,225+l1,183);
		delay(150);
		setcolor(15);
		line(225+l1,157,225+l1,183);
		delay(150);
		}
		setcolor(5);
	       continue;
	      }
	      if(!((ch>=33&&ch<=126)||ch==' '))
	      {
		while(!kbhit())
		{
		setcolor(128);
		line(225+l1,157,225+l1,183);
		delay(150);
		setcolor(15);
		line(225+l1,157,225+l1,183);
		delay(150);
		}
		setcolor(5);
		continue; //backspace ASCII code is 8
	      }
	      else
	      {
	      name[i++]=ch;//l++;
	      name[i]='\0';
	      }
	      outtextxy(225,148,name);
	      l1+=18;
	      while(!kbhit())
		{
		setcolor(128);
		line(225+l1,157,225+l1,183);
		delay(150);
		setcolor(15);
		line(225+l1,157,225+l1,183);
		delay(150);
		}
		setcolor(5);
	}
	//i=0;
	Z:
	while(!kbhit())
	{
		setcolor(5);
		line(225+l2,227,225+l2,253);
		delay(150);
		setcolor(15);
		line(225+l2,227,225+l2,253);
		delay(150);
	}
	setcolor(5);
	while(((ch=getch())!=13&&ch!=9) || (per[0]=='\0'))
	{
		if(ch==27)
			goto Y;
	      if(ch==8)
	      {
	       setcolor(15);
	       outtextxy(225,218,per);
	       setcolor(5);
	       per[j-1]='\0';j--;
	       if(j<0)
	       {
		j=0;
	       }
	       l2-=20;
	       if(l2<0)
		l2=0;
	       outtextxy(225,218,per);
	       while(!kbhit())
		{
		setcolor(5);
		line(225+l2,227,225+l2,253);
		delay(150);
		setcolor(15);
		line(225+l2,227,225+l2,253);
		delay(150);
		}
		setcolor(5);
	       continue;
	      }
	      if(!((ch>=48&&ch<=57)||ch=='.'||ch=='%'||ch==' '))  // ASCII value of % is 37
	      {
		//backspace ASCII code is 8
		while(!kbhit())
		{
		setcolor(5);
		line(225+l2,227,225+l2,253);
		delay(150);
		setcolor(15);
		line(225+l2,227,225+l2,253);
		delay(150);
		}
		setcolor(5);
		continue;
	      }
	      else
	      {
	      per[j++]=ch;//l++;
	      per[j]='\0';
	      }
	      outtextxy(225,218,per);
	      l2+=20;
	      while(!kbhit())
		{
		setcolor(5);
		line(225+l2,227,225+l2,253);
		delay(150);
		setcolor(15);
		line(225+l2,227,225+l2,253);
		delay(150);
		}
		setcolor(5);
	}
	W:
	while(!kbhit())
	{
		setcolor(5);
		line(225+l3,297,225+l3,323);
		delay(150);
		setcolor(15);
		line(225+l3,297,225+l3,323);
		delay(150);
	}
	setcolor(5);
	//i=0;
	while((ch=getch())!=13&&ch!=9)
	{
		if(ch==27)
			goto Z;
		if(l>=17&&l<=24)
		{
			setcolor(15);
			outtextxy(225,288,cmt);
			settextstyle(SANS_SERIF_FONT,0,3);
			setcolor(5);
			if(p1==0)
			{
				l3-=80;
				p1++;
			}
			else
				l3-=8;
			k=10;
		}
		if(l>=25&&l<=32)
		{
			setcolor(15);
			outtextxy(225,298,cmt);
			settextstyle(SANS_SERIF_FONT,0,1);
			setcolor(5);
			if(p1==1)
			{
				l3-=60;
				p1++;
			}
			else
				l3-=12;
			k=7;
		}
		if(l>=33)
		{
			setcolor(15);
			outtextxy(225,295,cmt);
			settextstyle(SMALL_FONT,0,5);
			setcolor(5);
			if(p1==2)
			{
				l3-=40;
				p1++;
			}
			else
				l3-=15;
			k=10;
		}
	      if(ch==8)
	      {
	       setcolor(15);
	       outtextxy(225,288+k,cmt);
	       setcolor(5);
	       cmt[l-1]='\0';l--;
	       if(l<0)
	       {
		l=0;
	       }
	       l3-=18;
	       if(l3<0)
		l3=0;
	       outtextxy(225,288+k,cmt);
	       while(!kbhit())
		{
		setcolor(5);
		line(225+l3,297,225+l3,323);
		delay(150);
		setcolor(15);
		line(225+l3,297,225+l3,323);
		delay(150);
		}
		setcolor(5);
	       continue;
	      }
	      if(!((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||ch==' '))  // ASCII value of % is 37
	      {
		//backspace ASCII code is 8
		while(!kbhit())
		{
		setcolor(5);
		line(225+l3,297,225+l3,323);
		delay(150);
		setcolor(15);
		line(225+l3,297,225+l3,323);
		delay(150);
		}
		setcolor(5);
		continue;
	      }
	      else
	      {
	      cmt[l++]=ch;//l++;
	      cmt[l]='\0';
	      }
	      outtextxy(225,288+k,cmt);
	      l3+=18;
	      while(!kbhit())
		{
		setcolor(5);
		line(225+l3,297,225+l3,323);
		delay(150);
		setcolor(15);
		line(225+l3,297,225+l3,323);
		delay(150);
		}
		setcolor(5);
	}
	setcolor(12);
	settextstyle(SANS_SERIF_FONT,0,4);
	outtextxy(252,362,"SUBMIT");
	setfillstyle(SOLID_FILL,1);
	floodfill(255,365,4);
	setcolor(RED);
	outtextxy(252,362,"SUBMIT");
	while((ch=getch())!=13)
	{
		if(ch==27)
		{
			setcolor(12);
			outtextxy(252,362,"SUBMIT");
			setfillstyle(1,8);
			floodfill(255,365,4);
			setcolor(RED);
			outtextxy(252,362,"SUBMIT");
			goto W;
		}
	}
	if(cmt[0]=='\0')
		strcpy(cmt,"No Comments");
	if(per[j-1]!='%')
	{
		per[j++]=' ';
		per[j]='%';
	}
	else
	{
		if(per[j-2]!=' ')
		{
			per[j-1]=' ';
			per[j]='%';
		}
	}
}
void main()
{
	FILE *fi;
	char ch;
	int l,i;
	X:
	menu();
	closegraph();
	clrscr();
	//textbackground(1);
	textcolor(10);
	cprintf(" NAME :");
	printf("\t\t    ");
	cprintf(" PERCENTAGE :");
	printf("\t");
	cprintf(" COMMENTS :");
	printf("\n");
	l=strlen(name);
	fi=fopen("f1","a");
	fprintf(fi,"%s",name);
	for(i=l;i<=23;i++)
		fprintf(fi,"%s"," ");
	fprintf(fi,"%s",per);
	l=strlen(per);
	l+=23;
	for(i=l;i<=38;i++)
		fprintf(fi,"%s"," ");
	fprintf(fi,"%s\n",cmt);
	//fprintf(fi,"%s","\r");
	fclose(fi);
	fi=fopen("f1","r");
	while(1)
	{
		ch=fgetc(fi);
		if(ch==EOF)
			break;
		printf("%c",ch);
	}
	fclose(fi);
	printf("\n");
	cprintf(" Press Any key To give The Feedback :- ");
	ch=getch();
	if(ch!=27)
		goto X;
}