#include<iostream>
using namespace std;
template <class T>
void maxNumber(T a,T b)
{
    if(a>b)
        cout<<"Maximum Number:"<<a;
    else
        cout<<"Maximum Number:"<<b;
}
main()
{
    maxNumber(1,2);
    cout<<endl;
    maxNumber(13.4,9.9);
    cout<<endl;
    maxNumber('a','t');
    return 0;
}
