#include<iostream>
using namespace std;
int add(int a,int b)
{
    cout<<"1st function::";
    return a+b;
}
double add(int a,double b)
{
    cout<<"\n2nd function::";
    return a+b;
}
double add(double a,int b)
{
    cout<<"\n3rd function::";
    return a+b;
}
double add(double a,double b)
{
    cout<<"\n4th function::";
    return a+b;
}
main()
{
    cout<<add(1,2);
    cout<<add(1,4.4);
    cout<<add(3.3,5);
    cout<<add(3.3,4.4);
    return 0;
}
