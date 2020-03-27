#include<iostream>
using namespace std;
template <class T>
void Max(T a,T b)
{
    if(a>b)
        cout<<"The maximum Value:"<<a;
    else
        cout<<"The Maximum Value:"<<b;
        cout<<endl;
}
main()
{
    int a,b;
    cout<<"Enter the Int value a:";
    cin>>a;
    cout<<"Enter the  Int value b:";
    cin>>b;
    Max(a,b);
    float c,d;
    cout<<"Enter the Float c:";
    cin>>c;
    cout<<"Enter the  float d:";
    cin>>d;
    Max(c,d);
    char e,f;
    cout<<"Enter the character e:";
    cin>>e;
    cout<<"Enter the character f:";
    cin>>f;
    Max(e,f);
    return 0;
}
