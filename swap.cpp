#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
main()
{
    int a,b;
    cout<<"Enter the a:";
    cin>>a;
    cout<<"Enter the b:";
    cin>>b;
    swap(&a,&b);
    cout<<"\na::"<<a<<endl;
    cout<<"b::"<<b;
    return 0;
}
