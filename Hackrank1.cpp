#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long long a[n];
    for(long i=0;i<n;i++)
        cin>>a[i];

    for(long i=0;i<n;i++)
    {
        for(long j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                swap(a[i],a[j]);
        }
    }
    long key,i,j;
    int c=0,m=0;
    for(i=0;i<n;i++)
    {
        key=a[i];
        c=0;
        for(j=i;j<n;j++)
        {
            if(a[j]==key)
                c++;
            else
                break;
        }
        if(m<c)
            m=c;
        i=j;
    }
    cout<<m;
    return 0;
}
