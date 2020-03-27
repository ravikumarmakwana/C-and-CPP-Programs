#include<iostream>
using namespace std;
class student
{
    int m[3],sum=0;
    float avg;
    char name[30];
public:
    void getdata()
    {
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"Enter the three Subject Marks:\n";
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
    void putdata()
    {
        cout<<endl<<name<<"\t"<<avg;
    }
    void calculate()
    {
        for(int i=0;i<3;i++)
        {
            sum=sum+m[i];
        }
        avg=sum/3;
    }
    void sortdata(student s[])
    {
        student temp;
        for(int i=0;i<5;i++)
        {
            for(int j=i;j<5;j++)
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
    cout<<"Enter the student Information\n";
    for(int i=0;i<5;i++)
        s[i].getdata();
    for(int i=0;i<5;i++)
        s[i].calculate();
    student s1[5];
    s1[0].sortdata(s);
    cout<<"\n\nStudent Result\n";
    cout<<"Name\tResult\n";
    for(int i=0;i<5;i++)
        s[i].putdata();
    return 0;
}
