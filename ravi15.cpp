#include<iostream>
using namespace std;
float amount(int n,int p,float r=0.15)
{
    return (float)n*p*r;
}
main()
{
    int n,p;
    float r;
    cout<<"Enter the n:";
    cin>>n;
    cout<<"Enter the p:";
    cin>>p;
    cout<<"Enter the r:";
    cin>>r;
    float v=amount(n,p);
    cout<<"\nDefault arguments::"<<v;
    v=amount(n,p,r);
    cout<<"\nWith specified Arguments::"<<v;
    return 0;
}
