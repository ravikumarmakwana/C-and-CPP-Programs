#include<iostream>
using namespace std;
class factor
{
    int n;
    public:
        factor()
        {
            n=0;
        }
        factor(int x)
        {
            n=x;
        }
        factor(factor &f1)
        {
            n=1;
            while(f1.n!=0)
            {
                n=n*f1.n;
                f1.n--;
            }
        }
       void putdata()
        {
            cout<<"The factor:"<<n;
        }
};
int main()
{
    int c;
    cout<<"Enter the number:";
    cin>>c;
    factor f1(c);
    factor f2(f1);
    f2.putdata();
    return 0;
}
