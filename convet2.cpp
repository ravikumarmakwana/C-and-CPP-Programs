#include<iostream>
using namespace std;
class Time
{
    int h,m;
public:
    Time(int x)
    {
        h=x/60;
        m=x%60;
    }
    void putdata()
    {
        cout<<"Time is ::"<<h<<" hour, "<<m<<" min";
    }
};
main()
{
    Time T1(75);
    T1.putdata();
    return 0;
}
