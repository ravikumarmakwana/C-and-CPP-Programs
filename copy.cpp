#include<iostream>
using namespace std;
class number
{
    int a,b;
public:
    number()
    {
        a=0;
        b=0;
    }
    number(int i,int j)
    {
        a=i;
        b=j;
    }
    number(number &i)
    {
        if(i.a>i.b)
            cout<<"a is max";
        else
            cout<<"b is max";
    }
};
main()
{
    number n(11,21);
    number p(n);
    return 0;
}
