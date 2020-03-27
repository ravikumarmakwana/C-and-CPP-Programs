#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        void geta()
        {
            cin>>a;
        }
        void puta()
        {
            cout<<a;
        }
};
class B :public A
{
    int b;
    public:

        void getb()
        {
            cin>>b;
        }
        void putb()
        {
            cout<<b;
        }
};
int main()
{
    A a1;
    a1.geta();
    a1.puta();
    B b1;
    b1.geta();
    b1.puta();
    b1.getb();
    b1.putb();
    return 0;
}
