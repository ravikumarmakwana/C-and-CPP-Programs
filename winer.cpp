#include<iostream>
using namespace std;
class member
{
public:
    void showb()
    {
        cout<<"Hi";
    }
    void showc()
    {
        showa();
    }
    static void showa()
    {
        cout<<"Hello";
    }
};
main()
{
    member m;
    m.showb();
    m.showc();
    return 0;
}
