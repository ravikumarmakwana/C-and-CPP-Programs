#include<iostream>
using namespace std;
template <class T>
void swape(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

template <class T>
class Bubble_sort
{
    T a[10];
public:
    void getdata()
    {
        cout<<"Enter the 10 Numbers:\n";
        for(int i=0;i<10;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"\nSorting is Done...!\n";
        for(int i=0;i<10;i++)
        {
            cout<<a[i];
            if(i!=9)
                cout<<",";
        }
    }
    void sortdata()
    {
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(a[j]>a[j+1])
                {
                    swape(a[j],a[j+1]);
                }
            }
        }
    }
    friend void swape(T ,T);
};
main()
{
    Bubble_sort <int > p;
    p.getdata();
    p.sortdata();
    p.putdata();
    return 0;
}
