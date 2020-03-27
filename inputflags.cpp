#include<iomanip>
#include<iostream>
using namespace std;
ostream & name(ostream & l)
{
    l<<"Rs.";
    return l;
}
main()
{
    cout.width(10);
    cout<<12345<<endl;
    cout.width(3);
    cout<<12345<<endl;
    cout.fill('*');
    cout.width(10);
    cout<<12345<<endl;
    cout.precision(4);
    cout<<1.8039375<<endl;
    cout.setf(ios::fixed,ios::floatfield);
    cout<<0.003323242<<endl;
    cout.setf(ios::internal,ios::adjustfield);
    cout.width(10);
    setiosflags(ios::showpos);
    cout.width(10);
    cout<<12.12<<endl;
    cout.width(10);
    cout<<name<<123;
    return 0;
}
