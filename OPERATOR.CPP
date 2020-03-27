#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class vector
{
	int a[3];
	public:
		void getdata()
		{
			cout<<"Enter the vector:\n";
			for(int i=0;i<3;i++)
				cin>>a[i];
		}
		void putdata()
		{
			cout<<"(";
			for(int i=0;i<3;i++)
			{
				cout<<a[i];
				if(i!=2)
					cout<<",";
			}
			cout<<")";
		}
		void operator -()
		{
			for(int i=0;i<3;i++)
			     a[i]=-a[i];
		}
};
void main()
{
	clrscr();
	vector v1;
	v1.getdata();
	-v1;
	v1.putdata();
	getch();
}