#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,l;
	int max,min;
	i=0;
	clrscr();
	srand(time(0));
	while(i<10)
	{

		l=rand()%100;
	
		if(l<=-5)
			break;

		if(i==0)
		{
			max=min=l;
		}
		else
		{
			if(l<min)
				min=l;

			if(l>max)
				max=l;
		}
		i++;
	cout<<"\nTime:"<<i<<"  number:"<<l;
	cout<<"\n Maximun number:"<<max;
	cout<<"\n Minmum number:"<<min;

	}

	getch();
}

