#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
void main()
{
	int a,b;
	clrscr();
	srand(time(0));
	while(1)
	{
		a=rand()%100;
		b=rand()%100;
		gotoxy(a,b);
		cout<<"Ravi";

		delay(1000);

		if(kbhit())
			exit(0);
	}

	getch();
}


