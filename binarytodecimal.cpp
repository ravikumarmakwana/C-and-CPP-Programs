#include<cmath>
#include<iostream>
using namespace std;
main()
{
    int a,n,sum=0;
    cout<<"Enter the Binary number:";
    cin>>n;
    int i=0;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<"\nDecimal number:"<<sum;
    return 0;
}
