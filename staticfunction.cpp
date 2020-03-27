#include<iostream>
using namespace std;
class counter
{
    static int c;
public:
    counter()
    {
        c++;
        cout<<"Object is created::"<<c<<endl;
    }
    ~counter()
    {
        cout<<"Object is deleted::"<<c<<endl;
        c--;
    }
    static void getc()
    {
        cout<<c;
    }
};
int counter:: c;
main()
{
    counter p;
    {
        counter q;
        {
            counter e;
        }
    }
    return 0;
}
