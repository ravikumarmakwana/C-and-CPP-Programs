#include<iostream>
using namespace std;
enum number
{
    zero,
    one
};
main()
{
    int a;
    cout<<"enter the a:";
    cin>>a;
    switch(a)
    {
        case zero: cout<<"00000000000";
                   break;
        case one : cout<<"11111111";
                    break;
    }
    return 0;
}
