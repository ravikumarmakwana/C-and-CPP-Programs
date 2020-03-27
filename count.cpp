#include<iostream>
using namespace std;
class count
{
    static int c;
public:
    count()
    {
        c++;
        cout<<"Object is created :"<<c<<endl;
    }
    ~count()
    {
        cout<<"Object is deleted:"<<c<<endl;
        c--;
    }
};
int count :: c;
main()
{
    count a;
    {
        count b;
        {
            count c;
            {
                count d;
            }
        }
    }
    return 0;
}
