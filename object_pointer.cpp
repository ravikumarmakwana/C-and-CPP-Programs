#include<cstring>
#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;
public:
    person(char s[],int c)
    {
        strcpy(name,s);
        age=c;
    }
    person()
    {

    }
    person & greatere(person &x)
    {
        if(age>x.age)
            return *this;
        else
            return x;
    }
    void putdata()
    {
        cout<<"Name :"<<name;
        cout<<"\nage:"<<age;
    }
};
main()
{
    person p1,p2,p;
    p1=person("Ravi",12);
    p2=person("Kumar",23);
    p=p1.greatere(p2);
    p.putdata();
    return 0;
}
