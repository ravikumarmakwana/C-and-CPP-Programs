#include<iostream>
using namespace std;
class time
{
    int h,m;
public:
    void getdata()
    {
        cout<<"Enter the hour:";
        cin>>h;
        cout<<"Enter the mins:";
        cin>>m;
    }
    void putdata()
    {
        cout<<"Final time:"<<h<<" hour"<<m<<" Mins";
    }
    friend time calculate(time t1,time  t2);
};
time calculate(time t1,time t2)
{
    time t3;
    t3.h=t1.h+t2.h;
    t3.m=t1.m+t2.m;
    if(t3.m>60)
    {
        t3.h=t3.h+t3.m/60;
        t3.m=t3.m%60;
    }
    return t3;
}
main()
{
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3=calculate(t1,t2);
    t3.putdata();
    return 0;
}

