#include<stdio.h>
#include<conio.h>
#include<iostream>
class complex
{
	int r,i;
	public:
		void getdata()
		{
			cout<<"Enter the number:\n";
			cin>>r>>i;
		}
		void putdata()
		{
			cout<<r<<"+i"<<i;
		}

		complex operator +(complex y)
		{
			complex temp;

			temp.r=r+y.r;
			temp.i=i+y.i;
			return temp;
		}
};

int main()
{
	system("CLR");
	complex s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3=s1+s2;
	s3.putdata();
    return 0;
}
