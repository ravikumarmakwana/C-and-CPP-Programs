#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class Player
{
    char Pname[30];
    int runs,matchs;
    float avg;
public:
    void getdata()
    {
        cout<<"Enter the Name:";
        cin>>Pname;
        cout<<"Enter the No of Matches:";
        cin>>matchs;
        cout<<"Enter the Total Runs:";
        cin>>runs;
        avg=runs/(float)matchs;
    }
    void putdata()
    {
        cout<<Pname<<"\t"<<runs<<"\t"<<matchs<<"\t"<<avg<<endl;
    }
    void sortdata(Player p[],int c)
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(c==1)
                {
                    if(0>strcmp(p[i].Pname,p[j].Pname))
                        swaps(p[i],p[j]);
                }
                if(c==2)
                {
                    if(p[i].runs<p[j].runs)
                        swaps(p[i],p[j]);
                }
                if(c==3)
                {
                    if(p[i].matchs<p[j].matchs)
                        swaps(p[i],p[j]);
                }
                if(c==4)
                {
                    if(p[i].avg<p[j].avg)
                        swaps(p[i],p[j]);
                }
            }
        }
    }
    void swaps(Player &p1,Player &p2)
    {
        Player temp=p1;
        p1=p2;
        p2=temp;
    }
};
main()
{
    cout<<"Enter the Five Player Information ! ! !\n";
    Player p[5],q;
    int c;
    for(int i=0;i<5;i++)
        p[i].getdata();
    cout<<"Process of Sorting !!!\n";
    cout<<endl;
    while(1)
    {
        cout<<"1. Sorting By name\n2. Sorting By Runs\n3. Sorting By Matches\n4. Sorting By Avg\n5.Exit\nEnter the choice:";
        cin>>c;
        if(c==5)
            exit(0);
        q.sortdata(p,c);
        cout<<"\nPlayer Information\n\n";
        cout<<"Name\tRuns\tMatch\tAvg\n";
        for(int i=0;i<5;i++)
            p[i].putdata();
        cout<<endl;
    }
    return 0;
}
