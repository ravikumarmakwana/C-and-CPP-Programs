#include<iostream>
using namespace std;
class account
{
    int no;
    char name[30];
    int bal;
public:
    void getdata()
    {
        cout<<"Enter the account no:";
        cin>>no;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the bal:";
        cin>>bal;
    }
    operator double()
    {
        return bal;
    }
};
main()
{
    account a;
    a.getdata();
    double d=a;
    cout<<d;
    return 0;
}
