#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Scientes;
class manager
{
	char mname[20];
	int mincome;
	public:
		void getdata();
		void putdata();
	friend void tax(manager,Scientes);
};
void manager :: getdata()
{
	cin>>mname;
	cin>>mincome;
}
void manager :: putdata()
{
	cout<<mname;
	cout<<mincome;
}
class Scientes
{
	char sname[20];
	int sincome;
	public:
		void getdata();
		void putdata();
	friend void tax(manager,Scientes);
};
void Scientes :: getdata()
{
	cin>>sname;
	cin>>sincome;
}
void Scientes :: putdata()
{
	cout<<sname;
	cout<<sincome;
}
void main()
{
	clrscr();
	manager s1;
	s1.getdata();
	Scientes s2;
	s2.getdata();
	cout<<"\n\n";
	s1.putdata();
	s2.putdata();
	getch();
}
