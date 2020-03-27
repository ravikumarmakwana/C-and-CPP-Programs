#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace  std;
int absoult(int n)
{
	return (n>0) ? n : -n;
}
float absoult(float n)
{
	return (n>0) ? n : -n;
}
main()
{
	int a,c;
	float b,d;
	cout<<"Enter the interger number:";
	cin>>a;
	c=absoult(a);
	cout<<"\nThe absoult value:"<<c;
	cout<<"\n\nEnter the float value:";
	cin>>b;
	d=absoult(b);
	cout<<"\nThe absoult value:"<<d;
	return 0;
}
