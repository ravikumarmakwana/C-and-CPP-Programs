#include<iostream>
using namespace std;
class Logic_gate
{
public:
    virtual void getinput()=0;
};

class Or_gate:public Logic_gate
{
    int in1,in2,in3;
public:
    void getinput()
    {
        cout<<"Enter the Inputs:";
        cin>>in1>>in2>>in3;
        if(in1==1 || in2 ==1 || in3==1)
            cout<<"Output::"<<1;
        else
            cout<<"Output::"<<0;
    }
};
class And_gate:public Logic_gate
{
    int in1,in2,in3;
public:
    void getinput()
    {
        cout<<"Enter the Inputs:";
        cin>>in1>>in2>>in3;
        if(in1==1 && in2 ==1 && in3==1)
            cout<<"Output::"<<1;
        else
            cout<<"Output::"<<0;
    }
};
main()
{
    Logic_gate *p;
    And_gate a;
    Or_gate o;
    p=&o;
    p->getinput();
    p=&a;
    p->getinput();
    return 0;
}
