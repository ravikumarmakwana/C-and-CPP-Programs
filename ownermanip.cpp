#include<iostream>
using namespace std;
ostream & Rs(ostream & Rs)
{
    cout<<"Rs.";
}
main()
{
    cout<<"Enter the value:";
    int a;
    cin>>a;
    cout<<"\n"<<"Total money:\n";
    cout<<Rs<<a;
    return 0;
}
