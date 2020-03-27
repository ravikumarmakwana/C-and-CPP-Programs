#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int m=n*n,a,sum=0;
    while(m>0)
    {
        a=m%10;
        sum=sum+a;
        m/=10;
    }
    if(sum==n)
        cout<<"Neon Number";
    else
        cout<<"Not Neon Number";
    return 0;
}
