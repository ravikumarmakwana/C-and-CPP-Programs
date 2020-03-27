#include<iostream>
using namespace std;
class Media
{
protected:
    float price;
    char title[30];
public:
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Book:public Media
{
    int page_no;
public:
    void getdata()
    {
        cout<<"Enter the title:";
        cin>>title;
        cout<<"Enter the price:";
        cin>>price;
        cout<<"Enter the page:";
        cin>>page_no;
    }
    void putdata()
    {
        cout<<"\nBOOk Details:"<<endl;
        cout<<title<<endl<<price<<page_no;
    }
};
class Tap:public Media
{
    int time;
public:
    void getdata()
    {
        cout<<"Enter the title:";
        cin>>title;
        cout<<"Enter the price:";
        cin>>price;
        cout<<"Enter the time:";
        cin>>time;
    }
    void putdata()
    {
        cout<<"\nTap Details:"<<endl;
        cout<<title<<endl<<price<<endl<<time;
    }
};
main()
{
    Media *p;
    cout<<"1.Book\n2.Tap\nEnter the choice:";
    int c;
    cin>>c;
    Book b;
    Tap t;
    switch(c)
    {
        case 1: p=&b;
                p->getdata();
                p->putdata();
                break;

        case 2: p=&t;
                p->getdata();
                p->putdata();
                break;

        default:cout<<"Invalid";
                break;
    }
    return 0;
}
