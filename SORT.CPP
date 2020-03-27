#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class number
{
	int a;
	public:
		void getdata()
		{
			cin>>a;
		}
		void putdata()
		{
			cout<<a;
		}
		void sortdata(number *s)
		{
			int i,j;
			number temp;
			for(i=0;i<10;i++)
			{
				for(j=i;j<10;j++)
				{
					if(s[i].a>s[j].a)
					{
						temp=s[i];
						s[i]=s[j];
						s[j]=temp;
					}
				}
			}
		}
};

void main()
{
	clrscr();
	number s[10];
	for(int i=0;i<10;i++)
		s[i].getdata();
	number r[10];
	r[0].sortdata(s);
	for(i=0;i<10;i++)
		r[i].putdata();
	getch();
}