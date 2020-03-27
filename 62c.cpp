#include<iostream>
using namespace std;
class time
{
    int h,m,s;
public:
    void getdata()
    {
        cout<<"Enter the hour:";
        cin>>h;
        cout<<"Enter the min:";
        cin>>m;
        cout<<"Enter the s:";
        cin>>s;
    }
    void putdata()
    {
        cout<<"Time is :: "<<h<<" hr"<<m<<" mins "<<s<<" seconds";
    }
};
main()
{
    time *p,t;
    p=&t;
    p->getdata();
    p->putdata();
    return 0;
}
