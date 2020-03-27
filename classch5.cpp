#include<iostream>
using namespace std;
class test
{
    int code;
    static int c;
public:
    void getdata()
    {
        cout<<"Enter the number:";
        cin>>code;
        c++;
    }
    void showcode()
    {
        cout<<"\ncode ::"<<code;
    }
    static void show()
    {
        cout<<"\n"<<"count::"<<c;
    }
};
int test :: c;
main()
{
    test t1,t2,t3;
    t1.getdata();
   // test::show();
    t2.getdata();
    //test::show();
    t3.getdata();
    test::show();
    return 0;
}
