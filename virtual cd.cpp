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
        cout<<"Enter the Tap title:";
        cin>>title;
        cout<<"Enter the price:";
        cin>>price;
        cout<<"Enter the time:";
        cin>>time;
    }
    void putdata()
    {
        cout<<"\nDetails of Tap\n";
        cout<<"Name::"<<title<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Time::"<<time;
    }
};
class Book:public media
{
    int page;
public:
    void getdata()
    {
        cout<<"Enter the Book title:";
        cin>>title;
        cout<<"Enter the price:";
        cin>>price;
        cout<<"Enter the page_no:";
        cin>>page;
    }
    void putdata()
    {
        cout<<"\nDetails of Book"<<endl;
        cout<<"Title::"<<title<<endl;
        cout<<"Price::"<<price<<endl;
        cout<<"Page_no:"<<page;
    }
};
main()
{
    media *p;
    cout<<"1.Book\n2.Tap\nenter the choice:";
    int c;
    cin>>c;
    if(c==1)
    {
        Book k;
        p=&k;
        p->getdata();
        p->putdata();
    }
    else
    {
        Tap t;
        p=&t;
        p->getdata();
        p->putdata();
    }
    return 0;
}
