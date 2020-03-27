#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class player
{
	char pname[30];
	char tname[30];
	int score[3];
	float avg;

	public:

		void getdata();
		void putdata() ;
		void calculate();
		void sortdata(player []);
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
{
    float sum=0;
	for(int i=0;i<3;i++)
	{
		sum=sum+score[i];
	}
	avg=sum/3;
}

void player :: sortdata(player s[])
{
	player temp;
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
int main()
{
	player s[5];
    int i;
	for( i=0;i<5;i++)
		s[i].getdata() ;
	for(i=0;i<5;i++)
		s[i].calculate();
	player s1[5];
	s1[0].sortdata(s);
	cout<<"Result of match \n";
	cout<<"Pname\tTname\tAvg\n";
	for(i=0;i<5;i++)
		s[i].putdata();
	return 0;
}
