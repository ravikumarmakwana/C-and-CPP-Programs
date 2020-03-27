#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class vector
{
	int a[3];
	public:
		void getdata();
		void multiply();
		void display();
};
void vector ::getdata()
{
	cout<<"\nEnter the vector:";
	for(int i=0;i<3;i++)
		cin>>a[i];
}
void vector :: multiply()
{
	int c;
	cout<<"Enter the multiply:";
	cin>>c;
	for(int i=0;i<3;i++)
		a[i]=a[i]*c;
}
void vector :: display()
{
	cout<<"The vector:(";
	for(int i=0;i<3;i++)
	{
		cout<<a[i];
		if(i!=2)
			cout<<",";
	}

	cout<<")";
}
void main()
{
	clrscr();
	vector v;
	v.getdata();
	v.multiply();
	v.display();
	getch();
}