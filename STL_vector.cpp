#include<iostream>
#include<vector>
using namespace std;
void display(vector <int > v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
main()
{
    vector <int > v;
    cout<<"How many elements that you want to insert ...!";
    int k;
    cin>>k;
    cout<<endl;
    int c;
    cout<<"Enter the Numbers:\n";
    for(int i=0;i<k;i++)
    {
        cin>>c;
        v.push_back(c);
    }
    display(v);
    cout<<"\nEnter the new elements location ::";
    int l,n;
    cin>>l;
    cout<<"\nEnter the new element ::";
    cin>>n;
    vector <int >:: iterator i=v.begin();
    i=i+l-1;
    v.insert(i,n);
    display(v);
    cout<<"\nEnter the delete number location:";
    cin>>l;
    l--;
    cout<<endl;
    v.erase(v.begin()+l,v.begin()+l+1);
    display(v);
    return 0;
}
