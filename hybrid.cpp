#include<iostream>
using namespace std;
class student
{
    int en_no;
    char name[30];
    int age;
public:
    void getdata()
    {
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the En_no:";
        cin>>en_no;
        cout<<"Enter the age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<"\n"<<name<<"\t"<<en_no<<"\t"<<age;
    }
};
class test : public student
{
    protected:
        int m[3];
    public:
        void getmarks()
        {
            cout<<"\nEnter the Three sub. Marks:\n";
            for(int i=0;i<3;i++)
            {
                cin>>m[i];
            }
        }
};
class sport
{
    protected:
        int s;
    public:
        void sportm()
        {
            cout<<"Participating sport ? ";
            cout<<"\nEnter the ans: \n1 for yes  &  2 for No  ";
            int a;
            cin>>a;
            if(a==2)
                s=0;
            else
            {
                cout<<"\n1.National level";
                cout<<"\n2.State level\n3.College level\nEnter the choice:";
                int c;
                cin>>c;
                switch(c)
                {
                    case 1: s=10;
                            break;
                    case 2: s=5;
                            break;
                    case 3: s=3;
                            break;
                    default : cout<<"Invalid";
                                break;
                }
            }
        }
};
class activity
{
protected:
    int k;
public:
    void part()
    {
        int z;
        cout<<"\nYou part in any activity:";
        cout<<"\n1 for yes  &  2 for no";
        cin>>z;
        if(z==1)
            k=10;
        else
            k=0;
        cout<<"\n";
    }
};
class result : public test, public activity, public sport
{
    int  re;
public:
    void calculate()
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum = sum + m[i] ;
        }
        sum=sum/3;
        sum=(sum*80)/100;
        re=k+s+sum;
    }
    void display()
    {
        putdata();
        cout<<"\t"<<re<<"%\n";
    }
};
main()
{
    result r[5];
    for(int i=0;i<5;i++)
    {
        r[i].getdata();
        r[i].getmarks();
        r[i].sportm();
        r[i].part();
    }
    for(int i=0;i<5;i++)
    {
        r[i].calculate();
    }
    cout<<"\nResult of Students:\n";
    cout<<"Name\tEn_no\tAge\tResult\n";
    for(int i=0;i<5;i++)
    {
        r[i].display();
    }
    return 0;
}
