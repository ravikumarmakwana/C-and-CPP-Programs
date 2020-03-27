#include<iostream>

using namespace std;

int main()
{
    int a[10],b[10]={0};
    cout<<"Enter the 10 students Marks:\n";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]>=0 &&a[i]<=10)
            b[0]++;
        else if(a[i]>=11 && a[i]<=20)
            b[1]++;
        else if(a[i]>=21 && a[i]<=30)
            b[2]++;
        else if(a[i]>=31 && a[i]<=40)
            b[3]++;
        else if(a[i]>=41 && a[i]<=50)
            b[4]++;
        else if(a[i]>=51 && a[i]<=60)
            b[5]++;
        else if(a[i]>=61 && a[i]<=70)
            b[6]++;
        else if(a[i]>=71 && a[i]<=80)
            b[7]++;
        else if(a[i]>=81 && a[i]<=90)
            b[8]++;
        else
            b[9]++;
    }

    cout<<"\n";
    cout<<"\n 0-10  :: "<<b[0];
    cout<<"\n11-20 :: "<<b[1];
    cout<<"\n21-30 :: "<<b[2];
    cout<<"\n31-40 :: "<<b[3];
    cout<<"\n41-50 :: "<<b[4];
    cout<<"\n51-60 :: "<<b[5];
    cout<<"\n61-70 :: "<<b[6];
    cout<<"\n71-80 :: "<<b[7];
    cout<<"\n81-90 :: "<<b[8];
    cout<<"\n91-100 :: "<<b[9];

    cout<<"\n";
    cout<<"\n 0-10 ::";
    for(int i=b[0];i>0;i--)
        cout<<"*";
    cout<<"\n11-20 ::";
    for(int i=b[1];i>0;i--)
        cout<<"*";
    cout<<"\n21-30 ::";
    for(int i=b[2];i>0;i--)
        cout<<"*";
    cout<<"\n31-40 ::";
    for(int i=b[3];i>0;i--)
        cout<<"*";
    cout<<"\n41-50 ::";
    for(int i=b[4];i>0;i--)
        cout<<"*";
    cout<<"\n51-60 ::";
    for(int i=b[5];i>0;i--)
        cout<<"*";
    cout<<"\n61-70 ::";
    for(int i=b[6];i>0;i--)
        cout<<"*";
    cout<<"\n71-80 ::";
    for(int i=b[7];i>0;i--)
        cout<<"*";
    cout<<"\n81-90 ::";
    for(int i=b[8];i>0;i--)
        cout<<"*";
    cout<<"\n91-100::";
    for(int i=b[9];i>0;i--)
        cout<<"*";

    return 0;
}
