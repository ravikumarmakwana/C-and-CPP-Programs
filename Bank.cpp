#include<conio.h>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Bank
{
    int account_no;
    char name[30];
    int bal,atm;
public:
    void getdata()
    {
        cout<<"Enter the Name:";
        cin>>name;
        srand(time(0));
        account_no=rand()%100;
        cout<<"Account NO::"<<account_no;
        cout<<endl;
        srand(time(0));
        atm=rand()%10000;
        cout<<"ATM Number::"<<atm<<endl;
        cout<<"Minimum balance is Necessary 5000 Rs."<<endl;
        cout<<"Enter the balance:";
        A: cin>>bal;
        if(bal<5000)
        {
            cout<<"Try again";
            goto A;
        }
    }
    void info()
    {
        cout<<"\n";
        system("CLS");
        cout<<"Customer Information\n";
        cout<<"Name::"<<name<<endl;
        cout<<"Balance::"<<bal<<endl;
        cout<<"Account_no::"<<account_no<<endl;
    }
    void Withdrawal()
    {
        system("CLS");
        int p;
        cout<<"Enter the Amount::";
        cin>>p;
        if(bal>p)
            bal=bal-p;
        else
            cout<<"Low Balance";
    }
    void Deposit()
    {
        system("CLS");
        int p;
        cout<<"Enter the Amount::";
        cin>>p;
        bal+=p;
        cout<<"\nTotal Balance ::"<<bal;
    }
    void bankopr()
    {
        int k;
        C:cout<<"Enter the ATM Number::";
        cin>>k;
        if(k==atm)
        {
            int l;
            while(1)
            {
                system("CLS");
                cout<<"\n1. Balance Checking\n2. Withdrawal\n3. Deposit\n4. End Transaction"<<endl;
                cout<<" Enter the Choice:";
                cin>>l;
                switch(l)
                {
                    case 1: info();
                            break;

                    case 2: Withdrawal();
                            break;

                    case 3: Deposit();
                            break;

                    case 4: goto B;
                            break;
                }
                getch();
            }
        }
        else
        {
            cout<<"\nWrong ATM Number !!!!!!\nTry again\n";
            goto C;
        }
        B:system("CLS");
        cout<<"\nThanking For Banking!!!!!!!!!!!\n";
    }
};
main()
{
    cout<<"Welcome To Bank of VVP"<<endl;
    cout<<"Open Account"<<endl;
    Bank p;
    p.getdata();
    system("CLS");
    p.bankopr();
    return 0;
}
