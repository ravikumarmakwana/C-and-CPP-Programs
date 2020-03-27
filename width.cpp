#include<iostream>
using namespace std;
class D
{
    int m,km;
public:
    void getdata()
    {
        cout<<"Enter the km:";
        cin>>km;
        cout<<"Enter the meter:";
        cin>>m;
        cout<<endl;
    }
    void putdata()
    {
        cout<<"\nTotal Distance : "<<km<<" Km, "<<m<<" m";
    }
    D operator +(D p)
    {
        D temp;
        temp.km=km+p.km;
        temp.m=m+p.m;
        if(temp.m>=1000)
        {
            temp.km=temp.km+temp.m/1000;
            temp.m%=1000;
        }
        return temp;
    }
};
main()
{
    D d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3=d1+d2;
    d3.putdata();
    return 0;
}
