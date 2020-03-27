#include<iostream>
using namespace std;
inline int Max(int a,int b,int c)
{
    return (a>b)? ( (a>c) ? a : c): ((b>c) ? b : c);
}
main()
{
    int a,b,c;
    cout<<"Enter the a,b,c";
    cin>>a>>b>>c;
    cout<<"Maximum Value:"<<Max(a,b,c);
    return 0;
}
