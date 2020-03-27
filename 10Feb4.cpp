#include<iostream>
using namespace std;
class Doler
{
    int x;
public:
    Doler(){}
    Doler(int a){x=a;}
    int get(){return x;}
};
class Ruppes
{
    int x;
public:
    Ruppes(){}
    Ruppes(int a){x=a;}
    Ruppes(Doler c)
    {
        x=c.get()*70;
    }
    void show()
    {
        cout<<x;
    }
};
main()
{
    Doler d=1;
    Ruppes r;
    r=d;
    r.show();
    return 0;
}
