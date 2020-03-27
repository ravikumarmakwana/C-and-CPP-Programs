#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[30];
    int dept;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Roll_no:";
        cin>>rollno;
        cout<<"Enter the dept:";
        cin>>dept;
    }
    void putdata()
    {
        cout<<"\n"<<name<<"\t"<<rollno<<"\t"<<dept;
    }
};
class test :public student
{
    protected:
    int m[3];
    public:
    void getmarks()
    {
        cout<<"Enter the three subject marks:\n";
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
};
class result : public test
{
    private:
    float a;
    public:
    void calculate()
    {
        a=0;
        for(int i=0;i<3;i++)
            a=a+m[i];
        a=a/3;
    }
    void getresult()
    {
        cout<<"\t"<<a;
    }
};
main()
{
    result t1[5];
    for(int i=0;i<5;i++)
    {
        t1[i].getdata();
        t1[i].getmarks();
    }
    for(int i=0;i<5;i++)
        t1[i].calculate();
    cout<<"\n";
    cout<<"Result of Student:\n";
    cout<<"\nName\tRoll_no\tDept.\tResult\n";
    for(int i=0;i<5;i++)
    {
        t1[i].putdata();
        t1[i].getresult();
    }
    return 0;
}
