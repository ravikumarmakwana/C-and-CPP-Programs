#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<ctime>
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	long int ac;
	srand(time(0));
	int i=0;
	while(1)
	{
		ac=rand()%100+1;
		cout<<ac;
		if(ac==1)
			exit(0);
		else
			i++;
		delay(10000);
	}
	getch();
}
