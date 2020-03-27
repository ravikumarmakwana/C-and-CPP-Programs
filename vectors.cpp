#include<iostream>
using namespace std;
class Vector
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the vector ::";
        cout<<endl;
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"\nThe Resultant Vector :";
        cout<<" (";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i==2)
                cout<<")";
            else
                cout<<",";
        }
    }
    int operator *(Vector v)
    {
        int sum=0;
        for(int i=0;i<3;i++)
            sum+=a[i] * v.a[i];
        return sum;
    }
    Vector operator *(int p)
    {
        Vector temp;
        for(int i=0;i<3;i++)
            temp.a[i]=p*a[i];
        return temp;
    }
};
main()
{
    Vector v1,v2,v3;
    cout<<"Vector 1:\n";
    v1.getdata();
    cout<<"Vector 2:"<<endl;
    v2.getdata();
    int c1=v1*v2;
    cout<<"Multiplication of Two Vectors ::"<<c1<<"\n";
    cout<<"\nEnter the Scaler Multiple:";
    int c;
    cin>>c;
    v1=v1*c;
    v1.putdata();
    return 0;
}
