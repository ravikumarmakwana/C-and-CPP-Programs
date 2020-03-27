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
        cout<<"Enter the min:";
        cin>>m;
        cout<<endl;
    }
    void putdata()
    {
        cout<<endl;
        cout<<"Total time is ::"<<h<<" hour,"<<m<<"mins";
    }
    void add(time p,time q)
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
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.add(t1,t2);
    t3.putdata();
    return 0;
}
