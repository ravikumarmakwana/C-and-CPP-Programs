#include<iostream>
using namespace std;
class Person
{
    int age;
    char name[30];
public:
    friend istream & operator >>(istream & out,Person &p)
    {
        cout<<"Enter the age:";
        out>>p.age;
        cout<<"Enter the name:";
        out>>p.name;
        return out;
    }
    friend ostream & operator <<(ostream & out,Person &p)
    {
        out<<"Name of person::"<<p.name<<endl;
        out<<"Age::"<<p.age;
        return out;
    }
};
main()
{
    Person p;
    cin >> p;

    cout << p;
    return 0;
}
