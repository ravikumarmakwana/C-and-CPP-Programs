#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    string s;
    char ch;
    while(1)
    {
        ch=getchar();
        s+=ch;
        if(ch=='\n')
        {
            ch=getchar();
            if(ch=='\n')
                break;
            else
                s+=ch;
        }
    }
    cout<<s;
    return 0;
}
