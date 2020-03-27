#include<iostream>
using namespace std;
enum number
{
    zero,
    one,
    two
};
main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    switch(n)
    {
        case zero : cout<<"Zero";
                    break;

        case one  : cout<<"One";
                    break;

        case two  : cout<<"Two";
                    break;

        default   : cout<<"Invalid";
                    break;
    }
    return 0;
}
