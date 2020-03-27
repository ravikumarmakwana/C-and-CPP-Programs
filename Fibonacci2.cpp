#include<iostream>
using namespace std;
int Fibo(int n)
{
    int sum;
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
    {
        sum=Fibo(n-1)+Fibo(n-2);
        cout<<sum<<" ";
        return sum;
    }
}
main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    cout<<0<<" ";
    int l=Fibo(n);
    return 0;
}
