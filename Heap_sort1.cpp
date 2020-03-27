#include<iostream>
using namespace std;
void Max_heapify(int a[],int n,int i)
{
    int l,r,L;
    l=2*i+1;
    r=2*i+2;
    if(l<n && a[l]>a[i])
        L=l;
    else
        L=i;
    if(r<n && a[L]<a[r])
        L=r;
    if(L!=i)
    {
        swap(a[i],a[L]);
        Max_heapify(a,n,L);
    }

}
void Build_maxHeap(int a[],int n)
{
    for(int i=n/2-1;i>=0;i--)
        Max_heapify(a,n,i);
}
void Heap_sort(int a[],int n)
{
    Build_maxHeap(a,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        Max_heapify(a,i,0);
    }
}
main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int a[n];
    cout<<"Enter the values:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Heap_sort(a,n);
    cout<<"Heap Sort ::";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
