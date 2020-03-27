#include<cstdlib>
#include<iostream>
using namespace std;
class student
{
    int age;
    string name;
public:
    void getdata();
    void putdata();
};
void student::getdata()
{
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the age:";
    cin>>age;
}
void student::putdata()
{
    cout<<"\nName:"<<name;
    cout<<"\nage:"<<age;
}
main()
{
    student s;
    s.getdata();
    s.putdata();
    return 0;

}
