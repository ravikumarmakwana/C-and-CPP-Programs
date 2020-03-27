#include<iostream>
using namespace std;
class invent1
{
    int code;
    int item;
    float price;
public:
    void getdata()
    {
        cout<<"Enter the code:";
        cin>>code;
        cout<<"Enter the item:";
        cin>>item;
        cout<<"Enter the price:";
        cin>>price;
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
    invent2()
    {
        code=0;
        value=0;
    }
    invent2(invent1 p)
    {
        code=p.getcode();
        value=p.getitem()*p.getprice();
    }
    void putdata()
    {
        cout<<"\nCode::"<<code;
        cout<<"\nvalue::"<<value;
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
