#include<cmath>
#include<iostream>
using namespace std;
main()
{
    long n,sum=0,minodd=INT_MAX;
    cin>>n;
    long a[n]={0};
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            sum+=a[i];
            if(a[i]%2!=0){
        if(minodd >(a[i]))
            minodd=a[i];}
    }
    if(sum%2==0)
        sum-=minodd;
    cout<<sum;
    return 0;
}
