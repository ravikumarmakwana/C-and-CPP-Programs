#include<iostream>
using namespace std;
class Media
{
public:
    virtual void getdata()=0;//pure virtual class
    virtual void putdata()=0;
};
class Book:public Media
{
    int page_no;
    char name[30];
    float price;
public:
    void getdata()
    {
        cout<<"Enter the Name of Book:";
        cin>>name;
        cout<<"Enter the price:";
        cin>>price;
        cout<<"Enter the page_no:";
        cin>>page_no;
    }
    void putdata()
    {
        cout<<"\nName:"<<name<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Page_no:"<<page_no;
    }
};
class Tap:public Media
{
    int time;
    float price;
    char name[30];
public:
    void getdata()
    {
        cout<<"\nEnter the name of Tap:";
        cin>>name;
        cout<<"Enter the time:";
        cin>>time;
        cout<<"Enter the price:";
        cin>>price;
    }
    void putdata()
    {
        cout<<"\nName:"<<name<<endl;
        cout<<"Time:"<<time<<endl;
        cout<<"Price:"<<price;
    }
};
main()
{
    Media *p;
    Book b;
    Tap t;
    p=&b;
    p->getdata();
    p->putdata();
    p=&t;
    p->getdata();
    p->putdata();
    return 0;
}
