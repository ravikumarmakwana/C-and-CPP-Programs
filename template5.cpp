#include<iostream>
using namespace std;
template <class T>
class number
{
    T a;
    T b;
public:
    void getdata();
    void putdata();
};
template <class T>
void number<T> :: getdata()
{
    cout<<"Enter the a:";
    cin>>a;
    cout<<"Enter the b:";
    cin>>b;
}
template <class T>
void number<T> :: putdata()
{
    cout<<"a"<<a<<endl;
    cout<<"b"<<b;
}
main()
{
    number <float> p;
    p.getdata();
    p.putdata();
    return 0;
}
