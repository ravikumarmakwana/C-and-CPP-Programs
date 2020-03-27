#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream.h>

class player
{
	char pname[20];
	char tname[10];
	int score[3];
	float avg;
	public:
		void getdata();
		void putdata();
		void calculate();
		void sortdata();
};

void player :: getdata()
{
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the name:";
		cin>>s[i].pname;
		cout<<"Enter the team_name:";
		cin>>s[i].tname;
		cout<<"Enter the score:\n";

		for(int j=0;j<3;j++)
		{
			cin>>s[i].score[j];

		}

	}
}
void player:: printdata()
{
	for(int i=0;i<5;i++)
	{
		cout<<"\n"<<s[i].pname<<" "<<s[i].tname<<" "<<s[i].avg;
	}
}
void player :: calculate()
{

	for(int i=0;i<5;i++)
	{       int sum=0;
		for(int j=0;j<3;j++)
		{
			sum=sum+s[i].score[j];
		}
		s[i].avg=sum/3;
	}
}
void player ::  sortdata()
{	int temp;
	char temp1,temp2;

	for(int i=0;i<5;i++)
	{
		for(int j=i;j<5;j++)
		{
			if(s[i].avg>s[j].avg)
			{
				temp=s[i].avg;
				strcpy(temp1,s[i].pname);
				strcpy(temp2,s[i].tname);

				s[i].avg=s[j].avg;
				strcpy(s[i].pname,s[j].pname);
				strcpy(s[i].tname,s[j].tname);
				s[j].avg=temp;
				strcpy(s[j].pname,temp1);
				strcpy(s[j].tname,temp2);
			}
		}
	}
}

void main()
{       player s[5];
	clrscr();

	s.getdata();
	s.calculate();
	s.sortdata();
	s.printdata();
	getch();
}


