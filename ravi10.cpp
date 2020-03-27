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
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    swape(a,b);
    cout<<"Swapping is Done:\n";
    cout<<"A:"<<a;
    cout<<endl<<"B:"<<b;
    return 0;
}
