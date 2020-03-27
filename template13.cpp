#include<iostream>
using namespace std;
template <class T1>
class number
{
    T1 a;
    int b;
public:
    void getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
        cout<<"Enter the b:";
        cin>>b;
    }
    void putdata()
    {
        cout<<"a:"<<a;
        cout<<"b:"<<b;
    }
};
main()
{
    number <int > n;
    n.getdata();
    n.putdata();
    return 0;
}
