#include<iostream>
using namespace std;
class Person
{
    int age;
    char name[30];
public:
    friend ostream & operator << (ostream & out,Person &p)
    {
        out<<"Name::"<<p.name<<endl;
        out<<"Age::"<<p.age;
    }
    friend istream & operator >> (istream & out,Person &p)
    {
        cout<<"Enter the name:";
        out>>p.name;
        cout<<"Enter the Age:";
        out>>p.age;
    }
};
main()
{
    Person p;
    cin>>p;
    cout<<p;
    return 0;
}
