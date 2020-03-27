#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class employee
{
	char name[30];
	int dept;
	int age;
	public:
		void getrecord() ;
		void printrecord();
};
void employee :: getrecord()
{
	cout<<"Enter the name:";
	cin>>name;
	cout<<"Enter the department:";
	cin>>dept;
	cout<<"Enter the aga:";
	cin>>age;
}
void employee :: printrecord()
{
	cout<<"\n"<<name<<"\t"<<dept<<"\t"<<age;
}
void main()
{
	clrscr();
	employee s[5];
	for(int i=0;i<5;i++)
	s[i].getrecord();
	for(i=0;i<5;i++)
	s[i].printrecord();
	getch();
}
