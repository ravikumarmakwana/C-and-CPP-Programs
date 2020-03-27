#include<cstdlib>
#include<iostream>
using namespace std;
#include<fstream>
class item
{
    public:
    int no=0;
    char name[50];
    int q;
    float price;
    float sum=0;
public:
    void getdata()
    {
        no++;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Quantity:";
        cin>>q;
        cout<<"Enter the price:";
        cin>>price;
    }
    void putdata()
    {
        cout<<endl;
        cout<<name<<"\t"<<price<<"\t"<<q;
    }
};
main()
{
    int c;
    fstream file,file1;
    file.open("item.txt",ios::out);
    file1.open("item.txt",ios::in);
    item i;
    cout<<"Welcome in Market\n";
    while(1)
    {
        cout<<"1.Enter the new item"<<endl;
        cout<<"2.Remove Item"<<endl;
        cout<<"3.Modify the Item"<<endl;
        cout<<"4.Generate Bile"<<endl;
        cout<<"Enter the choice:";
        cin>>c;
        switch(c)
        {
            case 1:
                    i.getdata();
                    file.write((char *)&i,sizeof(i));
                    break;

            case 4: item l;
                    file1.seekg(0);
                    while(file1)
                    {
                        file1.read((char *)&l,sizeof(l) );
                        l.putdata();
                    }
                    exit(0);
                    break;
        }
    }
    file.close();
    file1.close();
    return 0;
}
