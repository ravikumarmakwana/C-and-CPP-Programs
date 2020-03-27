#include<iostream>
using namespace std;
class time
{
    int m;
    int hr;
public:
    void getdata()
    {
        cout<<"Enter the hr:";
        cin>>hr;
        cout<<"Enter the min:";
        cin>>m;
    }
    void putdata()
    {
        cout<<"\ntotal time is :"<<hr <<"hr,"<<m<<" m";
    }
    time operator +(time p)
    {
        time temp;
        temp.hr=hr+p.hr;
        temp.m=m+p.m;
        if(temp.m>60)
        {
            temp.hr=temp.hr+temp.m/60;
            temp.m=temp.m%60;
        }
        return temp;
    }
};
main()
{
    time t1;
    t1.getdata();
    time t2;
    t2.getdata();
    time t3;
    t3=t1+t2;
    t3.putdata();
    return 0;
}
