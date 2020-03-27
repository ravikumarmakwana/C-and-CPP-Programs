#include<iostream>
using namespace std;
template <class T>
class Sort
{
    T a[10];
public:
    void getdata()
    {
        for(int i=0;i<10;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"Sorted Numbers:\n";
        for(int i=0;i<10;i++)
            cout<<a[i]<<endl;
    }
    void sortdata()
    {
        T temp;
        for(int i=0;i<10;i++)
        {
            for(int j=i;j<10;j++)
            {
                if(a[i]>a[j])
                {
                    swape(a[i],a[j]);
                }
            }
        }
    }
    friend void swape(T,T);
};
//template <class T1>
void swape(T a,T b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

main()
{
    Sort <int> p;
    cout<<"Enter the Int Numbers:\n";
    p.getdata();
    p.sortdata();
    p.putdata();

    Sort <float> q;
    cout<<"Enter the Float Numbers:\n";
    q.getdata();
    q.sortdata();
    q.putdata();
    return 0;
}
