#include<iostream>
using namespace std;
main()
{
    int a,b,sum;
    int i,no;
    cout<<"Enter the no:";
    cin>>no;
    a=0;
    b=1;
    i=0;
    cout<<"\nFibonacci series:\n";
    cout<<a<<"\t"<<b<<"\t";
    while(i<no-2)
    {
        sum=a+b;
        cout<<sum<<"\t";
        a=b;
        b=sum;
        i++;
    }
    return 0;
}
