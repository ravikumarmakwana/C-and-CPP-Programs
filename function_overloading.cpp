#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
double add(double a,int b)
{
    return a+b;
}
double add(int a,double b)
{
    return a+b;
}
main()
{
    cout<<add(1,2)<<endl;
    cout<<add(1.1,2)<<endl;
    cout<<add(1,2.2)<<endl;
    return 0;
}
