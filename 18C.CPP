#include<stdio.h>
#include<conio.h>
#include<iostream.h>
inline int qube(int a)
{
	return a*a*a;
}
void main()
{
	int a;
	int l;
	clrscr();
	cout<<"Enter the length:";
	cin>>l;
	a=qube(l);
	cout<<"The qube of given  length of squre:"<<a;
	getch();
}
