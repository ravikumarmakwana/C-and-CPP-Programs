#include<iostream>
using namespace std;
class base
{
    int a;
public:
   base  & operator >> ()
   {
       base temp;
       cout<<"Enter the value:";
       cin>>temp.a;
       return temp;
   }
};
main()
{
    base a;
    cin>>a;
    cout<<a;
    return 0;
}
