#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the rollno:";
        cin>>rollno;
    }
    void putdata()
    {
        cout<<rollno<<"\t"<<name<<"\t";
    }
};
class marks:public student
{
    int m[3];
    float avg;
public:
    void getmarks()
    {
        cout<<"Enter the three subjects marks:";
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
    void calculate()
    {
        int sum=0;
        for(int i=0;i<3;i++)
            sum=sum+m[i];
        avg=(float)sum/3;
    }
    void display()
    {
        putdata();
        cout<<avg<<endl;
    }
};
main()
{
    marks s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
        s[i].getmarks();
        s[i].calculate();
    }
    cout<<"\n";
    cout<<"Result of students:\n";
    cout<<"Roll_no\tName\tavg"<<endl;
    for(int i=0;i<5;i++)
    {
        s[i].display();
    }
    return 0;
}
