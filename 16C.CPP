#include<stdio.h>
#include<conio.h>
#include<iostream.h>
inline max(int a,int b,int c)
{
	return a>b ?(a>c?a:c):(b>c?b:c);
}
void main()
{
	int a,b,c;
	int m;
	clrscr();
	cout<<"Enter the thers numbres:\n";
	cout<<"\na:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	cout<<"c:";
	cin>>c;
	m=max(a,b,c);
	cout<<"\n\nThe maximun number is:"<<m;
	getch();
}