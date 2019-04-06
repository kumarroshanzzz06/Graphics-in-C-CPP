				  /*TIMER*/
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int h,m,s,h1,m1,s1,ms;
	int v;
	b:
	clrscr();
	m:
	cout<<"Enter the TIMER:-\nHOUR,MINUTE AND SECOND:-\n";
	cin>>h;
	cout<<"\x1b[A"<<h<<":";
	cin>>m;
	cout<<"\x1b[A"<<h<<":"<<m<<":";
	cin>>s;
	if(m>=60||s>=60||m<0||s<0||h<0)
	{
		cout<<"Please Enter valid time i.e, minute and second less than 60 and greater than    or equal to 0\n";
		goto m;
	}
	h1=h;
	m1=m;
	s1=s;
	x:
	clrscr();
	cout<<"You Have Entered:-\n";
	cout<<h1<<":"<<m1<<":"<<s1<<"\n";
	//cout<<"\nPress Any key To Enter The Timer Again:-\n";
	while(s!=0||m!=0||h!=0)
	{
		//getch();
		//s--;
		//clrscr();
		cout<<"Press Any key to pause the timer:-\n";
		while(!kbhit())
		{
			clreol();
			ms=60;
			//cout<<h<<":"<<m<<":"<<s<<"\r";
			//delay(1000);
			if(s==0)
			{
				if(m!=0)
				{
					m--;
					s=59;
				}
				else if(m==0)
				{
					if(h!=0)
					{
						h--;
						m=59;
						s=59;
					}
					else if(h==0)
						goto y;
				}
			}
			else
				s--;
			while(ms!=0)
			{
				cout<<h<<":"<<m<<":"<<s<<":"<<ms<<"\r";
				delay(50/3);
				ms--;
			}
		}
		getch();
		//cout<<h<<":"<<m<<":"<<s;
		//clreol();
		goto l;
	}
	//goto x;
	if(s==0||m==0||h==0)
		goto y;
	l:
		cout<<"\nPress 1 to RESUME\nPress 2 to RESTART\nPress 3 to RESET the timer\nAnd Press 4 to EXIT\n";
		cin>>v;
		if(v==1)
		{
				goto x;
		}
		else if(v==2)
		{
				h=h1;
				m=m1;
				s=s1;
				goto x;
		}
		else if(v==3)
				goto b;
		else if(v==4)
			exit(0);
		else
		{
				cout<<"\nPlease Enter a valid key:-\n";
				goto l;
		}
	y:
		cout<<"\nTime Up Press any key to exit:-";
		while(!kbhit())
		{
			sound(157);
			delay(100);
			sound(162);
			delay(100);
			sound(176);
			delay(100);
			sound(987);
			delay(100);
			sound(157);
			delay(100);
			sound(45);
			delay(100);
			sound(151);
			delay(100);
			sound(162);
			delay(100);
			sound(173);
			delay(100);
			sound(144);
			delay(100);
			sound(155);
			delay(100);
			sound(168);
			delay(100);
		}
		nosound();
		getch();
}
