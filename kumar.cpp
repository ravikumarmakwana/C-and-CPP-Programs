#include<cstdlib>
#include<windows.h>
#include<dos.h>
#include<conio.h>
#include<cstdlib>
#include<iostream>
using namespace std;
main()
{
    while(1)
    {
    for(int i=1;i<=10;i++)
    {
        for(int j=9;j>=i;j--)
        {
           cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=2;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<" ";
        for(int j=9;j>=i;j--)
            cout<<"*";
        for(int j=i-1;j<=7;j++)
            cout<<"*";
        cout<<endl;
    }
    Beep(5000,1000);
    if(kbhit())
        break;
    }
    return 0;
}
