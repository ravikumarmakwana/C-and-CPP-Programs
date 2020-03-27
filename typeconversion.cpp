#include<iostream>
using namespace std;
class time
{
    int h,m;
public:
    time ()
    {
        h=0;
        m=0;
    }
    time(int x)
    {
        h=x/60;
        m=x%60;
    }
    void putdata()
    {
        cout<<"Time:"<<h<<" hour,"<<m<<" mins";
    }
};
main()
{
    time t(122);
    t.putdata();
    return 0;
}
