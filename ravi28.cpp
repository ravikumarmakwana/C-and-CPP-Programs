#include<iostream>
using namespace std;
class Distance
{
    int km,m;
public:
    void getdata()
    {
        cout<<"Enter the km:";
        cin>>km;
        cout<<"Enter the m:";
        cin>>m;
    }
    void putdata();
    friend Distance add(Distance d1,Distance d2)
    {
        Distance r;
        r.km=d1.km+d2.km;
        r.m=d1.m+d2.m;
        if(r.m>=1000)
        {
            r.km=r.km+r.m/1000;
            r.m=r.m%1000;
        }
        return r;
    }
};
void Distance :: putdata()
{
    cout<<"\nTotal Distance::"<<km<<" km,"<<m<<" m";
}
main()
{
    Distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3=add(d1,d2);
    d3.putdata();
    return 0;
}
