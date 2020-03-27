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
    static void count()
    {
        cout<<c<<endl;
    }
};
int test:: c;
main()
{
    test::count();
    test t1;
    test::count();
    test t2;
    test::count();
    test t3;
    test::count();
    return 0;
}
