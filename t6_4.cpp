#include<iostream>
using namespace std;
class vector
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the points:\n";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"\Finly  vector: (";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i!=2)
                cout<<",";
            if(i==2)
                cout<<")";
        }
    }
    operator *(int x)
    {
        for(int i=0;i<3;i++)
            a[i]=a[i]*x;
    }
};
main()
{
    vector v1;
    v1.getdata();
    int x;
    cout<<"Enter the scaler multiple:";
    cin>>x;
    v1*x;
    v1.putdata();
    return 0;
}
