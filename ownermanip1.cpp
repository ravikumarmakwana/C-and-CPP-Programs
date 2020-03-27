#include<iostream>
using namespace std;
ostream & unit(ostream & output)
{
    output<<"$";
}
main()
{
    cout<<"Price:";
    cout<<12<<unit;
    return 0;
}
