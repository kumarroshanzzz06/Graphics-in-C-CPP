			  /*STOPWATCH*/
#include <conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<dos.h>
void main()
{
	clrscr();
	int s=0,m=0,h=0,ms=0;
	char y,c;
	//char ch;
	//A:
	//x:
	cout<<"\nPress S to start the stopwatch:-\n";
	//x:
	cin>>y;
	x:
	if(y=='s'||y=='S')
	{
		cout<<"\nPress any key to stop the stopwatch:-\n";
		while(!kbhit())
		{
			//delay(1000);
			s++;
			if(s==60)
			{
				s=0;
				m++;
				if(m==60)
				{
					s=0;
					m=0;
					h++;
				}
			}
			//clrscr();
			while(ms!=60)
			{
			cout<<h<<":"<<m<<":"<<s<<":"<<ms<<"\r";
			ms++;
			delay(50/3);
			clreol();
			}
			ms=0;
		}
		getch();
	}
	else
	{
		cout<<"Enter a valid key:-\n";
		//cout<<"\nPress S to start the stopwatch:-\n";
		goto x;
	}
	//getch();
	cout<<"\nEclapsed time= "<<h<<":"<<m<<":"<<s;
	cout<<"\nPress R to resume the stopwatch\nPress A to again restart\nAnd Press any key to exit:-\n";
	cin>>c;
	if(c=='r'||c=='R')
	{
		//cout<<"Press any key to stop the stopwatch:-\n";
		clrscr();
		goto x;
	}
	if(c=='a'||c=='A')
	{
		s=0;
		h=0;
		m=0;
		//cout<<"Press any key to stop the stopwatch:-\n";
		clrscr();
		goto x;
	}
	else
		exit (0);
	/*cout<<"\n pres 1 to resume\n press 2 to reset\n press any other key to exit";
	cin>>ch;
	if(ch==1)
	goto A;
	else if(ch==2)
	{s=0;goto A;}*/
	getch();
}