#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int sum=0,a;
    int b=n,b1;
    while(n>10)
    {
        a=n;
        n=n/10;
        b1=n;
        n*=10;
        a-=n;
        cout<<a<<endl;
        sum=sum*10+a;
        n=b1;
    }
    cout<<n<<endl;
    sum=n+sum*10;
    cout<<sum;
    return 0;
}
