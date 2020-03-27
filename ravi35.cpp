#include<iostream>
using namespace std;
class vectors
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the vectors:";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"(";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i!=2)
                cout<<",";
        }
        cout<<")";
    }
    int operator *(vectors p)
    {
        int l=0;
        for(int i=0;i<3;i++)
            l=l+a[i]*p.a[i];
        return l;
    }
    friend vectors operator *(vectors v1,int p)
    {
        vectors temp;
        for(int i=0;i<3;i++)
            temp.a[i]=v1.a[i]*p;
        return temp;
    }
    friend vectors operator *(int p,vectors v1)
    {
        vectors temp;
        for(int i=0;i<3;i++)
            temp.a[i]=v1.a[i]*p;
        return temp;
    }
};
main()
{
    vectors v1,v2,v3;
    v1.getdata();
    v2.getdata();
    int ans=v1*v2;
    cout<<"v1 * v2 = "<<ans;
    cout<<endl;
    v3=2*v1;
    cout<<"2  * v1 = ";
    v3.putdata();
    cout<<endl;
    v3=v1*4;
    cout<<"v1 * 4  = ";
    v3.putdata();
    return 0;
}
