#include<iostream>
using namespace std;
#include<vector>
void display(vector <int > & p)
{
    for(int i=0;i<p.size();i++)
        cout<<p[i]<<" ";
}
main()
{
    vector <int > v;
    int n;
    cout<<"Enter the Five Elements:\n";
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    cout<<"\nThe size of Vector:";
    cout<<v.size();
    cout<<"\n\nThe content of vector:\n";
    display(v);
    cout<<"\nAdd One More value:";
    cin>>n;
    v.push_back(n);
    cout<<"\nThe content of Vector\n";
    display(v);
    cout<<"\nEnter the elements that you want to delete:";
    cin>>n;
    v.erase(v.begin()+n-1,v.begin()+n);
    cout<<"\nThe content of Vector\n";
    display(v);
    return 0;
}
