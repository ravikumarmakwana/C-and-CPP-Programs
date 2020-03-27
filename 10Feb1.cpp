#include<iostream>
using namespace std;
class Vector
{
private:
    int x,y,z;
public:
    Vector()
    {
        x=y=z=0;
    }
    Vector(int x)
    {
        x=y=z=x;
    }
    Vector(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    Vector operator + (Vector v)
    {
        Vector temp;
        temp.x=x+v.x;
        temp.y=y+v.y;
        temp.z=z+v.z;
        return temp;
    }
    void putData()
    {
        cout<<"Vector : "<<"( "<<x<<","<<y<<","<<z<<" ) "<<endl;
    }
    int operator * (Vector v)
    {
        int ans=0;
        ans=x*v.x+y*v.y+z*v.z;
        return ans;
    }
    Vector operator *(int p)
    {
        Vector temp;
        temp.x=x*p;
        temp.y=y*p;
        temp.z=z*p;
        return temp;
    }
    Vector friend operator *(int p,Vector v)
    {
        Vector temp;
        temp.x=v.x*p;
        temp.y=v.y*p;
        temp.z=v.z*p;
        return temp;
    }
};
main()
{
    Vector v1,v2,v3;
    v1=Vector(1,2,4);
    v2=Vector(2,3,4);
    v3=v1+v2;
    v1.putData();
    v2.putData();
    v3.putData();
    cout<< v1*5*v2;
    return 0;
}
