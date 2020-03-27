#include<iostream>
using namespace std;
class counter
{
    int a;
public:
    counter()
    {
        a=0;
    }
    counter(int x)
    {
        a=x;
    }
    counter(counter & p)
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
    counter A(10);
    A.putdata();
    counter B=A;
    counter C(A);
    counter D;
    D=A;
    B.putdata();
    C.putdata();
    D.putdata();
    return 0;
}
