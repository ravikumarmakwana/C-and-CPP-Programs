#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int c=0,i,j;
	char s[100];
	clrscr();
	cout<<"Enter the string : ";
	cin>>s;
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]=='1')
		{
			if(s[i+1]=='0')
			{
				for(j=i+1;s[j]!=NULL;j++)
				{
					if(s[j]=='1')
					{
						c++;
						break;
					}
				}
			}
		}
	}
	cout<<"\nRepated pattern 1[0]1 is "<<c<<" times";
	getch();
}