#include<iostream>
using namespace std;
class media
{
protected:
    float price;
    char title[30];
public:
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Tap:public media
{
    int time;
public:
    void getdata()
    {
        cout<<"Enter the title:";
        cin>>title;
        cout<<"Enter the time:";
        cin>>time;
        cout<<"Enter the  price:";
        cin>>price;
    }
    void putdata()
    {
        cout<<"\nTap Information\n";
        cout<<"Title::"<<title<<endl;
        cout<<"Time::"<<time<<endl;
        cout<<"Price::"<<price;
    }
};
class Book:public media
{
    int page_no;
public:
    void getdata()
    {
        cout<<"Enter the title:";
        cin>>title;
        cout<<"Enter the Page_no:";
        cin>>page_no;
        cout<<"Enter the price:";
        cin>>price;
    }
    void putdata()
    {
        cout<<"Book Information\n";
        cout<<"Title::"<<title<<endl;
        cout<<"Price::"<<price<<endl;
        cout<<"Page_no::"<<page_no;
    }
};
main()
{
    int c;
    Book b;
    Tap t;
    media *p;
    cout<<"1.BOOk\n2.Tap\nEnter the choice:";
    cin>>c;
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
