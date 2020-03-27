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
    void putdata()
    {
        cout<<"\nTotal Distance: ";
        cout<<km<<" km, "<<m<<" m";
    }
    friend Distance add(Distance ,Distance);
};
Distance add(Distance d1,Distance d2)
{
    Distance temp;
    temp.km=d1.km+d2.km;
    temp.m=d1.m+d2.m;
    if(temp.m>=1000)
    {
        temp.km+=temp.m/1000;
        temp.m%=1000;
    }
    return temp;
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
