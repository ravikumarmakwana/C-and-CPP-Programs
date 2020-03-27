#include<iostream>
using namespace std;
inline void maximum(int a,int b,int c)
{
    cout<<"The Maximum Number  :: "<< (a>b) ? ((a>c)?a:c) : ((b>c)?b:c);
}
main()
{
    cout<<"Enter the a:";
    int a,b,c;
    cin>>a>>b>>c;
    maximum(a,b,c);
    return 0;
}
