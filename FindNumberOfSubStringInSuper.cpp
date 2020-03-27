#include<iostream>
#include<cstring>
using namespace std;
int PI[20];
void Compute(string p,int m)
{
    int k=0;
    for(int q=1;q<m;q++)
    {
        while(k>0 && p[k]!=p[q])
            k=PI[k];
        if(p[k]==p[q])
            k++;
        PI[q]=k;
    }
}
void KMP(string p,string t,int m,int n)
{
    int q=0,c=0;
    for(int i=0;i<n;i++)
    {
        while(q>0 && p[q]!=t[i])
            q=PI[q];
        if(p[q]==t[i])
            q++;
        if(q==m)
        {
            cout<<"Pattern Occur at Location : "<<i-m+1<<endl;
            c++;
        }
    }
    cout<<"Number of Matching :: "<<c;
}
int main()
{
    string p,t;
    cout<<"Enter the text : ";
    getline(cin,t);
    cout<<"Enter the pattern : ";
    getline(cin,p);
    int m=p.length();
    int n=t.length();
    Compute(p,m);
    KMP(p,t,m,n);
    return 0;
}
