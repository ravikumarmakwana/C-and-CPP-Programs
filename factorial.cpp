#include<iostream>
using namespace std;
class factor
{
    int n;
    int ans;
public:
    factor()
    {
        n=0;
    }
    factor(int x)
    {
        n=x;
    }
    factor(factor &p)
    {
        ans=1;
        for(int i=1;i<=p.n;i++)
        {
            ans*=i;
        }
        cout<<"Factorial of "<<p.n<<" is ::"<<ans;
    }
};
main()
{
    factor f1(4);
    factor f2(f1);
    return 0;
}
