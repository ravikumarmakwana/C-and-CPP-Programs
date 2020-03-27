#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class count
{
	static int c;
	public:
		count()
		{
			c++;
			cout<<"\nObject creater:"<<c;
		}

		~count()
		{
			cout<<"\nObject Deleted"<<c;
			c--;
		}
}  ;
int count :: c;
void main()
{
	clrscr();
	{
	count s1,s2;
	{
		count s3;
		{
			count s4;
		}
	}
	}
	getch();
}