#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;

void strings(char s[])
{
	int a[100];
	int l;
	int r[10];
	for(int i=0;i<10;i++)
		r[i]=0;
	l=strlen(s);
	for(int i=0;s[i]!=NULL;i++)
	{
		r[s[i]-'a']++;
	}
	for(int i=0;s[i]!=NULL;i++)
	{
		if(r[s[i]-'a']!=0)
			cout<<r[i]<<s[i]<< " ";
		r[s[i]-'a']=0;
	}

}
int main()
{
	char s[100];
	cout<<"Enter the string:";
	cin>>s;
	strings(s);
	return 0;
}
