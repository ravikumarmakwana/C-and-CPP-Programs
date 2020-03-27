#include<cstdlib>
#include<iostream>
using namespace std;
main()
{
    int a,b;
    cout<<"Enter the a:";
    cin>>a;
    cout<<"Enter the b:";
    cin>>b;
    int c;
    try
    {
        if(a<0 || b<0)
            throw b;
    }
    catch(int)
    {
        cout<<"Negative number not possible"<<endl;
        exit(0);
    }
    try
    {
        if(a<0 || b<0)
            throw(a,b);
        else
            cout<<"Multiplication :: "<<a*b<<endl;
    }
    catch(int )
    {
        cout<<"Multiplication By Negative Number not possible"<<endl;
    }
    try
    {
        if(b==0)
            throw b;
        else
            cout<<"Division ::"<<a/b;
    }
    catch(int )
    {
        cout<<"Division By Zero not possible";
    }
    return 0;
}
