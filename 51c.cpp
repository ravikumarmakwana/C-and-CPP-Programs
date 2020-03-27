#include<iostream>
using namespace std;
class number
{
    public:
        int p;
};
class number2:public number
{
public:
    void getdata()
    {
        cout<<"Enter the number:";
        cin>>p;
    }
    void putdata()
    {
        cout<<"The number is :"<<p;
    }
};
main()
{
    number2 n;
    n.getdata();
    n.putdata();
    return 0;
}
