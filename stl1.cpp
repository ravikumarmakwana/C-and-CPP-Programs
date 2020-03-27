#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
}
main()
{
    vector <int> a (5);
    int k;
    cout<<"enter the 5 numbers:\n";
    for(int i=0;i<5;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    cout<<endl;
    display(a);
    return 0;
}
