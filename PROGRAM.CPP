#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class distance
{
    int km,m;
    public:
	distance(int x)
	{
	    km=x/1000;
	    m=x%1000;
	}
	void showdis()
	{
	    cout<<km<<"Km,"<<m<<"m";

	}
};
void main()
{

	clrscr();
	int x;
	cout<<"Enter the distance:";
	cin>>x;
	distance d1(x);
	d1.showdis();
	getch();
}
