#include<iostream>
using namespace std;
class Weight
{
    int g,k;
public:
    void getdata()
    {
        cout<<"Enter the gm:";
        cin>>g;
        cout<<"Enter the k:";
        cin>>k;
    }
    void putdata()
    {
        cout<<"\nAddition of Two Weights::"<<k<<" Kg,"<<g<<" gm";
    }
    friend Weight add(Weight p,Weight q)
    {
        Weight a;
        a.k=p.k+q.k;
        a.g=p.g+q.g;
        if(a.g>=1000)
        {
            a.k=a.k+a.g/1000;
            a.g=a.g%1000;
        }
        return a;
    }
};
main()
{
    Weight w1,w2,w3;
    w1.getdata();
    w2.getdata();
    w3=add(w1,w2);
    w3.putdata();
    return 0;
}
