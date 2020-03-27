#include<iostream>
using namespace std;
class student
{
    int m[3];
    char name[30];
    int rollno;
    float avg;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the three subjects marks\n";
        for(int i=0;i<3;i++)
            cin>>m[i];
        cout<<"Enter the roll no:";
        cin>>rollno;
    }
    void putdata()
    {
        cout<<rollno<<"\t"<<name<<"\t"<<avg<<endl;
    }
    void calculate()
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum=sum+m[i];
        }
        avg=(float)sum/3;
    }
    void sortdata(student s[])
    {
        student temp;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(s[i].avg>s[j].avg)
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
    }
};
main()
{
    student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
        s[i].calculate();
    }
    student s1[5];
    s1[0].sortdata(s);
    cout<<"\nResult of student\n";
    for(int i=0;i<5;i++)
        s[i].putdata();
    return 0;
}
