#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class complex
{
	int r,i;
	public:
		void getdata();
		void putdata();
		void add(complex,complex);
};
void complex :: getdata()
{
	cout<<"Enter real part:";
	cin>>r;
	cout<<"enter the imaginer:";
	cin>>i;
}
void complex :: putdata()
{
	cout<<r<<" + i"<<i;
}
void complex :: add(complex p,complex q)
{
	r=p.r+q.r;
	i=p.i+q.i;
}
void main()
{
	clrscr();
	complex s1,s2,s3;
	cout<<"Enter the complex number:\n";
	s1.getdata();
	cout<<"Enter the second number:\n";
	s2.getdata();
	s3.add(s1,s2);
	cout<<"\n(";
	s1.putdata();
	cout<<")+(";
	s2.putdata();
	cout<<")= ";
	s3.putdata();
	getch();
}