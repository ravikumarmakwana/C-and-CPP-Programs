#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class abc;
class xyz
{
	int x;
	public:
		void getdata()
		{
			cout<<"\nEnter the value:";
			cin>>x;
		}
	friend void mean(xyz,abc);
};
class abc
{
	int a;
	public:
		void getdata()
		{
			cout<<"\nEnter the value:";
			cin>>a;
		}
	friend void mean(xyz,abc);
};
void mean(xyz s1,abc s2)
{
	cout<<"\nThe mean of this two number: "<<(float)(s1.x+s2.a)/2;
}
void main()
{
	clrscr();
	xyz x;
	x.getdata();
	abc a;
	a.getdata();
	mean(x,a);
	getch();
}