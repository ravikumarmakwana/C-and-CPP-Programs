#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void plus(int a,int b)
{
	cout<<"The sum is :"<<a+b;
}
void plus(float a,float b)
{
	cout<<"The sum is :"<<a+b;
}
void plus(double a,double b)
{
	cout<<"The sum is :"<<a+b;
}
void main()
{
	int a,b;
	float c,d;
	double e,f;
	clrscr();
	cout<<"Enter the interge values:\n";
	cin>>a;
	cin>>b;
	plus(a,b);
	cout<<"\n";

	cout<<"Enter the float values:\n";
	cin>>c;
	cin>>d;
	plus(c,d);
	cout<<"\n";

	cout<<"Enter the double values:\n";
	cin>>e;
	cin>>f;
	plus(e,f);
	getch();
}