#include<cstdlib>
#include<iostream>
using namespace std;
class Account
{
protected:
    int bal;
    int fixbal;
    int account_no;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the account_no:";
        cin>>account_no;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the bal:";
        cin>>bal;
    }
    void deposite()
    {
        int x;
        cout<<"Enter the amount:";
        cin>>x;
        bal=bal+x;
    }
    void withdrawal()
    {
        int y;
        cout<<"Enter the amount:";
        cin>>y;
        bal=bal-y;
    }
    void putdata()
    {
        cout<<account_no<<"\t"<<name<<"\t"<<bal;
    }
};
class current: public Account
{
    float i;
public:
        void currentloan()
        {
            int l,t;
            cout<<"\nMaximum loan is 200 % is Possibly\n";
            cout<<"\nEnter the your require loan amount:";
            cin>>l;
            cout<<"Enter the time for loan submitted:";
            cin>>t;
            if(bal*2>l)
            {
                cout<<"Loan is Granted ..\n";
                cout<<"Total interest  :: ";
                i=(l*t*0.1);
                cout<<i;
                cout<<"\nAfter "<<t<<"time you give submit total money:"<<i+l;
            }
            else
                cout<<"Loan is not Granted:";
        }

};
class Savings : public current
{
    float p;
    public:
        void fixdeposit(int p,float r=0.04)
        {
            p=(bal*p*r);
            cout<<"Total interest is ::"<<p;
        }
        void currentbal()
        {
            cout<<"\nThe current balance is::"<<bal;
        }
};
main()
{
    Savings a;
    a.getdata();
    cout<<"\n1.Deposit";
    cout<<"\n2.Withdraw";
    cout<<"\n3.interest Compute for Saving account";
    cout<<"\n4.Compute loan amount :";
    cout<<"\nEnter the choice:";
    int x;
    int c;
    float r;
    cin>>x;
    while(1){
    switch(x)
    {
        case 1: a.deposite();
                a.currentbal();
                break;

        case 2: a.withdrawal();
                a.currentbal();
                break;

        case 3: cout<<"Enter the time for fixdeposit:";
                int year;
                cin>>year;
                cout<<"\n1.Enter the updated rate:";
                cout<<"\n2.Old rate:";
                cout<<"\nEnter the choice:";
                cin>>c;
                if(c==1)
                {
                    cout<<"Enter the new rate:";
                    cin>>r;
                    a.fixdeposit(year,r);
                }
                else
                    a.fixdeposit(year);
                break;

        case 4: a.currentloan();
                break;

        case 5: exit(0);
        break;
    }}
    return 0;
}
