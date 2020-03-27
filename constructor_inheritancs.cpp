#include<iostream>
using namespace std;
class alpha
{
    int a;
public:
    alpha(int x)
    {
        a=x;
    }
    void puta()
    {
        cout<<a;
    }
};
class beta
{
    int b;
public:
    beta(int y)
    {
        b=y;
    }
    void putb()
    {
        cout<<b;
    }
};
class  gamma : public alpha,public beta
{
    int c;
public:
    gamma(int x,int y,int z):alpha(x),beta(y)
    {
        c=z;
    }
    void putc()
    {
        cout<<c;
    }
};
main()
{
    gamma g(3,5,7);
    g.puta();
    g.putb();
    g.putc();
    return 0;
}
