#include<iostream>
using namespace std;
main()
{
    long n,p,t;
    long d=0,di,k=0;
    cin>>t;
    while(t>0)
    {
        cin>>n>>p;
        long s[n];
        for(long i=0;i<n;i++)
            cin>>s[i];
        for(long i=1;i<n;i++)
        {
            di=s[i]-s[i-1];
            if(di>0 && di)
        }
        t--;
    }
    return 0;
}
