#include<iostream>
using namespace std;
class Time
{
    int h,m;
public:
    Time(int x,int y)
    {
        cout<<"Enter the hour:";
        cin>>h;
        cout<<"Enter the mins";
        cin>>m;
    }
    void putdata()
    {
        cout<<"Tiem"<<h<<endl<<m;
    }
};
main()
{
    Time t;
    t=(34,4);
    Time t1(4,5);
    t1.putdata();
    return 0;
}
