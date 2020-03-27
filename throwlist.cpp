#include<iostream>
using namespace std;
void test(int a)throw(int,char,double)
{
    if(a==1)
        throw 1;
    if(a==2)
        throw 2.2 ;
    if(a==3)
        throw '*';
}
main()
{
    try
    {
         test(1);
    }
    catch(int)
    {
        cout<<"error interger\n";
    }
    try
    {
         test(2);
    }
    catch(double)
    {
        cout<<"error double\n";
    }
    try
    {
         test(3);
    }
    catch(char)
    {
        cout<<"error char\n";
    }
    return 0;
}
