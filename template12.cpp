#include<iostream>
using namespace std;
template <class T>
class addition
{
    T a;
    T b;
public:
    void getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
        cout<<"Enter the b:";
        cin>>b;
    }
    void add()
    {
        cout<<"Addition of two Numbers:"<<a+b;
    }
};
main()
{
    addition <int> A;
    cout<<"Integer Numbers\n";
    A.getdata();
    A.add();
    cout<<endl;
    cout<<"Floating Numbers\n";
    addition <float> B;
    B.getdata();
    B.add();
    return 0;
}
