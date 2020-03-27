#include<iostream>
using namespace std;
class Employee
{
    char name[30];
    int dept;
    int id;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"enter the id:";
        cin>>id;
        cout<<"Enter the dept:";
        cin>>dept;
    }
    void putdata()
    {
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<dept;
    }
};
class Salary : public Employee
{
    float net_sal,basic_sal,HRA,TA,DA,PF;
public:
    void calculate()
    {
        cout<<"Enter the basic_sal:";
        cin>>basic_sal;
        cout<<"Enter the HRA:";
        cin>>HRA;
        cout<<"enter the TA:";
        cin>>TA;
        cout<<"Enter the DA:";
        cin>>DA;
        cout<<"Enter the PF:";
        cin>>PF;
        net_sal=basic_sal+HRA+TA+DA-PF;
    }
    void putsal()
    {
        putdata();
        cout<<"\t"<<net_sal;
    }
};
main()
{
    Salary s;
    s.getdata();
    s.calculate();
    cout<<"\nId\tName\tDept\tSal";
    s.putsal();
    return 0;
}
