#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void shape_area(int r)
{
	cout<<"The area of circle:"<<3.14*r*r;
}
void shape_area(int l,int r)
{
	cout<<"The area of Rectangle:"<<l*r;
}
void shape_area(float l,float r)
{
	cout<<"The area of triangle:"<<0.5*l*r;
}
void main()
{
	int a,b,c;
	float e,d;
	clrscr();
	cout<<"Enter the values of circual:\n";
	cout<<"radious:";
	cin>>a;
	shape_area(a);
	cout<<"\n\nEnter the va;ues of retangle:\n";
	cout<<"length:";
	cin>>b;
	cout<<"hight:";
	cin>>c;
	shape_area(b,c);
	cout<<"\n\nEnter the value of Tringle:\n";
	cout<<"d:";
	cin>>d;
	cout<<"e:";
	cin>>e;
	shape_area(d,e);
	getch();
}