#include<iostream>
using namespace std;
class vectors
{
    int a[3];
public:
    friend istream & operator >> (istream & din,vectors &p)
    {
        cout<<"Enter the vector :";
        for(int i=0;i<3;i++)
            din>>p.a[i];
        return din;
    }
    friend ostream & operator <<(ostream & dout,vectors &p)
    {
        dout<<"The vector ::(";
        for(int i=0;i<3;i++)
        {
            dout<<p.a[i];
            if(i!=2)
                dout<<",";
            else
                dout<<")";
        }
        return dout;
    }
};
main()
{
    vectors v;
    cin>>v;
    cout<<v;
    return 0;
}
