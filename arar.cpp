#include<iostream>
using namespace std;
class Distance
{
    int m,km;
public:
    void getdata()
    {
        cout<<"Enter the meter:";
        cin>>m;
        cout<<"Enter the Km:";
        cin>>km;
    }
    void putdata()
    {
        cout<<"Total Distance::"<<km<<" km, "<<m<<" m";
    }
    void add(Distance d1,Distance d2)
    {
        m=d1.m+d2.m;
        km=d1.km+d2.km;
        if(m>1000)
        {
            km+=m/1000;
            m%=1000;
        }
    }
};
main()
{
    Distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3.add(d1,d2);
    d3.putdata();
    return 0;
}
