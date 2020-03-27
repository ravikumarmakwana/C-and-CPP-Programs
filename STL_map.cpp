#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef map <int,string> Roll_map;
main()
{
    int Roll_no;
    string name;
    Roll_map Roll;
    cout<<"Enter the five students Details\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the Roll_no:";
        cin>>Roll_no;
        cout<<"Enter the Name:";
        cin>>name;
        Roll[Roll_no]=name;
    }
    cout<<"Display Details of student\n";
    Roll_map :: iterator i;
    cout<<"Roll_no\tName\n";
    for(i=Roll.begin();i!=Roll.end();i++)
    {
        cout<<(*i).first<<"\t"<<(*i).second<<endl;
    }
    cout<<"\nEnter the Roll_no:";
    cin>>Roll_no;
    name=Roll[Roll_no];
    cout<<"\nName of student:"<<name;
    return 0;
}
