#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class weight
{
	int gm,kg;
	public:
		void getdata();
		void putdata();
		void add(weight,weight);
};
void weight :: getdata()
{
	cout<<"Enter the Kg:";
	cin>>kg;
	cout<<"Enter the Gm:";
	cin>>gm;
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
void weight :: putdata()
{
	cout<<"\nTotal weight:"<<kg<<" Kg,"<<gm<<" Gm";
}
void main()
{
	clrscr();
	weight w1,w2,w3;
	cout<<"Enter the first weight:\n";
	w1.getdata();
	cout<<"\nEnter the Second Weight:\n";
	w2.getdata();
	w3.add(w1,w2);
	w3.putdata();
	getch();
}
