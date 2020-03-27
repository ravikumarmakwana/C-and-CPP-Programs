#include<iostream>
using namespace std;
main()
{
    int a,b;
    cout<<"Enter the a:";
    cin>>a;
    cout<<"Enter the b:";
    cin>>b;
    try
    {
        if(b==0)
            throw b;
        else
            cout<<"Division is ::"<<a/b;
    }
    catch(int )
    {
        cout<<"Division by Zero not possible";
    }
    return 0;
}
