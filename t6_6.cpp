#include<iostream>
using namespace std;
class Time
{
    int hr,mins;
public:
    Time()
    {
        hr=0;
        mins=0;
    }
    Time(int x)
    {
        hr=x/60;
        mins=x%60;
    }
    void putdata()
    {
        cout<<"\nTime is:"<<hr<<" hr,"<<mins<<" mins";
    }
};
main()
{
    int x;
    cout<<"enter the mins:";
    cin>>x;
    Time t1;
    t1=x;
    t1.putdata();
    return 0;
}
