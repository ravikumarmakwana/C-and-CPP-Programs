#include<iostream>

using namespace std;

class DM;
class DB
{
    float feet,inch;
    public:
            void getdata()
            {
                cout<<"Enter the feet";
                cin>>feet;
                cout<<"Enter the inch";
                cin>>inch;
            }
            void putdata()
            {

                    cout<<feet<<" feet "<<inch<<" inch ";
            }
            friend void add(DM,DB);
};
class DM
{
    float m,cm;
    public:
            void getdata()
            {
                cout<<"Enter the meter:";
                cin>>m;
                cout<<"Enter the centimeter:";
                cin>>cm;
            }
            void putdata()
            {
                cout<<m<<" m "<<cm<<" cm ";
            }
            friend void add(DM,DB);
};
void add(DM x,DB y)
{
    int c;
    cout<<"1. feet and inch\n";
    cout<<"2. m and cm";
    cout<<"\nEnter the choice:";
    cin>>c;
    switch(c)
    {
        case 1: y.feet=y.feet+x.m*3.28;
                y.inch=y.inch+x.cm*0.3937;
                y.putdata();
                break;

        case 2: x.m=x.m+y.feet/3.28;
                x.cm=x.cm+y.inch/0.3937;
                x.putdata();
                break;
    }
}

int main()
{
    DM d1;
    d1.getdata();
    DB d2;
    d2.getdata();
    add(d1,d2);
    return 0;
}
