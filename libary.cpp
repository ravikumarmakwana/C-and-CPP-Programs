#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;
class Item
{
    float price;
    char name[30];
    int quantity;
    float sum;
public:
    void getdata()
    {
        cout<<"Enter the name of item:";
        cin>>name;
        cout<<"Enter the quantity:";
        cin>>quantity;
        cout<<"Enter the price:";
        cin>>price;
    }
    void calculate(Item p[],int q)
    {
        sum=0;
        for(int i=0;i<q;i++)
        {
            sum+=p[i].price*p[i].quantity;
        }
    }
    void putdata(Item p[],int q)
    {
        cout<<endl;
        system("CLS");
        cout<<"#-----# Bile of Total Items #-----#\n\n";
        cout<<"Name\tPrice\tQuantity\n";
        for(int i=0;i<q;i++)
            cout<<p[i].name<<"\t"<<p[i].price<<"\t"<<p[i].quantity<<endl;
        cout<<"\n";
        cout<<"Total ::  Rs."<<sum;
    }
};
main()
{
    int n;
    ofstream fout("Item.txt");
    cout<<"Enter the number of Total Items:";
    cin>>n;
    Item I[n],p;
    for(int i=0;i<n;i++)
            I[i].getdata();
    p.calculate(I,n);
    p.putdata(I,n);
    fout.write((char *)&I,sizeof(I));
    fout.close();
    return 0;
}
