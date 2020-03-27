#include<stdio.h>
#include<conio.h>
#include<iostream.h>

inline float area(int r)
{
	return 3.14*r*r;
}
void main()
{
	int r;
	clrscr();
	cout<<"Enter the radious:";
	cin>>r;
	float a;
	a=area(r);
	cout<<"\nArea of circual:"<<a;
	getch();
}