#include<iostream>
using namespace std;
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
    invent2(int x,float y)
    {
        code=x;
        value=y;
    }
    void putdata()
    {
        cout<<"\nCode::"<<code;
        cout<<"\nPrice::"<<value;
    }
};
class invent1
{
    int code;
    int item;
    float price;
public:
    invent1(int x,int y,float z)
    {
        code=x;
        item=y;
        price=z;
    }
    operator invent2()
    {
        int x=code;
        float y=item*price;
        invent2 temp(x,y);
        return temp;
    }
};
main()
{
    invent1 i1(1,2,3.2);
    invent2 i2;
    i2=i1;
    i2.putdata();
    return 0;
}
