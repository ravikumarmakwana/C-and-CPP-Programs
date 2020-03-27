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
    Time(int x)
    {
        h=x/60;
        m=x%60;
    }
    void putdata()
    {
        cout<<"Time::"<<h<<" Hour,"<<m<<" Mints";
    }
};
main()
{
    Time t1;
    t1=75;
    t1.putdata();
    return 0;
}
