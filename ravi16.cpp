#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"\nThe Integral Addition::"<<a+b;
}
void add(float a,float b)
{
    cout<<"\nFloating point Addition::"<<a+b;
}
void add(double a,double b)
{
    cout<<"\nDouble point Addition::"<<a+b;
}
void add(char a,char b)
{
    cout<<"\nCharacter point Addition::"<<char(a+b);
}
main()
{
    add(1,2);
    add(2.0,3.0);
    add(1.9,6.7);
    add('a','b');
    return 0;
}
