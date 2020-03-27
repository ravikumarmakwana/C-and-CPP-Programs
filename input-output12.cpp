#include<iostream>
using namespace std;
class person
{
    int age;
    char name[30];
public:
    istream & operator >>(person &p)
    {
        cin>>p.age;
        cin>>p.name;
        return p;
    }
    ostream & operator <<(person &p)
    {
        cout<<p.age;
        cout<<p.name;
        return p;
    }
};
main()
{
    person p;
    cin>>p;
    cout<<p;
    return 0;
}
