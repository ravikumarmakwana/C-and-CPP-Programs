#include<iostream>
using namespace std;
float power(float m,int n=2)
{
    if(n==0)
        return 1;
    else
        return m*power(m,n-1);
}
main()
{
    float a;
    int b;
    cout<<"Enter the Number:";
    cin>>a;
    cout<<"The Square of Given Number::"<<power(a);
    cout<<"\n\nEnter the Base:";
    cin>>a;
    cout<<"Enter the exontital:";
    cin>>b;
    cout<<"\nANS:: "<<a<<" ^ "<<b<<" = "<<power(a,b);
    return 0;
}
