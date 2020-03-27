#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
	int a;
	int b;
	clrscr();

	while(1)
	{
		srand(time(0));
		a=rand()%100;
		b=rand()%100;
		gotoxy(a,b);
		cout<<"Ravi";
		delay(1000);
		clrscr();
		if(kbhit())
			break;
	}
	getch();
}