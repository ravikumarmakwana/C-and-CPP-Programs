#include<iostream>
using namespace std;
class number
{
protected:
    int p;
public:
    void getp()
    {
        cout<<"Enter the number:";
        cin>>p;
    }
    void putp()
    {
        cout<<"The number is p:"<<p;
    }
};
class number2:private number
{
public:
    void getdata()
    {
        getp();
    }
    void putdata()
    {
        putp();
    }
};
main()
{
    number2 n;
    n.getdata();
    n.putdata();
    return 0;
}
