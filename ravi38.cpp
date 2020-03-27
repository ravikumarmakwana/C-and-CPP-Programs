#include<iostream>
using namespace std;
class Time
{
    int hr,m;
public:
    void putdata()
    {
        cout<<"Time:"<<hr<<" hour,"<<m<<" mins";
    }
    Time(int x)
    {
        hr=x/60;
        m=x%60;
    }
    Time()
    {
        hr=m=0;
    }
};
main()
{
    Time t1(85);
    t1.putdata();
    return 0;
}
