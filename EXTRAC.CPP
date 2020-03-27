#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class player
{
	char pname[30];
	char tname[30];
	int score[3];


	public:
		float avg;
		void getdata();
		void putdata() ;
		void calculate();

};
void player :: getdata()
{
	cout<<"\nEnter the PlayerName:";
	cin>>pname;
	cout<<"Enter the teamName:";
	cin>>tname;
	cout<<"enter the score:\n";
	for(int i=0;i<3;i++)
		cin>>score[i];

}
void player :: putdata()
{
	cout<<"\n"<<pname<<"\t"<<tname<<"\t"<<avg<<"\n";
}
void player :: calculate()
{       int sum=0;
	for(int i=0;i<3;i++)
	{
		sum=sum+score[i];
	}
	avg=sum/3;
}

void sortdata(player s[])
{       player temp;
	for(int i=0;i<5;i++)
	{
		for(int j=i;j<5;j++)
		{
			if(s[i].avg>s[j].avg)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
}

void main()
{
	clrscr();
	player s[5];
	for(int i=0;i<5;i++)
		s[i].getdata() ;
	for(i=0;i<5;i++)
		s[i].calculate();
	sortdata(s);
	cout<<"playername teamname avg\n";
	for(i=0;i<5;i++)
		s[i].putdata();
	getch();
}
