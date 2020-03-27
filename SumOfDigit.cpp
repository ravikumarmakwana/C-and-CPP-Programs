#include<iostream>
using namespace std;
main()
{
    int no;
    cin>>no;
    int a,b;
    a=no%10;
    no/=10;
    b=no%10;
    cout<<a<<" "<<b;
}
