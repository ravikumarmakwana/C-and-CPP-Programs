#include<iostream>
using namespace std;
class number
{
    int a,b;
public:
    void getdata();
    int geta();
    int getb();
};
class sum : public number
{
    int c;
public:
    void calculate();
    void putdata();
};
void number :: getdata()
{
    cout<<"Enter the number a:";
    cin>>a;
    cout<<"Enter the number b:";
    cin>>b;
}
int number :: geta()
{
    return a;
}
int number :: getb()
{
    return b;
}
void sum :: calculate()
{
    c=geta()+getb();
}
void sum :: putdata()
{
    cout<<"The addition is :"<<c;
}
int main()
{
    sum s;
    s.getdata();
    s.calculate();
    s.putdata();
    return 0;
}
