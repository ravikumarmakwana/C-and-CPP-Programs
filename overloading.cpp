#include<iostream>
using namespace std;
class output
{
    int c;
public:
    void operator <<()
    {
        cout<<"Enter the value::"<<c;
    }
    void operator >>(int c)
    {
        cout<<"cin call:";
    }
};
main()
{
    output p;
    p>>
    p<<;
    return 0;
}
