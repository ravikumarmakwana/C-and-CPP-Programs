#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class student
{
	char name[30];
	int dept;
	int attend;
	public:
		void getdata()
		{       cout<<"Enter the details:";
			cin>>name>>dept>>attend;
		}
		operator float()
		{
			float x;
			x=(100*attend)/1000;
			return x;
		}
};
void main()
{
	clrscr();
	student s1[10];
	for(int i=0;i<5;i++)
		s1[i].getdata();
	float x;
	cout<<"\nAttendence of all student:\n";
	for(i=0;i<5;i++)
	{
		x=s1[i];
		cout<<x<<"%\n";
	}
	getch();
}