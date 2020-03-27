#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
public:
    void getdata()
    {
        cout<<"Enter the Hour:";
        cin>>h;
        cout<<"Enter the Minis:";
        cin>>m;
        cout<<"Enter the second:";
        cin>>s;
    }
    void putdata()
    {
        cout<<"\nTotal Time:"<<h<<" Hour, "<<m<<" Minis,"<<s<<" sec";
    }
    void add(Time t1,Time t2)
    {
        h=t1.h+t2.h;
        m=t1.m+t2.m;
        s=t1.s+t2.s;
        if(s>=60)
        {
            m+=s/60;
            s%=60;
        }
        if(m>=60)
        {
            h+=m/60;
            m%=60;
        }
    }
};
main()
{
    Time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.add(t1,t2);
    t3.putdata();
    return 0;
}
