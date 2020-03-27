#include<iostream>
using namespace std;
inline int maximum(int a,int b,int c)
{
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
main()
{
    int a,b,c;
    cout<<"Enter the numbers:\n";
    cin>>a>>b>>c;
    cout<<"\nBiggest Number::"<<maximum(a,b,c);
    return 0;
}
