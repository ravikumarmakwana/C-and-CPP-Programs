#include<iostream>
using namespace std;
void swape(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
main()
{
    int a,b;
    cout<<"Enter the Two values:";
    cin>>a>>b;
    swape(a,b);
    cout<<"A"<<a;
    cout<<"b"<<b;
    return 0;
}
