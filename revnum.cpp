#include<iostream>
using namespace std;
main()
{
    int n;
    int a=0,b=1,i=0;
    cout<<"Enter the number:";
    cin>>n;
    int sum=0;
    cout<<a;
    cout<<" "<<b<<" ";
    while(i<n-2)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
        i++;
    }
    return 0;
}
