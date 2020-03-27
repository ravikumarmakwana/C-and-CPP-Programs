#include<iostream>
using namespace std;
template <class T>
void swape(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
main()
{
    int a,b;
    float c,d;
    char e,f;
    cout<<"Enter the  Int Value a:";
    cin>>a;
    cout<<"Enter the Int Value b:";
    cin>>b;
    swape(a,b);
    cout<<"The value of a:"<<a<<endl;
    cout<<"the value if b:"<<b<<endl;
    cout<<"Enter the  float Value c:";
    cin>>c;
    cout<<"Enter the float Value d:";
    cin>>d;
    swape(c,d);
    cout<<"The value of c:"<<c<<endl;
    cout<<"the value if d:"<<d<<endl;
    cout<<"Enter the  char Value e:";
    cin>>e;
    cout<<"Enter the char Value f:";
    cin>>f;
    swape(e,f);
    cout<<"The value of e:"<<e<<endl;
    cout<<"the value if f:"<<f<<endl;
    return 0;
}
