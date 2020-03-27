#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
	int x,y;
	int a,b;
	clrscr();
	srand (time (0));
	while( ! kbhit ())
	{
		a=rand()%16;
		b=rand()%16;
		textcolor(a);
		textbackground(b);
		x=rand()%100;
		y=rand()%100;
		gotoxy(x,y);
		cout<<"Ravi";
		delay(100);
	}
	getch();
}