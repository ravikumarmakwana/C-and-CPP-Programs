#include<iostream>
using namespace std;
class Time
{
    int h,m;
public:
    Time()
    {
        h=m=0;
    }
    Time(int x,int y)
    {
        h=x;
        m=y;
    }
    Time(Time p,Time q)
    {
        h=p.h+q.h;
        m=p.m+q.m;
        if(m>=60)
        {
            h+=m/60;
            m%=60;
        }
    }
    void putdata()
    {
        cout<<"Total Time:"<<h<<" hour,"<<m<<" mints";
    }
};
main()
{
    Time t1,t2,t3;
    t1=Time(1,34);
    t2=Time(4,50);
    t3=Time(t1,t2);
    t3.putdata();
    return 0;
}
