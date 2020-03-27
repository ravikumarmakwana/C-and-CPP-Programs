#include<cmath>
#include<iostream>
#include<cstdlib>
using namespace std;
class Vector
{
    int a[3];
    public:
        void getData()
        {
            cout<<"Enter the Vector : ";
            for(int i=0;i<3;i++)
                cin>>a[i];
        }
        operator double ()
        {
            double ans=0;
            for(int i=0;i<3;i++)
                ans+=a[i]*a[i];
            return sqrt(ans);
        }
};
main()
{
    Vector v1;
    v1.getData();
    cout<<v1;
    return 0;
}
