#include<cstring>
#include<iostream>
using namespace std;
class ravi
{
    char name[30];
public:
    ostream & operator << (ostream & out)
    {
        out<<"Enter the name:";
    }
    istream & operator >> (istream & in)
    {
        in>>name;
    }
};
main()
{
    ravi k;
    <<k;
    >>k;
    return 0;
}
