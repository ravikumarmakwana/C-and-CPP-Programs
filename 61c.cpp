#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    float v;
public:
    void getdata()
    {
        cout<<"Enter the l:";
        cin>>l;
        cout<<"Enter the b:";
        cin>>b;
        cout<<"Enter the h:";
        cin>>h;
    }
    void putdata()
    {
        cout<<"The volum is:"<<v;
    }
    void calculate()
    {
        v=l*b*h;
    }
};
main()
{
    box *p,v;
    p=&v;
    p->getdata();
    p->calculate();
    p->putdata();
    return 0;
}
