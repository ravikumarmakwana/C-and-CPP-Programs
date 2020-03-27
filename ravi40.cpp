#include<iostream>
using namespace std;
class invent2
{
    int code;
    float value;
public:
    void putdata()
    {
        cout<<"\ncode:"<<code;
        cout<<"\nvalue:"<<value;
    }
    invent2(int x,int y)
    {
        code=x;
        value=y;
    }
    invent2()
    {
        code=value=0;
    }
};
class invent1
{
    int code,item;
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
    operator invent2()
    {
        invent2 temp(code,item*price);
        return temp;
    }
};
main()
{
    invent1 i1;
    i1.getdata();
    invent2 i2;
    cout<<"Type Conversion From Invent1 to Invent2\n";
    i2=i1;
    i2.putdata();
    return 0;
}
