#include<iostream>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class customer
{
    long int account_no;
    char name[20];
    int age;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        srand(int (0));
        account_no=rand()%1000000000;
        cout<<"Enter the age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<"\n"<<name<<"\t"<<account_no<<"\t"<<age;
    }
};
main()
{
    customer s;
    s.getdata();
    s.putdata();
    return 0;
}
