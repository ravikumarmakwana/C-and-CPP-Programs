#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class User
{
    public:
        string name;
        double bal,accountNo,pin;
    public:
        User(){}
        User(string name,double bal)
        {
            srand(time(0));
            name=name;
            bal=bal;
            accountNo=rand()%1000000;
            pin=rand()%10000;
            cout<<"New User is Create Successfully ! ! !"<<endl;
            show();
        }
        void deposite()
        {
            int no;
            cout<<"Enter the Rupess. : ";
            cin>>no;
            bal+=no;
            cout<<"Total Balance : "<<bal;
        }
        void withdrowal()
        {
            int no;
            cout<<"Entert he Rupess : ";
            cin>>no;
            bal-=no;
            cout<<"Total Balance : "<<bal;
        }
        void balanceInf()
        {
            cout<<"Total Balance: "<<bal<<endl;
        }
        void show()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Account no : "<<accountNo<<endl;
            cout<<"Pin no : "<<pin<<endl;
            cout<<"Total balance : "<<bal<<endl;
        }
};
main()
{
    int c;
    string name;
    double bal;
    User u;
    while(1)
    {
        cout<<"1. Create a New User"<<endl;
        cout<<"2. Withdrawal "<<endl;
        cout<<"3. Deposit "<<endl;
        cout<<"4. Balance info "<<endl;
        cout<<"5. Clear Screen"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter the Choice : ";
        cin>>c;
        switch(c)
        {
            case 1: cout<<"Enter the Name: ";
                    getline(cin,name);
                    cout<<"Enter the Balance: ";
                    cin>>bal;
                    u=new User(name,bal);
                    break;

            case 2: u.withdrowal();
        }
    }
    return 0;
}
