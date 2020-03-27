#include<iostream>
using namespace std;
class Media
{
    char title[30];
    float price;
public:
    void getdata()
    {
        cout<<"Enter the title:";
        cin>>title;
        cout<<"Enter the price:";
        cin>>price;
    }
    virtual void display()
    {
        cout<<"Title :"<<title;
        cout<<"\nPrice :"<<price;
    }
};
class Book:public Media
{
    int page_no;
public:
    void getpage()
    {
        cout<<"Enter the page no.:";
        cin>>page_no;
    }
    void display()
    {
        cout<<"Details of Book\n";
        display();
        cout<<"\nPage no.:"<<page_no;
    }
};
class Tap:public Media
{
    int time;
public:
    void gettime()
    {
        cout<<"Enter the time of Tap Running in PC:";
        cin>>time;
    }
    void display()
    {
        cout<<"Details of CD\n";
        display();
        cout<<"\nTime : "<<time;
    }
};
main()
{
    Media *p;
    int c;
    cout<<"1.Book\n2.Tap\nEnter the choice:";
    cin>>c;
    switch(c)
    {
        case 1: Book b;
                p->getdata();
                p=&b;
                p->getpage();
                p->display();
                break;

        case 2: Tap t;
                p->getdata();
                p=&t;
                p->gettime();
                p->display();
                break;
    }
    return 0;
}
