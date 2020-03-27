#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class weight
{
	int kg;
	int gm;
	public:
		void getdata();
		void putdata();
		void add(weight,weight);
};
void weight:: getdata()
{
	cout<<"\nEnter the Kg:"   ;
	cin>>kg;
	cout<<"Enter the Gm:";
	cin>>gm;
}
void weight :: putdata()
{
	cout<<"The total weight:"<<kg<<" Kg,"<<gm<<"gm";
}
void weight :: add(weight x,weight y)
{
	kg=x.kg+y.kg;
	gm=x.gm+y.gm;
	if(gm>1000)
	{
		kg++;
		gm=gm-1000;
	}
}
void main()
{
	clrscr();
	weight w1,w2,w3;
	w1.getdata();
	w2.getdata();
	w3.add(w1,w2);
	w3.putdata();
	getch();
}