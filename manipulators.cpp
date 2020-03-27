#include<iostream>
using namespace std;
ostream & unit  (ostream & cout)
{
    cout<<"$";
}
main()
{
    /*
    cout.fill('*');
    cout.width(10);
    cout.setf(ios::internal,ios::adjustfield);
    cout<<-24.33<<endl;
    cout.setf(ios::showbase);
    cout<<12<<endl;*/
    cout<<unit<<12;
    return 0;
}
