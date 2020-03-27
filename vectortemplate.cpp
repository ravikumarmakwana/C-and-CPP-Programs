#include<iostream>
using namespace std;
template <class T>
class vectors
{
    T a[3];
public:
    void getdata()
    {
        cout<<"Enter the Vector:\n";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"The final array\n(";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i!=2)
                cout<<",";
            else
                cout<<")";
        }
    }
    int operator *(vectors p)
    {
        int sum=0;
        for(int i=0;i<3;i++)
            sum+=a[i]*p.a[i];
        return sum;
    }
    vectors operator *(int p)
    {
        vectors temp;
        for(int i=0;i<3;i++)
            temp.a[i]=a[i]*p;
        return temp;
    }
};
main()
{
    vectors <int> v1,v2,v3;
    v1.getdata();
    v2.getdata();
    v3=v1*3;
    cout<<"v3=v1*3"<<endl;
    v3.putdata();
    int l=v1*v2;
    cout<<"\nMultiplication two vectors  ::"<<l<<endl;
    return 0;
}
