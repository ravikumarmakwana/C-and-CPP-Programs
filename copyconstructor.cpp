#include<iostream>
using namespace std;
class number
{
    static int n;
public:
    void display()
    {
        cout<<n;
    }
};
int number :: n=10;
main()
{
    number p;
    p.display();
    return 0;
}
