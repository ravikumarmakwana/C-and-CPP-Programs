#include<iostream>
using namespace std;
class Number
{
    int n;
public:
    Number()
    {
        cout<<"Default constructor will call"<<endl;
        n=0;
    }
    Number(int x)
    {
        cout<<"paramaterized constructor will call"<<endl;
        n=x;
    }
    Number(Number &p)
    {
        cout<<"copy construct will call"<<endl;
        n=p.n;
    }
};
main()
{
    Number p;
    Number p1(3);
    Number p2(p1);
    Number p3;
    return 0;
}
