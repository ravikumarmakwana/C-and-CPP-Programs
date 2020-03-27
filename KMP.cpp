#include<iostream>
using namespace std;
string p="is";
int PI[5];
string t="This is My Movie";
void ComputePrefixFunction()
{
    int m=2;
    int k=0;
    PI[0]=0;
    for(int q=1;q<m;q++)
    {
        while(k>0 && p[k]!=p[q])
            k=PI[k];
        if(p[k]==p[q])
            k++;
        PI[q]=k;
    }
}
void KMP_Matching()
{
    int q=0,n=16,m=2;
    for(int i=0;i<n;i++)
    {
        while(q>0 && p[q]!=t[i])
            q=PI[q];
        if(p[q]==t[i])
            q++;
        if(q==m)
            cout<<"Pattern Occur at Location : "<<i-m+1<<endl;
    }
}
int main()
{
    ComputePrefixFunction();
    KMP_Matching();
    return 0;
}
