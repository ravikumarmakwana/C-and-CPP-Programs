#include<iostream>
using namespace std;
main()
{
    int a=0,b=1,i=0,no,t;
    cout<<"Enter the terms:";
    cin>>no;
    cout<<endl<<a<<endl<<b<<endl;
    while(i<no-2)
    {
        int sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
        i++;
    }
    return 0;
}
