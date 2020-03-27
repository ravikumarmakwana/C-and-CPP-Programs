#include<iostream>
using namespace std;
main()
{
    int T,a[5],n[2];
    int s,l1=0,l2=0;
    cin>>T;
    while(T>0)
    {
        for(int i=0;i<2;i++)
            cin>>n[i];
        for(int i=0;i<5;i++)
            cin>>a[i];
        for(int i=0;i<5;i++)
        {
            if(a[i]%n[0]==0)
                l1++;
            if(a[i]%n[1]==0)
                l2++;
        }
        if(l1>l2)
            cout<<"ALICE";
        else
            cout<<"BOB";
        cout<<endl;
        T--;
    }
    return 0;
}
