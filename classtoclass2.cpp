#include<iostream>
using namespace std;
class invent2
{
    int code;
    float value;
public:
    invent2()
    {
        code=value=0;
    }
    invent2(int x,float y)
    {
        code=x;
        value=y;
    }
    void putdata()
    {
        cout<<"\nCode::"<<code;
        cout<<"\nvalue:"<<value;
    }
};
class invent1
{
    int code;
    int item;
    float price;
public:
    void getdata()
    {
        cout<<"Enter the code::";
        cin>>code;
        cout<<"Enter the item:";
        cin>>item;
        cout<<"Enter the price:";
        cin>>price;
    }
    operator invent2()
    {
        int x=code;
        float y=price*item;
        invent2 temp(x,y);
        return temp;
    }
};
main()
{
    invent1 i1;
    invent2 i2;
    i1.getdata();
    i2=i1;
    i2.putdata();
    return 0;
}
