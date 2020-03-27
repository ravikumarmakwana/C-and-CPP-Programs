#include<conio.h>
#include<cstdlib>
#include<iostream>
using namespace std;
class item
{
    int code[100];
    int price[100];
    int c=0;
public:
    void getdata()
    {
        cout<<"Enter the code:";
        cin>>code[c];
        cout<<"Enter the price:";
        cin>>price[c];
        c++;
    }
    void display()
    {
        cout<<"\n*** Item List ***\n";
        cout<<"Code\tPrice\n";
        for(int i=0;i<c;i++)
            cout<<code[i]<<"\t"<<price[i]<<endl;
        cout<<endl;
    }
    void Bill()
    {
        cout<<"\n*** Final Bill *** \n";
        cout<<"Code\tPrice\n";
        for(int i=0;i<c;i++)
            cout<<code[i]<<"\t"<<price[i]<<endl;
        int s=0;
        for(int i=0;i<c;i++)
            s=s+price[i];
        cout<<"\nTotal :: "<<s;
    }
    void deletedata()
    {
        int q;
        cout<<"Enter the code:";
        cin>>q;
        for(int i=0;i<c;i++)
        {
            if(code[i]==q)
            {
                for(int j=q-1;j<c;j++)
                {
                    code[j]=code[j+1];
                    price[j]=price[j+1];
                }
                c--;
                break;
            }
        }
    }
};
main()
{
    item t;
    int c;
    while(1)
    {
        cout<<"1.Enter the item\n";
        cout<<"2.Delete Item\n";
        cout<<"3.Display Item\n";
        cout<<"4.Generate Bill\n";
        cout<<"Enter the choice:";
        cin>>c;
        switch(c)
        {
            case 1: t.getdata();
                    break;
            case 2: t.deletedata();
                    break;
            case 3: t.display();
                    break;
            case 4: t.Bill();
                    exit(0);
                    break;
            default:cout<<"Invalid Choice!!!!!!!!!\nTry again\n";
                    break;
        }
        getch();
    }
    return 0;
}
