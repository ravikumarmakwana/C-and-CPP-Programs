#include<iostream>
#include<list>
using namespace std;
void display(list <int > &l)
{
    list <int > :: iterator lt;
    for(lt=l.begin();lt!=l.end();lt++)
        cout<<*lt<<endl;
}
main()
{
    list <int> l;
    int n;
    cout<<"Enter the Numbers:"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>n;
        l.push_back(n);
    }
    l.sort();
    display(l);
    l.push_back(n);
    return 0;
}
