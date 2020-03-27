#include<iostream>
using namespace std;
ostream & unit(ostream & p)
{
    p<<"$";
    return p;
}
main()
{
    for(int i=0;i<=10;i++)
    {
        cout.setf(ios::left,ios::adjustfield);
        cout.fill('*');
        cout<<"Square of "<<i<<"="<<"\t";
        cout.width(10);
        cout.setf(ios::right,ios::adjustfield);
        cout<<i*i<<unit<<endl;
    }
    return 0;
}
