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
        cout<<code<<endl<<value;
    }
};
class invent1
{
    int code,item;
    float price;
public:
    operator invent2 ()
    {
        int x=code;
        float y=item*price;
        invent2 p(x,y);
        return p;
    }
    invent1(int x,int y,float z)
    {
        code=x;
        item=y;
        price=z;
    }
};
main()
{
    invent1 p(1,2,3);
    invent2 q;
    q=p;
    q.putdata();
    return 0;
}
