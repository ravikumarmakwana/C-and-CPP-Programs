#include<iostream>
using namespace std;
class item
{
    int code;
    float price;
public:
    void getdata(int c,float p)
    {
        code=c;
        price=p;
    }
    void putdata()
    {
        cout<<"Code :"<<code;
        cout<<"\nprice :"<<price<<"\n";
    }
};
main()
{
    item x[2];
    item *p=&x[0];
    item *d=p;
    int a;
    float b;
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the a:";
        cin>>a;
        cout<<"Enter the b:";
        cin>>b;
        p->getdata(a,b);
        p++;
    }
    for(int i=0;i<2;i++)
    {
        d->putdata();
        d++;
    }
    return 0;

}
