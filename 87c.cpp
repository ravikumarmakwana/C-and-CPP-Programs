#include<iostream>
using namespace std;
template <class T>
class Calculate
{
    T a;
    T b;
public:
    void add(T a,T b)
    {
        cout<<"Addition of Two Values:"<<(a+b);
        cout<<endl;
    }
    void subtract(T a,T b)
    {
        cout<<"Subtraction of Two Value:"<<(a-b);
        cout<<endl;
    }
    void multiplication(T a,T b)
    {
        cout<<"Multiplication of Two Value:"<<a*b;
        cout<<endl;
    }
    void division(T a,T b)
    {
        cout<<"Division of Two Values:"<<a/b;
        cout<<endl;
    }
};
main()
{
    Calculate <int >V1;
    int a,b;
    cout<<"Enter the Int a:";
    cin>>a;
    cout<<"Enter the Int b:";
    cin>>b;
    V1.add(a,b);
    V1.subtract(a,b);
    V1.multiplication(a,b);
    V1.division(a,b);

    float c,d;
    cout<<"Enter the Float c:";
    cin>>c;
    cout<<"Enter the Float d:";
    cin>>d;
    Calculate <float> V2;
    V2.add(c,d);
    V2.subtract(c,d);
    V2.multiplication(c,d);
    V2.division(c,d);
    return 0;
}
