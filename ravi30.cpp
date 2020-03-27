#include<iostream>
using namespace std;
class Integer
{
    int a;
public:
    Integer()
    {
        a=0;
    }
    Integer(int p)
    {
        a=p;
    }
    Integer(Integer &p)
    {
        a=p.a;
    }
    void putdata()
    {
        cout<<a<<endl;
    }
};
main()
{
    Integer i1;
    i1.putdata();
    Integer i2(3);
    i2.putdata();
    Integer i3(i2);
    i3.putdata();
    Integer i4=i2;
    i4.putdata();
    return 0;
}
