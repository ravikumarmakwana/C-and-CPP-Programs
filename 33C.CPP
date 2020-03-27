#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class counter
{
	static int c;

	public:
		void getdata()
		{
			c++;
		}
		void putdata()
		{
			cout<<"\nCreated Objetc:"<<c;
		}
};
int counter :: c;
void main()
{
	clrscr();
	counter s1;
	s1.getdata();
	counter s2;
	s2.getdata();
	s2.putdata();

	getch();
}