#include<iostream>
using namespace std;
class student
{
    int roll_no;
    char name[30];
public:
    void getdata();
    void putdata();
};
void student :: getdata()
{
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the roll no:";
    cin>>roll_no;
}
void student:: putdata()
{
    cout<<"\n"<<name<<"\t"<<roll_no;
}
main()
{
    student s;
    s.getdata();
    s.putdata();
    return 0;
}
