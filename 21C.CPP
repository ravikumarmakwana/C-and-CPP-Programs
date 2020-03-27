#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	int i;
//	clrscr();
	for(i=1;i<=10;i++)
	{
		cout<<"-a";
		sound(400);
		sleep(3000);
	}
	return 0;
}
