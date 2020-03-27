#include<iostream>
using namespace std;
class Person
{
    int age;
    char name[30];
public:
    Person()
    {
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<age<<"\t"<<name<<endl;
    }
    void filter()
    {
        if(age<15)
        {
            cout<<"\nName::"<<name<<endl;
            cout<<"Age::"<<age;
        }
    }
};
main()
{
    Person p[5];
    cout<<"Age\tName\n";
    for(int i=0;i<5;i++)
        p[i].putdata();
    cout<<"Age Less than 15\n";
    cout<<"Age\tName\n";
    for(int i=0;i<5;i++)
        p[i].filter();
    return 0;
}
