#include<iostream>
using namespace std;
class counter
{
    static int c;
public:
    counter()
    {
        cout<<"Object is Created:"<<++c<<endl;
    }
    ~counter()
    {
        cout<<"Object is Deleted:"<<c--<<endl;
    }
};
int counter :: c;
main()
{
    counter c1;
    {
        counter c2;
        {
            counter c3;
        }
    }
    return 0;
}
