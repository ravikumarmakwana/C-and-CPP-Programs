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
};
int counter :: c;
main()
{
    counter p;
    counter q;
    {
        counter a;
    }
    return 0;

}
