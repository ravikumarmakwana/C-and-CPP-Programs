#include<iostream>
using namespace std;
class Person
{
    int age;
    char name[30];
public:
    friend ostream & operator <<(ostream & dout,Person &p)
    {
        dout<<"Name of Person ::"<<p.name<<endl;
        dout<<"Age::"<<p.age;
    }
    friend istream & operator >>(istream & din,Person &p)
    {
        cout<<"Enter the name:";
        din>>p.name;
        cout<<"Enter the age:";
        din>>p.age;
    }
};
main()
{
    Person p;
    cin>>p;
    cout<<p;
    return 0;
}
