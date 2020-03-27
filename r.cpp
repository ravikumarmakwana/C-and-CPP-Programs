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
        cout<<"\n"<<code<<"\t"<<value;
    }
};
class invent1
{
    int code,item;
    float price;
public:
    invent1()
    {
        code=0;
        item=0;
        price=0;
    }
    invent1(int x,int y,float z)
    {
        code=x;
        item=y;
        price=z;
    }
    operator invent2()
    {
        int x;
        float y;
        x=code;
        y=item*price;
        invent2 temp(x,y);
        return temp;
    }
};
main()
{
    invent1 i1(2,3,50.5);
    invent2 i2;
    i2=i1;
    i2.putdata();
    return 0;
}
