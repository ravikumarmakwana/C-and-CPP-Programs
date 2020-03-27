#include<iostream>
using namespace std;
class count
{
    static int c;
    public:
        count()
        {
            c++;
            cout<<"\nObject created :: "<<c;
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
