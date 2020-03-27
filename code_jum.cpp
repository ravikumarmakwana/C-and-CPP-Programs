#include<iostream>
using namespace std;
int Number(int N,int A,int B)
{
    int i=0,n[4],a[4],b[4],p,n1,n2,n3;
    while(N!=0)
    {
        p=N%10;
        n[i]=p;
        N=N/10;
        i++;
    }
    n1=i;
    i=0;
    while(A!=0)
    {
        p=A%10;
        a[i]=p;
        A=A/10;
        i++;
    }
    n2=i;
    i=0;
    while(B!=0)
    {
        p=B%10;
        b[i]=p;
        B=B/10;
        i++;
    }
    n3=i;
    for(int k=0;k<n1;k++)
    {
        for(int m=0;m<n2;m++)
        {
            if(n[k]==a[m])
                return 0;
        }
    }
    for(int k=0;k<n1;k++)
    {
        for(int m=0;m<n3;m++)
        {
            if(n[k]==b[m])
                return 0;
        }
    }
    return 1;
}
main()
{
    int T,x=0;
    cin>>T;
    while(T>0)
    {
        x++;
        int N,A,B;
        cin>>N;
        for(int i=1;i<N;i++)
        {
            for(int j=1;j<N;j++)
            {
                if((i+j)==N)
                {
                    A=i;
                    B=j;
                    if( Number(N,A,B))
                        goto C;
                }
            }
        }
        C: cout<<"Case #"<<x<<" : "<<A<<" "<<B<<endl;
        T--;
    }
    return 0;
}
