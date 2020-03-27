#include<iostream>
using namespace std;
class time
{
    int h,s,m;
public:
    void getdata()
    {
        cout<<"Enter the h:";
        cin>>h;
        cout<<"Enter the m:";
        cin>>m;
        cout<<"Enter the s:";
        cin>>s;
    }
    void putdata()
    {
        cout<<"\nTime is:\n"<<h<<" hr "<<m<<" m "<<s<<" s ";
    }
    void calculate(time *t1,time *t2)
    {
        h=t1->h+t2->h;
        m=t1->m+t2->m;
        s=t1->s+t2->s;
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
    time t1,t2,t3;
    time *p1,*p2,*p3;
    p1=&t1;
    p1->getdata();
    p2=&t2;
    p3=&t3;
    p2->getdata();
    p3->calculate(p1,p2);
    p3->putdata();
    return 0;
}
