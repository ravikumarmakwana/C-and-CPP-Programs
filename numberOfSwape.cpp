#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c++;
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"Array is sorted in "<<c<<" steps"<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"last Element: "<<a[n-1];
    return 0;
}
