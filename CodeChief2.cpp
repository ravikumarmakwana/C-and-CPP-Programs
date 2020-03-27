#include<iostream>
using namespace std;
main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n]={0};
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(a[i]<a[j])
                    b[i]++;
            }
        }
        cout<<endl;
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        T--;
    }
    return 0;
}
