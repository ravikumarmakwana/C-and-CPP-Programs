#include<iostream>
#include<math.h>
using namespace std;
class Compound_Int
{
    int n;
    float r;
    public:
        Compound_Int()
        {
            n=r=0;;
            int c=(1+r/100);
            int b=pow(c,n);
            cout<<"\n"<<b;
        }
        Compound_Int(int n,float r=0.095)
        {
            int a=(1+r/100);
            int b=pow(a,n);
            cout<<"\nThe total interest :: "<<b;
        }
};
int main()
{
    Compound_Int l1(2);
    Compound_Int l2;
    Compound_Int l3(2,200);
    return 0;
}

