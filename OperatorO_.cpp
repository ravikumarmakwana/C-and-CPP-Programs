#include<iostream>
using namespace std;
class Vector
{
    int v[3];
public :
    void getdata()
    {
        cout<<"Enter the Vector Elements :\n";
        for(int i=0;i<3;i++)
            cin>>v[i];
    }
    void putdata()
    {
        cout<<"\nAddition of Two Vectors : ";
        for(int i=0;i<3;i++)
            cout<<v[i]<<" ";
    }
    Vector operator +(Vector p)
    {
        Vector temp;
        for(int i=0;i<3;i++)
            temp.v[i]=v[i]+p.v[i];
        return temp;
    }
};
int main()
{
    Vector v1,v2,v3;
    v1.getdata();
    v2.getdata();
    v3=v1+v2;
    v3.putdata();
    return 0;
}
