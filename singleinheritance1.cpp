#include<iostream>
using namespace std;
class student
{
    int age;
    char name[30];
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
        cout<<name<<"\t"<<age<<"\t";
    }
};
class Marks:public student
{
    int m[3];
    int sum=0;
    float avg;
public:
    void getmarks()
    {
        cout<<"Enter the three subjects marks:\n";
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
    void calculate()
    {
        for(int i=0;i<3;i++)
            sum=sum+m[i];
        avg=sum/3;
    }
    void display()
    {
        putdata();
        cout<<avg<<endl;
    }
};
main()
{
    Marks s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
        s[i].getmarks();
        s[i].calculate();
    }
    cout<<"\n * * * Student Information * * * \n";
    cout<<"Name\tAge\tResult\n";
    for(int i=0;i<5;i++)
        s[i].display();
    return 0;
}
