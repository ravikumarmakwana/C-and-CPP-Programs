#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
void main()
{
	clrscr();
	int l;
	srand(time(0));
	l=rand()%100+1;
	int n;
	while(1)
	{
		cout<<"\nEnter the value:";
		cin>>n;

		if(n==l)
		{
			cout<<"\nYes";
			exit(0);
		}
		else if(n>l)
			cout<<"The is too high";
		else
			cout<<"The number is too small";

	}
	getch();
}