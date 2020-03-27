#include<iostream>
using namespace std;
class Time
{
    int h,m;
public:
    Time()
    {
        h=0;
        m=0;
    }
    Time(int x)
    {
        h=x/60;
        m=x%60;
    }
    void putdata()
    {
        cout<<"Time is ::"<<h<<" hr , "<<m<<" mins"<<endl;
    }
    operator int()
    {
        int x=m+h*60;
        return x;
    }
};
main()
{
    int a;
    Time T1(75);
    a=T1;
    cout<<"Duration is ::"<<a<<endl;
    T1.putdata();
    return 0;
}
