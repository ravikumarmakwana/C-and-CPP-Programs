#include<iostream>
using namespace std;
class vector
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the vector\n";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"Mirror Image: (";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i!=2)
                cout<<",";
            else
                cout<<")";
        }
    }
    void operator -()
    {
        for(int i=0;i<3;i++)
            a[i]=-a[i];
    }
};
main()
{
    vector v;
    v.getdata();
    -v;
    v.putdata();
    return 0;
}
