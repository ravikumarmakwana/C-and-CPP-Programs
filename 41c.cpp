#include<iostream>
using namespace std;
int number(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 4;
    else
        return number(n-1)+number(n-2)+number(n-3);
}
main()
{
    int a;
    cout<<"Enter the total steps:";
    cin>>a;
    int b=number(a);
    cout<<"\nTotal Possible cases: "<<b;
    return 0;
}
