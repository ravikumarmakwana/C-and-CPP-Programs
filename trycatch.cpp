#include<iostream>
using namespace std;
void hello(int a) throw(double,int)
{
    if(a==1)
        throw '*';
    else if (a==0)
        throw 10;
    else if(a==2)
        throw 3.4;
}
main()
{
    int a;
    cout<<"Enter the a:";
    cin>>a;
    try
    {
        hello(a);
    }
    catch(...)
    {
        cout<<"Error is Occurs";
    }
    return 0;
}
