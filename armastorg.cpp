#include<iostream>
using namespace std;
main()
{
    int n,sum=0,a,b;
    cout<<"Enter the n:";
    cin>>n;
    b=n;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a*a*a;
        n=n/10;
    }
    if(sum==b)
        cout<<"The number is Armstrong";
    else
        cout<<"The number is not Armstrong";
    return 0;
}
