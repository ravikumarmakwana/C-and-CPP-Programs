#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class manager;
class scientist
{

	char name[30];
	long int sal;
	float tax1;
	public:
		void getdata()
		{
			cout<<"Enter the name of scientist :";
			cin>>name;
			cout<<"Enter the sal:";
			cin>>sal;
		}
	friend void tax(scientist,manager);
};

class manager
{

	char name[30];
	long int sal;
	float tax1;
	public:

		void getdata()
		{
			cout<<"Enter the manager name:";
			cin>>name;
			cout<<"Enter the sal :";
			cin>>sal;
		}
		friend void tax(scientist,manager);
};

void tax(scientist p,manager q)
{
	p.tax1=(5*p.sal)/100;
	cout<<p.name<<" "<<p.sal<<" "<<p.tax1
	<<"\n";
	q.tax1=(10*q.sal)/100;
	cout<<q.name<<" "<<q.sal<<" "<<q.tax1;
}

int main()
{
    scientist s1;
	s1.getdata();
	manager s2;
	s2.getdata();
	tax(s1,s2);
    return 0;
}
