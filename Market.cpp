#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
class Item
{
    int code;
    int price;
    int total;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the code:";
        cin>>code;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the price:";
        cin>>price;
    }
    void putdata()
    {
        cout<<code<<"\t"<<name<<"\t"<<price<<endl;
    }
    void bile(Item p[],int &n)
    {
        total=0;
        for(int i=0;i<n;i++)
        {
            total+=p[i].price;
        }
        cout<<"\nTotal ::"<<total;
    }
    void update(Item p[],int &n)
    {
        int c,s;
        cout<<"Enter the code:";
        cin>>c;
        cout<<"\n1.Price\n2.Name\nEnter the choice:";
        cin>>s;
        switch(s)
        {
            case 1: int pa;
                    cout<<"Enter the new price:";
                    cin>>pa;
                    for(int i=0;i<n;i++)
                    {
                        if(p[i].code==c)
                            p[i].price=pa;
                    }
                    break;
            case 2: char na[30];
                    cout<<"Enter the name:";
                    cin>>na;
                    for(int i=0;i<n;i++)
                    {
                        if(p[i].code==c)
                            strcpy(p[i].name,na);
                    }
                    break;
        }
    }
    void Remove(Item p[],int &n)
    {
        cout<<"Enter the code:";
        int c;
        cin>>c;
        int c1=0;
        for(int i=0;i<n;i++)
        {
            if(p[i].code==c)
            {
                c1=1;
                for(int j=i;j<n-1;j++)
                    p[i]=p[i+1];
            }
        }
        if(c1==1)
            n--;
    }
};
main()
{
    Item i[10],p;
    int n=0;
    cout<<"#-----Welcome in market-----#\n";
    while(1)
    {
        cout<<"\n1.Enter the item\n2.Update item\n3.Remove item\n4.Bile\nEnter the choice:";
        int c;
        cin>>c;
        switch(c)
        {
            case 1: i[n].getdata();
                    n++;
                    break;
            case 2: cout<<"\nCode\tName\tPrice\n";
                    for(int k=0;k<n;k++)
                        i[k].putdata();
                    p.update(i,n);
                    break;
            case 3: cout<<"\nCode\tName\tPrice\n";
                for(int k=0;k<n;k++)
                        i[k].putdata();
                    p.Remove(i,n);
                    break;
            case 4: cout<<"\nCode\tName\tPrice\n";
                for(int k=0;k<n;k++)
                        i[k].putdata();
                    p.bile(i,n);
                    exit(0);
                    break;
        }
    }
    return 0;
}
