#include<iostream>
using namespace std;
class Demo
{
    int x,y;
public:
    Demo(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};
main()
{
    Demo d1(1,2);
    Demo d2=d1;
    d1.show();
    d2.show();
}
