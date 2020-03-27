#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>

class vector
{
	int a[3];
	public:
		void getdata()
		{
			cout<<"Enter the vector\n";
			for(int i=0;i<3;i++)
				cin>>a[i];
		}
		operator double()
		{
			double sum=0;
			for(int i=0;i<3;i++)
				sum=sum+a[i]*a[i];
			return sqrt(sum);
		}
};
void main()
{
	clrscr();
	vector v1;
	v1.getdata();
	double x;
	x=v1;
	cout<<"\nThe magnitued of Vector: "<<x;
	getch();
}