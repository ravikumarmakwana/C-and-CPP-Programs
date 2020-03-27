#include<iostream>
using namespace std;
class pluse
{
    int a;
public:
    void getdata()
    {
        cout<<"Enter the number:";
        cin>>a;
    }
    void putdata()
    {
        cout<<"Addition of two number:"<<a;
    }
    pluse operator +(pluse p)
    {
        pluse temp;
        temp.a=a+p.a;
        return temp;
    }
};
int main()
{
    pluse p1;
    p1.getdata();
    pluse p2;
    p2.getdata();
    pluse p3;
    p3=p1+p2;
    p3.putdata();
    return 0;
}
