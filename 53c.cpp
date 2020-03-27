#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[30];
    int age;
    char gender;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Roll_no:";
        cin>>rollno;
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter the Gender:";
        cin>>gender;
    }
    void putdata()
    {
        cout<<rollno<<"\t"<<name<<"\t"<<age<<"\t"<<gender;
    }
};
class result : public student
{
    int m[3],sum=0;
    float a;
public:
    void getmarks()
    {
        cout<<"enter the three sub. marks:\n";
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
    void calculate()
    {
        for(int i=0;i<3;i++)
            sum=sum+m[i];
        a=sum/3;
    }
    void getresult()
    {
        putdata();
        cout<<"\t"<<a<<"%";
    }
};
main()
{
    result r;
    r.getdata();
    r.getmarks();
    r.calculate();
    cout<<"Roll_no\tName\tAge\tGender\tResult\n";
    r.getresult();
    return 0;
}
