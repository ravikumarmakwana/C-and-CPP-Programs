#include<iostream>
using namespace std;
enum Number
{
    zero,
    one,
    two,
    three
};
main()
{
    int c;
    cout<<"Enter the no:";
    cin>>c;
    cout<<endl;
    switch(c)
    {
        case zero:  cout<<"";
                    break;
        case one:   cout<<"*";
                    break;
        case two:   cout<<"**";
                    break;
        case three: cout<<"***";
                    break;
        default:    cout<<"Invalid";
                    break;
    }
    return 0;
}
