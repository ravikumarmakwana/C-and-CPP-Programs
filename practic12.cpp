#include<iostream>
using namespace std;
class Person
{
    int age;
    char name{30};
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<"The Elder Person ::"<<name;
    }
    Person & maximum(Person &p)
    {
        if(age>p.age)
            return * this;
        else
            return p;
    }
};
main()
{
    Person p1,p2,p3;
    p1.getdata();
    p2.getdata();
    p3=p1.maximum(p2);
    p3.putdata();
    return 0;
}
