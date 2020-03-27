#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class emp
{
	char name[20];
	int dept;
	int age;
	public:
		void getdata()
		{
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the department:";
			cin>>dept;
			cout<<"Enter the age:";
			cin>>age;
		}
		void putdata()
		{
			cout<<name<<"\t"<<dept<<"\t"<<age<<"\n";
		}
};

void main()
{
	emp s[5];
	int i=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<i+1<<".Employe:";
		s[i].getdata();
	}
	cout<<"\n\n";
	for(i=0;i<5;i++)
	{
		s[i].putdata();
	}
	getch();
}