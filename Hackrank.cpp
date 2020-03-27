#include<iostream>
using namespace std;
int main()
{
    string n;
    long long k,sum=0,a,no;
    cin>>n>>k;
    for(long i=0;i<n.length();i++)
        sum+=n[i]-'0';
    sum=sum*k;
    while(sum>9)
    {
        no=sum;
        sum=0;
        while(no>0)
        {
            a=no%10;
            sum+=a;
            no/=10;
        }
    }
    cout<<sum;
    return 0;
}
