#include<iostream>
using namespace std;
class invent1
{
    int code,item;
    float price;
public:
    void getdata()
    {
        cout<<"Enter the code:";
        cin>>code;
        cout<<"enter the price:";
        cin>>price;
        cout<<"Enter the item:";
        cin>>item;
    }
    int getcode()
    {
        return code;
    }
    int getitem()
    {
        return item;
    }
    float getprice()
    {
        return price;
    }
};
class invent2
{
    int code;
    float value;
public:
    void putdata()
    {
        cout<<"\nCode:"<<code;
        cout<<"\nValue:"<<value;
    }
    invent2(invent1 p)
    {
        code=p.getcode();
        value=p.getitem()*p.getprice();
    }
    invent2()
    {
        code=value=0;
    }
};
main()
{
    invent1 i1;
    i1.getdata();
    invent2 i2;
    i2=i1;
    i2.putdata();
    return 0;
}
