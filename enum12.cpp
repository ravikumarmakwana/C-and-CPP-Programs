#include<iostream>
using namespace std;
enum Number
{
    Zero,
    One,
    Two,
    Three,
    Four,
    Five
};
main()
{
    int c;
    cout<<"Enter the number:";
    cin>>c;
    switch(c)
    {
        case Zero:cout<<"Zero";
                 break;
        case One:cout<<"One";
                 break;
        case Two:cout<<"Two";
                 break;
        case Three:cout<<"Three";
                break;
        case Four:cout<<"Four";
                break;
        case Five:cout<<"Five";
                break;
        default:cout<<"Invalid";
                break;
    }
    return 0;
}
