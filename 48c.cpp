#include<iostream>
using namespace std;
class absoult
{
    int a;
    public:
        void getdata()
        {
            cout<<"Enter the number:";
            cin>>a;
        }
        void putdata()
        {
            cout<<"Absoult value:"<<a;
        }
        operator -()
        {
            if(a<0)
                a=-a;
        }
};
main()
{
    absoult a;
    a.getdata();
    -a;
    a.putdata();
    return 0;
}
