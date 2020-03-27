#include<cmath>
#include<iostream>
using namespace std;
main()
{
    long no;
    cout<<"Enter the number:";
    cin>>no;
    long f=no%10;
    long b=no;
    long c=0;
    while(b>10)
    {
        b=b/10;
        c++;
    }
    long l=pow(10,4)+1;
    long p=no%l;
    long k=f*l+p-f+b;
    cout<<k;
    return 0;
}
