#include<iostream>
using namespace std;
float power(int m)
{
    return m*m;
}
float power(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a*power(a,b-1);
}
main()
{
    int a;
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
