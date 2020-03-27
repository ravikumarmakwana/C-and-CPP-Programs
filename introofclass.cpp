#include<cstdlib>
#include<iostream>
using namespace std;
class player
{
    int s[3];
    int age;
    char name[30];
    float avg;
public:
    void getdata()
    {
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter the three match score\n";
        for(int i=0;i<3;i++)
            cin>>s[i];
    }
    void calculate()
    {
        int sum=0;
        for(int i=0;i<3;i++)
            sum=sum+s[i];
        avg=(float)sum/3;
    }
    void putdata()
    {
        cout<<name<<"\t"<<age<<"\t"<<avg<<endl;
    }
    void sortdata(player p[])
    {
        for(int i=0;i<5;i++)
        {
            for(int j=i;j<5;j++)
            {
                if(p[i].avg<p[j].avg)
                {
                    player temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }
    }
};
main()
{
    player p[5];
    cout<<"Enter the five player details\n";
    for(int i=0;i<5;i++)
    {
        p[i].getdata();
        p[i].calculate();
    }
    player s;
    s.sortdata(p);
    system("CLS");
    cout<<"#--Result of last Three match--#\n";
    cout<<"Name\tAge\tRun_rate\n";
    for(int i=0;i<5;i++)
        p[i].putdata();
    return 0;
}
