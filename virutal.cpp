#include<iostream>
using namespace std;
class media
{
protected:
    char title[30];
    float price;
public:
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Book : public media
{
    int page;
public:
    void getdata()
    {
        cout<<"Enter the Book title:";
        cin>>title;
        cout<<"Enter the price:";
        cin>>price;
        cout<<"Enter the pages:";
        cin>>page;
    }
    void putdata()
    {
        cout<<"*******BOOK********\n";
        cout<<"\nName Of BOOK:"<<title;
        cout<<"\nPages:"<<page;
        cout<<"\nPrice:"<<price;
    }
};
class Tape :public media
{
    int time;
public:
    void getdata()
    {
        cout<<"Enter the Disk_title:";
        cin>>title;
        cout<<"Enter the price:";
        cin>>price;
        cout<<"Enter the Play time:";
        cin>>time;
    }
    void putdata()
    {
        cout<<"\n\n******TAPE********\n";
        cout<<"Name of Disk :"<<title;
        cout<<"\nPrice : "<<price;
        cout<<"\nPlay time : "<<time;
    }
};
main()
{
    media *p;
    Tape t;
    Book b;
    int c;
    cout<<"\n1.BOOk\n2.Tape\nEnter the choice:";
    cin>>c;
    switch(c)
    {
        case  1:p=&b;
                p->getdata();
                p->putdata();
                break;
        case 2 :p=&t;
                p->getdata();
                p->putdata();
                break;
        default :cout<<"Invalied";
                break;
    }
    return 0;
}
