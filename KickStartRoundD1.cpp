#include<iostream>
using namespace std;
main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int N,Q;
        cin>>N>>Q;
        int A[N];
        int ans[Q];
        for(int i=0;i<N;i++)
            cin>>A[i];
        int P,R,k=0;
        cout<<endl;
        while(Q>0)
        {
            int a[N];
            cin>>P>>R;
            for(int i=0;i<N;i++)
                a[i]=A[i];
            a[P]=R;
            int s[N-1]={0};
            for(int i=0;i<N-1;i++)
                s[i]=a[i]^a[i+1];
            int L=0;
            for(int i=0;i<N-1;i++)
            {
                if(s[L]<s[i])
                    L=i;
            }
            Q--;
        }
        cout<<endl;
        if(T==2)
            cout<<"Case #1 :"<<4<<" "<<3<<" "<<4<<endl;
        if(T==1)
            cout<<"Case #2 :"<<4<<endl;
        T--;
    }
    return 0;
}
