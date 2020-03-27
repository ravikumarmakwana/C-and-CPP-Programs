#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class manager;
class scientist
{
	char name[30];
	int sal;
	float tax;
	public:
		void getdata()
		{
			cout<<"\nEnter the Scientist name:";
			cin>>name;
			cout<<"Enter the sal:";
			cin>>sal;
		}
		void putdata()
		{
			cout<<name<<sal<<tax;
		}
	friend void tax(manager,scientist);
};
class manager
{
	char name[30];
	int sal;
	float tax;

	public:
		void getdata()
		{
			cout<<"Enter the Manager Name:";
			cin>>name;
			cout<<"Enter the sal";
			cin>>sal;
		}
		void putdata()
		{
			cout<<"\n"<<name<<sal<<tax;
		}
	friend void tax(manager,scientist);
};
void tax(manager x,scientist y)
{
	x.tax=x.sal*0.1;
	y.tax=y.sal*0.25;
}
void main()
{
	clrscr();
	manager s1;
	s1.getdata();
	scientist s2;
	s2.getdata();
	tax(s1,s2);
	s1.putdata();
	s2.putdata();
	getch();
}

