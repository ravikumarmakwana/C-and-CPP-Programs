#include<iostream>
using namespace std;
main()
{
    int a;
    a=10;
    int *p=&a;
    int &q=*p;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    return 0;
}
