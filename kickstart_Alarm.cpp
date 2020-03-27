#include<iostream>
using namespace std;
main()
{
    int T,p=0;
    cin>>T;
    int N,K,x1,y1,C,D,E1,E2,F;
    cin>>N>>K>>x1>>y1>>C>>D>>E1>>E2>>F;
    while(T>0)
    {
        int A[N];
        for(int i=0;i<=N;i++)
        {
            x1=(C*x1+D*y1+E1)%F;
            y1=(D*x1+C*y1+E2)%F;
            A[i]=(x1+y1)%F;
            cout<<A[i]<<endl;
        }
        long int sum=0;
        for(int i=0;i<=N;i++)
            sum=sum+A[i];
        sum=sum%(1000000000+7);
        p++;
        cout<<"\nCase #"<<p<<": "<<sum;
        T--;
    }
    return 0;
}
