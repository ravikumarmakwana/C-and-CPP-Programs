#include<iostream>
using namespace std;
int maximum(int a,int b,int c)
{
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
main()
{
    cout<<"Enter the Three Numbers:";
    int a,b,c;
    cin>>a>>b>>c;
    int l=maximum(a,b,c);
    cout<<"\nThe Maximum Number::"<<l;
    return 0;
}
