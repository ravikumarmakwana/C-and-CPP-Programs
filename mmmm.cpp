#include<iostream>
using namespace std;
void me(int a[],int p,int q,int r)
{
    int n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;
    int L[n1],R[n2];
    for( i=0;i<n1;i++)
        L[i]=a[p+i];
    for( i=0;i<n2;i++)
        R[i]=a[i+q+1];
    i=j=0;
    k=p;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}
void merge_sort(int a[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        me(a,p,q,r);
    }
}
main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int a[n];
    cout<<"Enter the values:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    merge_sort(a,0,n-1);
    cout<<"\nMerger Sorting::";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
