#include<iostream>
#include<list>
using namespace std;
void display(list <int> &p)
{
    cout<<endl;
    list <int> :: iterator i;
    for(i=p.begin();i!=p.end();i++)
        cout<<*i<<" ";
}
main()
{
    list <int> l1,l2;
    int c,n;
    cout<<"How many numbers you need to enter ::";
    cin>>c;
    cout<<"Enter the numbers:";
    for(int i=0;i<c;i++)
    {
        cin>>n;
        l1.push_back(n);
    }
    int n1,n2;
    display(l1);
    cout<<"\nEnter the new element at end:";
    cin>>n1;
    l1.push_back(n1);
    display(l1);
    cout<<"\nEnter the new elements at begin:";
    cin>>n2;
    l1.push_front(n2);
    display(l1);
    cout<<"\nEnter the second list";
    cout<<"\nHow many elements you want to insert?";
    cin>>c;
    for(int i=0;i<c;i++)
    {
        cin>>n;
        l2.push_back(n);
    }
    display(l2);
    l1.sort();
    cout<<"\nFirst list sorting is done...!\n";
    display(l1);
    cout<<"\nSecond list sorting is done...!\n";
    l2.sort();
    display(l2);
    l1.merge(l2);
    cout<<"\nMerge two list\n";
    display(l1);
    return 0;
}
