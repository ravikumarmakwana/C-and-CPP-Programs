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
        cout<<endl;
        cout<<"Code::"<<code;
        cout<<endl;
        cout<<"value::"<<value;
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
        cout<<"Enter the code:";
        cin>>code;
        cout<<"Enter the item:";
        cin>>item;
        cout<<"Enter the price:";
        cin>>price;
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
    invent1 i1;
    i1.getdata();
    invent2 i2;
    i2=i1;
    i2.putdata();
    return 0;
}

