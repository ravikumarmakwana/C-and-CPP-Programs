#include<iostream>
using namespace std;
void test()
{
    class student
    {
        int rollno;
        char name[30];
    public:
        void getdata()
        {
            cout<<"Enter the name:";
            cin>>name;
            cout<<"Enter the rollno:";
            cin>>rollno;
        }
        void putdata()
        {
            cout<<endl;
            cout<<rollno<<"\t"<<name;
        }
    };
    student s;
    s.getdata();
    s.putdata();
}
main()
{
    test();
    return 0;
}
