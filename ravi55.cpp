#include<cstdlib>
#include<iostream>
using namespace std;
int c=0;
class Item
{
    int code,price,total;
    char name[30];
public:
    void getdata()
    {
        cin>>code>>name>>price;
    }
    void putdata()
    {
        cout<<code<<"\t"<<name<<"\t"<<price<<endl;
    }
    void calculate(Item p[])
    {
        total=0;
        for(int i=0;i<c;i++)
            total=total+p[i].price;
        cout<<"Total :: "<<total;
    }
    void removedata(Item p[])
    {
        int k;
        cout<<"Enter the code:";
        cin>>k;
        for(int i=0;i<c;i++)
        {
            if(p[i].code==k)
            {
                for(int j=i;j<c;j++)
                    p[j]=p[j+1];
                c--;
                break;
            }
        }
    }
};
main()
{
    Item I[50],I1;
    int l;
    while(1)
    {
        cout<<"1.Enter the new Item:\n2.Delete Item\n3.Display Item\n4.Grand Total\nEnter the choice:";
        cin>>l;
        switch(l)
        {
            case 1: cout<<"Code\tName\tPrice\n";
                    I[c].getdata();
                    c++;
                    break;
            case 2: I1.removedata(I);
                    break;

            case 3: cout<<endl;
                    cout<<"Code\tName\tPrice\n";
                    for(int i=0;i<c;i++)
                        I[i].putdata();
                    break;

            case 4: cout<<endl;
                    cout<<"Code\tName\tPrice\n";
                    for(int i=0;i<c;i++)
                        I[i].putdata();
                    I1.calculate(I);
                    cout<<"\nThank you for Shopping!!!!\n";
                    exit(0);
                    break;
        }
    cout<<endl;
    }
    return 0;
}
