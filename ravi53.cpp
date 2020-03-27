#include<iostream>
using namespace std;
ostream & gmail(ostream & out)
{
    out<<"@gmail.com";
    return out;
}
main()
{
    char s[30];
    cout<<"Enter the Name:";
    cin>>s;
    cout<<endl<<"The Mail address is ::"<<s<<gmail;
    return 0;
}
