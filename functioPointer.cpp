#include<iostream>
using namespace std;
typedef void (* fu)(int,int);
void add(int x,int y)
{
    cout<<"Addition::"<<x+y;
}
void Subtract(int x,int y)
{
    cout<<"Subtract::"<<x-y;
}
main()
{
    fu p;
    p=&add;
    p(1,2);
    cout<<endl;
    p=&Subtract;
    p(8,3);
    return 0;
}
