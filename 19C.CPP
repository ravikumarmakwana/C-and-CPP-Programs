#include<stdio.h>
#include<conio.h>
#include<iostream.h>
inline float interest(int p,int n,float r=8.5)
{
	return p*r*n/100;
}
void main()
{
	int p,r,n;
	float a;
	clrscr();
	cout<<"Enter the amount:";
	cin>>p;
	cout<<"Enter the year:";
	cin>>n;
	cout<<"\n1.Rate update.\n2.Rate not update\nEnter the choice";
	int l;
	cin>>l;
	switch(l)
	{
		case 1:cout<<"Enter the rate:";
			cin>>r;
			a=interest(p,n,r);
			break;
		case 2:a=interest(p,n);
			break;
	}
	cout<<"\nTotal Interst is:"<<a;
	getch();
}