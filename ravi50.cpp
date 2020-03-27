#include<iostream>
using namespace std;
class Time
{
    int h,m;
public:
    void getdata()
    {
        cout<<"Enter the hr:";
        cin>>h;
        cout<<"Enter the m:";
        cin>>m;
    }
    void putdata()
    {
        cout<<"\nTotal time:"<<h<<"Hour,"<<m<<" Minis";
    }
    void add(Time p,Time q)
    {
        h=p.h+q.h;
        m=p.m+q.m;
        if(m>=60)
        {
            h=h+m/60;
            m=m%60;
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
