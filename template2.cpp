#include<iostream>
using namespace std;
template <class T>
class Vector
{
    T a[3];
public:
    void getdata();
    void putdata();
    void add(Vector,Vector);
};
template <class T1>
void Vector <T1> :: getdata()
{
    cout<<"\nEnter the Vector:";
    for(int i=0;i<3;i++)
        cin>>a[i];
}
template <class T2>
void Vector  <T2> :: putdata()
{
    cout<<"\nAddition of two Vector\n";
    for(int i=0;i<3;i++)
        cout<<a[i];
}
template <class T>
void Vector  <T> :: add(Vector p,Vector q)
{
    for(int i=0;i<3;i++)
        a[i]=p.a[i]+q.a[i];
}
main()
{
    Vector <int > v1,v2,v3;
    v1.getdata();
    v2.getdata();
    v3.add(v1,v2);
    v3.putdata();
    return 0;
}
