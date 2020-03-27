#include<cstdlib>
#include<cstring>
#include<iostream>
#include<conio.h>
#include<cstdio>
using namespace std;
main()
{
    char s[100],a[100];
    int k=0;
    cout<<"Enter the string:";
    cin.getline(s,100);
    int j=0;
    char max[100]={0},min[100]={0};
    for(int i=0;s[i]!=NULL;i++)
    {
        a[j]=s[i];
        j++;
        if(s[i+1]==' ' || s[i+1]=='\0')
        {
            a[j]='\0';
            if(strlen(max)==0 && strlen(min)==0)
            {
                strcpy(max,a);
                strcpy(min,a);
            }
            if(strlen(max)<strlen(a))
                strcpy(max,a);
            if(strlen(min)>strlen(a))
                strcpy(min,a);
            j=0;
        }
    }
    system("CLS");
    cout<<"Longest String :: "<<max<<endl;
    cout<<"Smallest string :: "<<min;
    return 0;
}
