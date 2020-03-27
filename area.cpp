#include<iostream>
using namespace std;
class Area
{
    protected:
    int s1,s2,s3,b,h;
    float a,p;
    public:
        void showa()
        {
            cout<<"Area : "<<a;
        }
        void showp()
        {
            cout<<"perimeter : "<<p;
        }
};
class tringle : public Area
{
public:
    void getdata()
    {
        cout<<"Enter the side_lenth:\n";
        cout<<"s1:";
        cin>>s1;
        cout<<"s2:";
        cin>>s2;
        cout<<"s3:";
        cin>>s3;
        cout<<"Enter the base:";
        cin>>b;
        cout<<"Enter the height:";
        cin>>h;
    }
    void calculate()
    {
        a=0.5*b*h;
        p=s1+s2+s3;
    }
};
class isosceles : public Area
{
public:
    void getdata()
    {
        cout<<"Enter the side_length:\n";
        cout<<"s1:";
        cin>>s1;
        cout<<"s2:";
        cin>>s2;
        cout<<"Enter the base:";
        cin>>b;
        cout<<"Enter the height:";
        cin>>h;
        s3=s2;
    }
    void calculate()
    {
        a=0.5*b*h;
        p=s1+s2+s3;
    }
};
class equilator : public Area
{
public:
    void getdata()
    {
        cout<<"Enter the side_length:\n";
        cout<<"s1:";
        cin>>s1;
        cout<<"Enter the base:";
        cin>>b;
        cout<<"Enter the height:";
        cin>>h;
        s2=s3=s1;
    }
    void calculate()
    {
        a=(1.73/4)*s1*s1*s1;
        p=3*s1;
    }
};
main()
{
    tringle t1;
    isosceles t2;
    equilator t3;
    cout<<"1.Tringle\n2.iosceles\n3.equlitor\nenter the choice:";
    int x;
    int z;
    cin>>x;
    switch(x)
    {
        case 1: t1.getdata();
                t1.calculate();
                cout<<"1.area\n2.perimettie\nenter the choice:";
                cin>>z;
                switch(z)
                {
                    case 1: t1.showa();
                            break;
                    case 2: t1.showp();
                            break;
                }
                break;

         case 2: t2.getdata();
                 t2.calculate();
                 cout<<"1.area\n2.perimettie\nenter the choice:";
                 cin>>z;
                 switch(z)
                 {
                     case 1: t2.showa();
                             break;
                     case 2: t2.showp();
                             break;
                 }
                 break;

         case 3: t3.getdata();
                 t3.calculate();
                 cout<<"1.area\n2.perimeter\nenter the choice:";
                 cin>>z;
                 switch(z)
                 {
                     case 1: t3.showa();
                             break;
                     case 2: t3.showp();
                             break;
                 }
                 break;
    }
    return 0;
}
