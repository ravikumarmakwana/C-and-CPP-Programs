#include<iostream>
using namespace std;
class count
{
    static int c;
    public:
        count()
        {
            c++;
            cout<<"\nThe Object created :: "<<c;
        }
        ~count()
        {
            cout<<"\nThe Object delete :: "<<c;
            c--;
        }
};
int count :: c;
int main()
{
    count s1;
    {
        count s2;
        {
            count s3;
        }
    }
    return 0;
}
