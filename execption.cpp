#include<iostream>
using namespace std;
void number(int c)throw (double,int,char)
{
    if(c==0)
        throw '*';
    else if(c==1)
        throw 2;
    else if(c==2)
        throw 2.3;
    else
        cout<<"\nComplete\n";
}
main()
{
    int c;
    cout<<"Enter the number:";
    cin>>c;
    try
    {
        number(c);
    }
    catch(...)
    {
        cout<<"\nException catch....!\n";
    }
    return 0;
}
