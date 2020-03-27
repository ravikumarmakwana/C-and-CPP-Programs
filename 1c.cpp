#include<iostream>

using namespace std;

int main()
{
    int a,b,i,sum=0;
    a=0;
    i=0;
    b=1;
    int n;
    cout<<"Enter the terms:";
    cin>>n;
    cout<<a<<" "<<b<<" ";
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
