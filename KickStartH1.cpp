#include<iostream>
using namespace std;
main()
{
    int T,x=0;
    cin>>T;
    while(T>0)
    {
        int N;
        cin>>N;
        int a[N],ans[N];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<N;i++)
        {
            if(i==0 || i==1)
                ans[i]=1;
            else if(i==2)
                ans[i]=ans[i-1]+1;
            else
            {
                if(a[i]<=a[i-1])
                    ans[i]=ans[i-1];
                else
                    ans[i]=ans[i-1]+1;
            }
        }
        x++;
        cout<<"Case #"<<x<<": ";
        for(int i=0;i<N;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        T--;
    }
    return 0;
}
