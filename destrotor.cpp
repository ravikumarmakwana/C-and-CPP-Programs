#include<iostream>
using namespace std;
class alph
{
    static int c;
public:
    alph()
    {
        c++;
        cout<<"\nObject is created:"<<c;
    }
    ~alph()
    {
        cout<<"\nObject is deleted:"<<c;
        c--;
    }
};
int alph::c;
main()
{
    alph a1,a2;
    {
        alph a3;
        {
            alph a4;
        }
    }
    return 0;
}
