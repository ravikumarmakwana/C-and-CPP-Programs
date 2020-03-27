#include<iostream>
using namespace std;
class space
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the 3D points:\n";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"Mirror image of this point is (";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i!=2)
                cout<<",";
            if(i==2)
            {
                cout<<")";
            }
        }
    }
    void ōoperator -()
    {
        for(int i=0;i<3;i++)
            a[i]=-a[i];
    }

};

int main()
{
    space s;
    s.getdata();
    -s;
    s.putdata();
    return 0;
}
