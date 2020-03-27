#include<iostream>
using namespace std;
inline int maximum(int a,int b,int c)
{
    return (a>b) ? ((a>c) ? a: c) : ( ( b>c )? b : c );
}
main()
{
    int a,b,c;
    cout<<"Enter the three values:";
    cin>>a>>b>>c;
    int m=maximum(a,b,c);
    cout<<"Maximum value ::"<<m;
    return 0;
}
