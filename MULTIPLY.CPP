#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
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
		{       cout<<"(";
			for(int i=0;i<3;i++)
		       {
				cout<<a[i];
				if(i!=2)
					cout<<",";
			}
			cout<<")";

		}
		vector operator *(int y)
		{
			vector temp;
			for(int i=0;i<3;i++)
			{
				temp.a[i]=a[i]*y;
			}
			return temp;
		}
		friend vector operator *(int,vector);
};
vector operator *(int y,vector x)
{
	vector temp;
	for(int i=0;i<3;i++)
	{
		temp.a[i]=x.a[i]*y;
	}
	return temp;
}
int main()
{
	vector v1,v2,v3;
	v1.getdata();
	v2=v1*4;
	v3=6*v1;
	cout<<"\n";
	v2.putdata();
	cout<<"\n";
	v3.putdata();
    return 0;
}
