#include<iostream>
using namespace std;
enum shape{One,Two,Three};
main()
{
    int a;
    cout<<"Enter the a:";
    cin>>a;
    switch(a)
    {
        case One:   cout<<"Hello0";
                    break;
        case Two:   cout<<"hello1";
                    break;
        case Three :cout<<"Hello2";
                    break;
        default:cout<<"Invalid";
                break;
    }
    return 0;
}
