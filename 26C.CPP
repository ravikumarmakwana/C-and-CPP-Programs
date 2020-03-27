#include<stdio.h>
#include<conio.h>
#include<iostream.h>

struct player
{
	char pname[20];
	char tname[10];
	int s[3];
	float avg;
};

void main()
{
	struct player s[5];
	clrscr();

	for(int i=0;i<5;i++)
	{
		cout<<"Enter the name"<<i+1<<":";
		cin>>s[i].pname;
		cout<<"Enter the teamname:";
		cin>>s[i].tname;
		cout<<"Enter the score:\n";
		int sum=0;
		for(int j=0;j<3;j++)
		{
			cin>>s[i].s[j];
			sum=sum+s[i].s[j];
		}
		s[i].avg=sum/3;
	}
	cout<<"Player name:Team name:avg\n";

	for(i=0;i<5;i++)
	{
		cout<<"\n"<<s[i].pname<<"\t"<<s[i].tname<<"\t"<<s[i].avg;
	}
	getch();
}
