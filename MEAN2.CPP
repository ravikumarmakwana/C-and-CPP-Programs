#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Base
{
	int a;
	public:
		void getdata()
		{
			cout<<"Enter the first value:";
			cin>>a;
		}
	friend void mean(Base,Base);
};
void mean(Base s1,Base s2)
{
	cout<<"\nThe Mean of This two number:"<<(float)(s1.a+s2.a)/2;
}
void main()
{
	clrscr();
	Base s1,s2;
	s1.getdata();
	s2.getdata();
	mean(s1,s2);
	getch();
}