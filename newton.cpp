#include<iostream>
using namespace std;
main()
{
long N,T;
cin>>N>>T;
int a[N]={0};
for(long i=0;i<N;i++)
cin>>a[i];
long s=0;
for(int i=0;i<N;i++)
{
    if(a[i]!=0)
        s+=a[i]+T;
    else
        s+=a[i];
}

cout<<s;
return 0;
}
