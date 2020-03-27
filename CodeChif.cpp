#include<iostream>
using namespace std;
main()
{
    long T;
    cin>>T;
    while(T>0)
    {
        long L,R;
        long sum=0;
        cin>>L>>R;
        for(int i=L;i<=R;i++)
        {
            sum=sum^i;
        }
        if(sum%2==0 || sum==2)
            cout<<"Even";
        else
            cout<<"Odd";
        cout<<endl;
        T--;
    }
    return 0;
}
