#include<iostream>
using namespace std;
class vectors
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the vector:\n";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"The final vector: (";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i!=2)
                cout<<",";
            else
                cout<<")";
        }
    }
    void mul()
    {
        int s;
        cout<<"Enter the scaler multiple:";
        cin>>s;
        for(int i=0;i<3;i++)
            a[i]=a[i]*s;
    }
};
main()
{
    vectors v;
    v.getdata();
    v.mul();
    v.putdata();
    return 0;
}
