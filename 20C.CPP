#include<stdio.h>
#include<conio.h>
#include<GRAPHICS.H>
#include<iostream.h>
inline power(int x,int y=2)
{
	if(y==0)
		return 1;
	else
		return x*power(x,y-1);
}
void main()
{
       void far setcolor(int a);
	int x,y,z;
	clrscr();
	cout<<"Enter the base:";
	cin>>x;
	cout<<"Enter the expointen:";
	cin>>y;
	z=(y==2)?power(x) : power(x,3);
	cout<<"\nz= "<<z;
	getch();
}