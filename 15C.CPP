#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,j,k;
	int a[10];
	int max,min;
	clrscr();
	i=0;
	while(i<10)
	{
		srand(time(0));
		a[i]=rand()%100;
		min=a[0];
		max=a[0];
		j=i;
		if(j>=0)
		{
			if(max<a[j])
				max=a[j];
			if(min>a[j])
				min=a[j];
		}
	}
	cout<<"\n Maximun number:"<<max;
	cout<<"\n Minmum number:"<<min;
	getch();
}

