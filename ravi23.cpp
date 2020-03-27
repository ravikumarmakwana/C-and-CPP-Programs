#include<iostream>
using namespace std;
class test
{
    static int c;
public:
    test()
    {
        c++;
    }
    static void counter()
    {
        cout<<c<<endl;
    }
};
int test :: c;
main()
{
    test p;
    test::counter();
    test q;
    test::counter();
    return 0;
}
