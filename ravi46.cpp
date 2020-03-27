#include<iostream>
using namespace std;
typedef void (* Function )(int,int);
void add(int a,int b)
{
    cout<<"Addition::"<<a+b;
}
void subtract (int a,int b)
{
    cout<<"\nSubtraction:"<<a-b;
}
main()
{
    Function p;
    p=&add;
    p(1,2);
    p=&subtract;
    p(5,2);
    return 0;
}
