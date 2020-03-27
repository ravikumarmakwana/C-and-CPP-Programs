#include<cstring>
#include<iostream>
using namespace std;
main()
{
    char s[100];
    char r[100];
    cout<<"Enter the first string";
    cin>>s;
    cout<<"Enter the second string:";
    cin>>r;
    int l=strcmp(s,r);
    cout<<l;
    return 0;
}
