#include<conio.h>
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
class Bank
{
    double long ac_no,Phone_no,bal;
    int atm;
    char name[30];
    int age;
public:
    void Open_account()
    {
        system("CLS");
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"The Minimum Balance Rs. 5000  Required !!!!!\n";
        X:cout<<"Enter the Balance:";
        cin>>bal;
        if(bal<5000)
        {
            cout<<"Try Again\n";
            goto X;
        }
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter the Phone_no:";
        cin>>Phone_no;
        srand(time(0));
        P:atm=rand()%10000;
        if(atm<=1000)
            goto P;
        srand(time(0));
        ac_no=rand()%10000000000;
        cout<<"ATM_Number::"<<atm<<endl;
        cout<<"Account_no::"<<ac_no<<endl;
        getch();
    }
    void Withdrawal()
    {
        system("CLS");
        int p;
        cout<<"! --- Your Amount Must be in multiple of 10 --- !\n";
        cout<<"Enter the amount:";
        cin>>p;
        if(p%10!=0)
        {
            cout<<"Condition is Not Satisfied";
        }
        else
        {
            if(bal>p && bal-p>=5000)
            {
                bal-=p;
                cout<<"\nCurrent Balance ::"<<bal;
            }
            else
                cout<<"Minimum Balance is Required Rs.5000";

        }
        getch();
    }
    void Deposit()
    {
        system("CLS");
        int p;
        cout<<"Enter the amount::";
        cin>>p;
        bal+=p;
        cout<<"\nCurrent Balance ::"<<bal;
        getch();
    }
    void Info()
    {
        system("CLS");
        cout<<"!----- Customer Information -----!\n\n";
        cout<<"Name of Customer :: "<<name<<endl;
        cout.setf(ios::fixed,ios::basefield);
        cout<<"Account_no       :: "<<ac_no<<endl;
        cout<<"Age              :: "<<age<<endl;
        cout<<"Balance          :: "<<bal<<endl;
        cout.setf(ios::fixed,ios::basefield);
        cout<<"Phone_no         :: "<<Phone_no<<endl;
        getch();
    }
    int Person()
    {
        system("CLS");
        int p;
        cout<<"Enter the ATM Number::";
        cin>>p;
        if(p==atm)
            return 1;
        else
            return 0;
    }
};
main()
{
    cout<<"! ----- Welcome to Bank ----- !\n\n";
    int p;
    Bank V;
    while(1)
    {
        cout<<"1. Open New Account\n2. Bank Transaction\n3. End Process\n   Enter the Your Choice:";
        cin>>p;
        switch(p)
        {
            case 1: V.Open_account();
                    break;

            case 2: int k,h;
                    h=0;
                    B:if(V.Person())
                        {
                           while(1)
                           {
                           system("CLS");
                           cout<<"1. Balance Info\n2. Withdrawal\n3. Deposit\n4. End Transaction\n Enter the choice:";
                           cin>>k;
                           switch(k)
                           {

                                case 1: V.Info();
                                        break;
                                case 2: V.Withdrawal();
                                        break;
                                case 3: V.Deposit();
                                        break;
                                case 4: goto A;
                                        break;
                                default:cout<<"Wrong Choice";
                                        break;
                           }
                        }
                    }
                    else
                    {
                        cout<<"Wrong ATM Number !!!!\n";
                        h++;
                        if(h<3)
                        {
                            cout<<"Try Again\n";
                            getch();
                            goto B;
                        }
                        else
                        {
                            cout<<"Wrong Transaction !!!!!\n";
                        }
                    }
                    A: cout<<"Thanks for Transaction !!!\n";
                    break;

            case 3: goto C;
                    break;

            default: cout<<"Wrong Choice !!";
                     break;
        }
        getch();
        system("CLS");
    }
    C:system("CLS");
    cout<<"! ----- Thanking for Banking ----- !\n";
    return 0;
}
