#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
public:
    void getdata()
    {
        cout<<"Enter the second:";
        cin>>s;
        cout<<"enter the min:";
        cin>>m;
        cout<<"Enter the hour:";
        cin>>h;
    }
    void putdata()
    {
        cout<<"Final Time\n";
        cout<<h<<" hour, "<<m<<" minters, "<<s<<" sec";
    }
    void add(Time p,Time q)
    {
        h=p.h+q.h;
        m=p.m+q.m;
        s=p.s+q.s;
        if(s>60)
        {
            m=m+s/60;
            s=s%60;
        }
        if(m>60)
        {
            h=h+m/60;
            m=m%60;
        }
    }
};
main()
{
    Time T1,T2,T3;
    T1.getdata();
    T2.getdata();
    T3.add(T1,T2);
    T3.putdata();
    return 0;
}
