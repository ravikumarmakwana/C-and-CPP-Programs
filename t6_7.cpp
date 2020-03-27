#include<iostream>
using namespace std;
class account
{
    char name[30];
    int account_no;
    int bal;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the account_no:";
        cin>>account_no;
        cout<<"Enter the balance:";
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
    double x;
    x=a;
    cout<<"The balance of this account :"<<x;
    return 0;
}
