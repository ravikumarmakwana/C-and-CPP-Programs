#include<iostream>
using namespace std;
void divide(int a,int b)
{
    if(b==0)
        throw b;
    else
        cout<<"Division ::"<<a/b;
}
main()
{
    int a,b;
    cout<<"Enter the a:";
    cin>>a;
    cout<<"Enter the b:";
    cin>>b;
    try
    {
        divide(a,b);
    }
    catch(int )
    {
        cout<<"Division by Zero not possible";
    }
    return 0;
}
