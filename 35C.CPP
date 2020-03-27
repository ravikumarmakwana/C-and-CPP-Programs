#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class complex
{
	int r,i;
	public:
		void getdata() ;
		void putdata()  ;
		void add(complex,complex);
};
void complex::getdata()
{
	cout<<"Enter the Real part:";
	cin>>r;
	cout<<"Enter the image part:";
	cin>>i;
}
void complex :: putdata()
{
	cout<<"\n Addition of two Complex Number :"<<r <<" +i "<< i;
}
void complex :: add(complex x ,complex y)
{
	r=x.r+y.r;
	i=x.i+y.i;
}
void main()
{
	clrscr();
	complex s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3.add(s1,s2);
	s3.putdata() ;
	getch();
}