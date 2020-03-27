#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Distance
{
	private:
		int km,m;
	public:
		void getdata();
		void putdata();
		void add(Distance,Distance);
};
void main()
{
	clrscr();
	Distance d1,d2,d3;
	d1.getdata();
	d2.getdata();
	d3.add(d1,d2);
	d3.putdata();
	getch();
}

void Distance :: getdata()
{
	cout<<"Enter the KM:";
	cin>>km;
	cout<<"Enter the m:";
	cin>>m;
}
void Distance:: putdata()
{
	cout<<"The total Distance:"<<km<<"KM,"<<m<<"m";
}
void Distance:: add(Distance x,Distance y)
{
	km=x.km+y.km;
	m=x.m+y.m;
	if(m>1000)
	{
		m=m-1000;
		km++;
	}
}