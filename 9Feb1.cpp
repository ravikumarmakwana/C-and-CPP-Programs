#include<iostream>
using namespace std;
main()
{
    int T,n,mi,ma;
    cin>>T;
    while(T>0)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        mi=ma=a[0];
        for(int i=0;i<n;i++)
        {
            if(mi>a[i])
                mi=a[i];
            if(ma<a[i])
                ma=a[i];
        }
        cout<<"Maximum Value: "<<ma<<endl<<"Minimum Value: "<<mi<<endl;
        T--;
    }
}
