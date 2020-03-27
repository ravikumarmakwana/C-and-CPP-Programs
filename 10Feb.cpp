#include<iostream>
using namespace std;
class Complex
{
    int r,i;
public:
    void getData()
    {
        cout<<"Enter the realPart:";
        cin>>r;
        cout<<"Enter the imagePart:";
        cin>>i;
    }
    Complex add(Complex c1,Complex c2)
    {
        r=c1.r+c2.r;
        i=c1.i+c2.i;
    }
    void putData()
    {
        cout<<"Complex Number :: "<<r<<" + i "<<i<<endl;
    }
};
main()
{
    Complex c1,c2,c3;
    c1.getData();
    c2.getData();
    c3.add(c1,c2);
    c1.putData();
    c2.putData();
    c3.putData();
    return 0;
}
