#include<iostream>
using namespace std;
enum week
{
    One,
    Two,
    Three,
    Four
};
main()
{
    int c;
    cout<<"Enter the a:";
    cin>>c;
    switch(c)
    {
        case One: cout<<"11111";
                    break;
        case Two: cout<<"222222";
                    break;
        case Three: cout<<"33333";
                    break;
        case Four: cout<<"44444444";
                    break;
        default: cout<<"Invalid";
    }
    return 0;
}

